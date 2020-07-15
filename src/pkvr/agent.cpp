#include "pkvr/agent.h"

#include "pkvr/modules/pkvr_skill_module.h"

#include <alica_capnzero_proxy/Communication.h>
#include <engine/AlicaEngine.h>
#include <BehaviourCreator.h>
#include <ConditionCreator.h>
#include <UtilityFunctionCreator.h>
#include <ConstraintCreator.h>

#include <asp_solver_wrapper/ASPSolverWrapper.h>
#include <reasoner/asp/Solver.h>
#include <alica/reasoner/SimpleSolver.h>

//#include <aspkb/TermManager.h>

#include <chrono>
#include <iostream>
#include <thread>
#include <vector>
#include <csignal>

namespace pkvr_agent {

    bool Agent::running = false;

    Agent::Agent(std::string roleSetName, std::string masterPlanName, std::string roleSetDir) {
        this->alicaEngine = new alica::AlicaEngine(new essentials::IDManager(), roleSetName, masterPlanName, false);
        this->behaviorCreator = new alica::BehaviourCreator();
        this->conditionCreator = new alica::ConditionCreator();
        this->utilityCreator = new alica::UtilityFunctionCreator();
        this->constraintCreator = new alica::ConstraintCreator();

        this->alicaEngine->setAlicaClock(new alica::AlicaClock());
        this->alicaEngine->setCommunicator(new alica_capnzero_proxy::Communication(this->alicaEngine));

        this->skillModule = new modules::PKVRSkillModule();
        // this->skillModule->setEngine(this->alicaEngine);
        this->skillModule->init(this->alicaEngine);
        // this->worldModel->setSolver(solver);

        // ::reasoner::asp::Solver * solver = new ::reasoner::asp::Solver({});
        // alica::reasoner::ASPSolverWrapper * solverWrapper = new alica::reasoner::ASPSolverWrapper(this->alicaEngine, {});
        // solverWrapper->init(solver);
        // this->alicaEngine->addSolver(solverWrapper);
        //this->alicaEngine->addSolver(new alica::reasoner::SimpleSolver(this->alicaEngine));

        if (!this->alicaEngine->init(behaviorCreator, conditionCreator, utilityCreator, constraintCreator)) {
            std::cerr << "Agent: Unable to initialize the Alica Engine successful!" << std::endl;
        }
    }

    Agent::~Agent() { 
        std::cerr << "Agent: killed!" << std::endl;
        this->alicaEngine->shutdown();
    }

    void Agent::start() {
        running = true;
        this->alicaEngine->start();
    }

    bool Agent::isRunning(){
        return running;
    }
}


// ===============================================  M A I N  =============================================== 
void printUsage() {
    std::cout << "Usage: ./pkvr_agent -m \"Masterplan\" [-rd \"RoleSetDirectory\"] [-rset \"RoleSet\"]" << std::endl;
}

int main(int argc, char** argv) {
   if (argc < 2) {
        printUsage();
        return 0;
    }

    std::cout << "Parsing command line parameters:" << std::endl;

    std::string masterplan = "";
    std::string rolesetdir = ".";
    std::string roleset = "";

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
    }
    if (masterplan.size() == 0 || rolesetdir.size() == 0) {
        printUsage();
        return 0;
    }
    std::cout << "\tMasterplan is:       \"" << masterplan << "\"" << std::endl;
    std::cout << "\tRolset Directory is: \"" << rolesetdir << "\"" << std::endl;
    std::cout << "\tRolset is:           \"" << (roleset.empty() ? "Default" : roleset) << "\"" << std::endl;

    std::cout << "\nConstructing agent ..." << std::endl;
    pkvr_agent::Agent * agent = new  pkvr_agent::Agent(roleset, masterplan, rolesetdir);

    std::cout << "\nStarting agent ..." << std::endl;
    agent->start();

    while (agent->isRunning()) {
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }

    delete agent;

    return 0;
}
