#include "MicroserviceAgent.h"

#include <engine/AlicaEngine.h>
#include <BehaviourCreator.h>
#include <ConditionCreator.h>
#include <UtilityFunctionCreator.h>
#include <ConstraintCreator.h>
// #include <communication/AlicaCapnzeroCommunication.h>
#include <alica_capnzero_proxy/Communication.h>
#include <SystemConfig.h>
//#include <services/WorldModel.h>

//#include <asp_solver_wrapper/ASPSolverWrapper.h>
//#include <reasoner/asp/Solver.h>

#include <chrono>
#include <iostream>
#include <thread>
#include <vector>
#include <csignal>

namespace playground
{ 

bool MicroserviceAgent::running = false;
// ###########    ./MicroserviceAgent -m InitPlan -pp '/Users/alex/Development/Dev.Cloud.Area/C++/ALICA_independent/playground/alica_plans/microservices' ###############
MicroserviceAgent::MicroserviceAgent(std::string roleSetName, std::string masterPlanName, std::string planPath, std::string roleSetDir)
{
    essentials::SystemConfig * sc = essentials::SystemConfig::getInstance();
    sc->setRootPath(planPath);
    sc->setConfigPath(planPath.append("/config/"));
    std::cout << "AGENT:: Started ..." << std::endl;
    ae = new alica::AlicaEngine(new essentials::IDManager(), roleSetName, masterPlanName, true);
     std::cout << "AGENT:: AlicaEngine started ..." << std::endl;
    bc = new alica::BehaviourCreator();
     std::cout << "AGENT:: BehaviourCreator started ..." << std::endl;
    cc = new alica::ConditionCreator();
     std::cout << "AGENT:: ConditionCreator started ..." << std::endl;
    uc = new alica::UtilityFunctionCreator();
     std::cout << "AGENT:: UtilityFunctionCreator started ..." << std::endl;
    crc = new alica::ConstraintCreator();
     std::cout << "AGENT:: ConstraintCreator started ..." << std::endl;

    ae->setAlicaClock(new alica::AlicaClock());
    // ae->setCommunicator(new alicaCapnzeroProxy::AlicaCapnzeroCommunication(ae));
    ae->setCommunicator(new alica_capnzero_proxy::Communication(ae));

    // ASP Solver
//    std::vector<char const*> args{"clingo", nullptr};
    //auto solver = new ::reasoner::asp::Solver({});
    //auto solverWrapper = new alica::reasoner::ASPSolverWrapper(ae, {});
    //solverWrapper->init(solver);
    //ae->addSolver(solverWrapper);

    //wm = WorldModel::getInstance();
    //wm->setEngine(ae);
    //wm->init();
    //wm->setSolver(solver);

    if (!ae->init(bc, cc, uc, crc)) {
        std::cerr << "AGENT:: Unable to initialize the Alica Engine successful!" << std::endl;
    }
}

void MicroserviceAgent::start(){
    running = true;
    ae->start();
}

MicroserviceAgent::~MicroserviceAgent(){
    ae->shutdown();
    delete ae->getAlicaClock();
    delete ae->getCommunicator();
    delete ae;
    delete cc;
    delete bc;
    delete uc;
    delete crc;
}

bool MicroserviceAgent::isRunning(){
    return running;
}

// ===============================================  M A I N  =============================================== 

/**
 * This is for handling [Ctrl] + [c]
 * @param sig
 */
void MicroserviceAgent::simSigintHandler(int sig)
{
    std::cout << "AGENT:: Caught SIGINT! Terminating ..." << std::endl;
    running = false;
}

} // namespace srg

void printUsage()
{
    std::cout << "AGENT:: Usage: ./Agent -m \"Masterplan\" [-rd \"RoleSetDirectory\"]  [-pp \"PlanDirectory\"] [-rset \"RoleSet\"]" << std::endl;
}

int main(int argc, char** argv)
{
    if (argc < 2) {
        printUsage();
        return 0;
    }

    std::cout << "nAgent:: Parsing command line parameters:" << std::endl;

    std::string masterplan = "";
    std::string rolesetdir = ".";
    std::string roleset = "";
    std::string planpath = "";

    for (int i = 1; i < argc; i++) {
        if (std::string(argv[i]) == "-m" || std::string(argv[i]) == "-masterplan") {
            masterplan = argv[i + 1];
            i++;
        }

        if (std::string(argv[i]) == "-rd" || std::string(argv[i]) == "-rolesetdir") {
            rolesetdir = argv[i + 1];
            i++;
        }
        if (std::string(argv[i]) == "-r" || std::string(argv[i]) == "-roleset") {
            roleset = argv[i + 1];
            i++;
        }
        if (std::string(argv[i]) == "-pp" || std::string(argv[i]) == "-planpath") {
            planpath = argv[i + 1];
            i++;
        }
    }
    if (masterplan.size() == 0 || rolesetdir.size() == 0) {
        printUsage();
        return 0;
    }
    std::cout << "\nAgent:: Plan Path is:        \"" << planpath << "\"" << std::endl;
    std::cout << "\nAgent:: Masterplan is:       \"" << masterplan << "\"" << std::endl;
    std::cout << "\nAgent:: Rolset Directory is: \"" << rolesetdir << "\"" << std::endl;
    std::cout << "\nAgent:: Rolset is:           \"" << (roleset.empty() ? "Default" : roleset) << "\"" << std::endl;
    std::cout << "\nAgent:: Constructing Agent ..." << std::endl;
    playground::MicroserviceAgent* agent = new playground::MicroserviceAgent(roleset, masterplan, planpath, rolesetdir);

    signal(SIGINT, playground::MicroserviceAgent::simSigintHandler);

    std::cout << "\nAgent:: Starting Agent ..." << std::endl;
    agent->start();
    std::cout << "\nAgent:: Agent started" << std::endl;

    while (agent->isRunning()) {
        std::this_thread::sleep_for(std::chrono::milliseconds(5000));
        agent->ae->stepNotify();
    }

    delete agent;

    return 0;
}