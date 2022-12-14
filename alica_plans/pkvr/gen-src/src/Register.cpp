#include "Register.h"
#include <memory>

/*PROTECTED REGION ID(inccpp1575026296341) ENABLED START*/
//Add additional includes here
#include "pkvr/modules/communication/communication.h"
#include "pkvr/modules/model/model.h"

#include <cpnp/msgs/RegisterResponseMsg.capnp.h>
#include <cpnp/msgs/RegisterMsg.capnp.h>
/*PROTECTED REGION END*/

namespace alica
{
/*PROTECTED REGION ID(staticVars1575026296341) ENABLED START*/
//initialise static variables here
/*PROTECTED REGION END*/

Register::Register() : DomainBehaviour("Register")
{
    /*PROTECTED REGION ID(con1575026296341) ENABLED START*/
    this->success = false;
    this->id = this->getEngine()->getRobotName();
    /*PROTECTED REGION END*/
}

Register::~Register()
{
    /*PROTECTED REGION ID(dcon1575026296341) ENABLED START*/
    std::cout << "REGISTER: destructor" << std::endl;
    //Add additional options here
    /*PROTECTED REGION END*/
}

void Register::run(void *msg)
{
    /*PROTECTED REGION ID(run1575026296341) ENABLED START*/
    alica::ISkill *skill = this->getEngine()->getSkillModule()->get("datamodel");
    pkvr_agent::model::Model *model = static_cast<pkvr_agent::model::Model *>(skill);

    std::cout <<"\033[0;35m" << "REGISTER:  var pool agent id: " << model->pool.variables.at("id")<< "\033[0m" << std::endl;
    std::cout <<"\033[0;35m" << "REGISTER:  agent.id: " << model->agent.id << "\033[0m"<< std::endl;
    std::cout <<"\033[0;35m" << "REGISTER:  agent.role: " << model->agent.role<< "\033[0m" << std::endl;

    if (model->pool.variables.find("status") != model->pool.variables.end() && model->pool.variables.find("status")->second == "registered")
        return;
    //TODO: workaround
    model->agent.id = this->id;
    std::cout <<"\033[0;35m" << "REGISTER: var pool  agent id " << model->pool.variables.at("id") << "\033[0m"<< std::endl;
    // this->id = model->agent.id;

    std::cout <<"\033[0;35m" << "REGISTER: run " << this->id << "\033[0m"<< std::endl;

    skill = this->getEngine()->getSkillModule()->get("communication");
    pkvr_agent::communication::Communication *communication = static_cast<pkvr_agent::communication::Communication *>(skill);
    communication->setSubscriberTopic("in-" + this->id);
    communication->setPublisherTopic("reg-request");
    communication->addAddress("224.0.0.2:5555");
    communication->setCallback(&Register::onMessageResponse, &(*this));

    ::capnp::MallocMessageBuilder msgBuilder;
    pkvr_broker::msgs::RegisterMsg::Builder msBuilderRoot = msgBuilder.getRoot<pkvr_broker::msgs::RegisterMsg>();
    msBuilderRoot.setId(this->id);
    msBuilderRoot.setPw("1");
    std::cout <<"\033[0;35m" << "REGISTER: send msg"<< "\033[0m" << std::endl;
    communication->sendMessage(&msgBuilder);

    std::unique_lock<std::mutex> lock(this->m);

    while (!this->success)
    {
        std::cout << "\033[0;35m" <<"REGISTER: wait ..." << "\033[0m"<< std::endl;
        this->condVariable.wait(lock);
    }

    std::cout<< "\033[0;35m" << "REGISTER: done" << "\033[0m"<< std::endl;
    model->pool.variables["status"] = "registered";
    /*PROTECTED REGION END*/
}

void Register::initialiseParameters()
{
    /*PROTECTED REGION ID(initialiseParameters1575026296341) ENABLED START*/
    //Add additional options here
    //std::cout << "REGISTER: initialiseParameters" << std::endl;

    /*PROTECTED REGION END*/
}

/*PROTECTED REGION ID(methods1575026296341) ENABLED START*/
void Register::onMessageResponse(::capnp::FlatArrayMessageReader &subMsg)
{
    pkvr_broker::msgs::RegisterResponseMsg::Reader reader = subMsg.getRoot<pkvr_broker::msgs::RegisterResponseMsg>();
    std::string result = reader.getResult();
    std::string type = reader.getType();
    std::cout << "\033[0;35m"<< "REGISTER: id:" << this->id << "   result:" << result << "  type:" << type << "\033[0m"<< std::endl;
    this->success = true;
    this->condVariable.notify_one();
}
/*PROTECTED REGION END*/

} /* namespace alica */
