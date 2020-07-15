#include "Play.h"
#include <memory>

/*PROTECTED REGION ID(inccpp1575039923358) ENABLED START*/
//Add additional includes here
#include "pkvr/modules/communication/communication.h"
#include "pkvr/modules/model/model.h"

#include <cpnp/msgs/ActionMsg.capnp.h>
#include <cpnp/msgs/Message.capnp.h>
#include <cpnp/msgs/EnergyMsg.capnp.h>
#include <cpnp/msgs/StepInfoMsg.capnp.h>

/*PROTECTED REGION END*/

namespace alica
{
    /*PROTECTED REGION ID(staticVars1575039923358) ENABLED START*/
//initialise static variables here
    /*PROTECTED REGION END*/

    Play::Play() : DomainBehaviour("Play")
    {
        /*PROTECTED REGION ID(con1575039923358) ENABLED START*/
    //Add additional options here
        /*PROTECTED REGION END*/

    }
    Play::~Play()
    {
        /*PROTECTED REGION ID(dcon1575039923358) ENABLED START*/
    //Add additional options here
        /*PROTECTED REGION END*/

    }
    void Play::run(void* msg)
    {
        /*PROTECTED REGION ID(run1575039923358) ENABLED START*/
    std::cout << "PLAY: run " << std::endl;
    // this->id = this->getEngine()->getRobotName();

    alica::ISkill *skill = this->getEngine()->getSkillModule()->get("datamodel");
    pkvr_agent::model::Model *model = static_cast<pkvr_agent::model::Model *>(skill);
    skill = this->getEngine()->getSkillModule()->get("communication");
    this->id = model->agent.id;
    pkvr_agent::communication::Communication *communication = static_cast<pkvr_agent::communication::Communication *>(skill);
    communication->setSubscriberTopic("in-" + this->id);
    communication->setPublisherTopic("out-" + this->id);
    communication->setCallback(&Play::onMessageResponse, &(*this));

    std::unique_lock<std::mutex> lock(this->m);
    this->running = true;

    while (this->running)
    {

        std::cout << "PLAY: next iteration" << std::endl;
        this->condVariable.wait(lock);
        std::cout << "PLAY: "
                  << " id:" << this->id << " push move message " << std::endl;
        ::capnp::MallocMessageBuilder msgBuilder;
        pkvr_broker::msgs::ActionMsg::Builder msg = msgBuilder.getRoot<pkvr_broker::msgs::ActionMsg>();
        msg.setType("action");
        pkvr_broker::msgs::ActionMsg::Content::Builder content = msg.initContent();
        content.setId(this->actionId);
        content.setType("move");
        ::capnp::List<pkvr_broker::msgs::ActionMsg::String>::Builder pList = content.initP(1);
        pkvr_broker::msgs::ActionMsg::String::Builder text = pList[0];
        std::string b2 = "B2";
        if (id.rfind("B") == (id.size() - b2.size()))
            text.setText("n");
        else
            text.setText("w");
        communication->sendMessage(&msgBuilder);
    }
    std::cout << "PLAY: finished" << std::endl;
        /*PROTECTED REGION END*/

    }
    void Play::initialiseParameters()
    {
        /*PROTECTED REGION ID(initialiseParameters1575039923358) ENABLED START*/
    //Add additional options here











        /*PROTECTED REGION END*/

    }
    /*PROTECTED REGION ID(methods1575039923358) ENABLED START*/
void Play::onMessageResponse(::capnp::FlatArrayMessageReader &msg)
{

    pkvr_broker::msgs::Message::Reader reader = msg.getRoot<pkvr_broker::msgs::Message>();
    std::string type = reader.getType();
    std::cout << "PLAY Msg Response: "
              << " id:" << this->id << " type:" << type << std::endl;

    if (type == "energy")
    {
        pkvr_broker::msgs::EnergyMsg ::Reader reader = msg.getRoot<pkvr_broker::msgs::EnergyMsg>();
        std::cout << "PLAY Msg Response: "
                  << " id:" << this->id << " ENERGY:" << reader.getEnergy() << std::endl;
    }

    else if (type == "step-info")
    {
        pkvr_broker::msgs::StepInfoMsg::Reader reader = msg.getRoot<pkvr_broker::msgs::StepInfoMsg>();
        std::cout << "PLAY Msg Response: "
                  << " id:" << this->id << " STEP:" << reader.getStep() << std::endl;
        this->actionId = reader.getId();
        this->condVariable.notify_one();
    }
}
//Add additional options here
    /*PROTECTED REGION END*/

} /* namespace alica */
