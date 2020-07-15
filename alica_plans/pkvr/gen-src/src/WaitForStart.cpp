#include "WaitForStart.h"
#include <memory>

/*PROTECTED REGION ID(inccpp1575039858266) ENABLED START*/
#include "pkvr/modules/communication/communication.h"
#include "pkvr/modules/model/model.h"

#include <cpnp/msgs/SimStartResponseMsg.capnp.h>
//Add additional includes here
/*PROTECTED REGION END*/

namespace alica
{
/*PROTECTED REGION ID(staticVars1575039858266) ENABLED START*/
//initialise static variables here
/*PROTECTED REGION END*/

WaitForStart::WaitForStart() : DomainBehaviour("WaitForStart")
{
    /*PROTECTED REGION ID(con1575039858266) ENABLED START*/
    //Add additional options here
    this->success = false;
    /*PROTECTED REGION END*/
}
WaitForStart::~WaitForStart()
{
    /*PROTECTED REGION ID(dcon1575039858266) ENABLED START*/
    //Add additional options here
    /*PROTECTED REGION END*/
}
void WaitForStart::run(void *msg)
{
    /*PROTECTED REGION ID(run1575039858266) ENABLED START*/
    std::cout << "WAITFORSTART: run " << std::endl;
    alica::ISkill *skill = this->getEngine()->getSkillModule()->get("datamodel");
    pkvr_agent::model::Model *model = static_cast<pkvr_agent::model::Model *>(skill);

    this->id = model->agent.id;

    model->game.status = "ready_to_start";
    std::cout << "WAITFORSTART : run " << model->agent.id << std::endl;
    skill = this->getEngine()->getSkillModule()->get("communication");

    pkvr_agent::communication::Communication *communication = static_cast<pkvr_agent::communication::Communication *>(skill);
    communication->setSubscriberTopic("in-" + model->agent.id);
    communication->setPublisherTopic("out-" + model->agent.id);
    communication->setCallback(&WaitForStart::onMessageResponse, &(*this));

    std::unique_lock<std::mutex> lock(this->m);

    while (!this->success)
    {
        std::cout << "WAITFORSTART: wait ..." << std::endl;
        this->condVariable.wait(lock);
    }

    std::cout << "WAITFORSTART: done" << std::endl;
    model->game.status = "sim_start";
    //Add additional options here
    /*PROTECTED REGION END*/
}
void WaitForStart::initialiseParameters()
{
    /*PROTECTED REGION ID(initialiseParameters1575039858266) ENABLED START*/
    //Add additional options here

    /*PROTECTED REGION END*/
}
/*PROTECTED REGION ID(methods1575039858266) ENABLED START*/
void WaitForStart::onMessageResponse(::capnp::FlatArrayMessageReader &subMsg)
{
    pkvr_broker::msgs::SimStartResponseMsg::Reader reader = subMsg.getRoot<pkvr_broker::msgs::SimStartResponseMsg>();
    std::string type = reader.getType();

    if (!(type == "sim-start"))
        return;

    alica::ISkill *skill = this->getEngine()->getSkillModule()->get("datamodel");
    pkvr_agent::model::Model *model = static_cast<pkvr_agent::model::Model *>(skill);
    std::cout << "WAITFORSTART Msg Response: id:" << model->agent.id << "  type:" << type << std::endl;
    this->success = true;
    this->condVariable.notify_one();
}
/*PROTECTED REGION END*/

} /* namespace alica */
