#include "Init.h"
#include <memory>

/*PROTECTED REGION ID(inccpp1585210187368) ENABLED START*/
#include "pkvr/modules/model/model.h"
/*PROTECTED REGION END*/

namespace alica
{
    /*PROTECTED REGION ID(staticVars1585210187368) ENABLED START*/
    //initialise static variables here
    /*PROTECTED REGION END*/

    Init::Init() : DomainBehaviour("Init")
    {
        /*PROTECTED REGION ID(con1585210187368) ENABLED START*/
        std::cout << "GETID: Constructor "  << std::endl;
        std::cout << "GETID:  id " << this->getEngine()->getRobotName() << std::endl;
        /*PROTECTED REGION END*/

    }
    Init::~Init()
    {
        /*PROTECTED REGION ID(dcon1585210187368) ENABLED START*/
        //Add additional options here
        /*PROTECTED REGION END*/

    }
    void Init::run(void* msg)
    {
        /*PROTECTED REGION ID(run1585210187368) ENABLED START*/
        std::cout << "GETID: run "  << std::endl;
        // this->id = this->getEngine()->getRobotName();
        
        alica::ISkill * skill = this->getEngine()->getSkillModule()->get("datamodel");
        pkvr_agent::model::Model * model = static_cast<pkvr_agent::model::Model *>(skill);
        //model->game.status = "has_id";
        
        // skill = this->getEngine()->getSkillModule()->get("communication");
        // pkvr_agent::communication::Communication * communication = static_cast<pkvr_agent::communication::Communication *>(skill);
        // communication->setSubscriberTopic("in-"+ this->id);
        // communication->setPublisherTopic("out-"+ this->id);
        // communication->setCallback(&WaitForStart::onMessageResponse, &(*this));
                
        // std::unique_lock<std::mutex> lock(this->m);

        // while (!this->success){
        //     std::cout << "WAITFORSTART: wait ..." << std::endl;
        //     this->condVariable.wait(lock);
        // }
        // model->game.status = "sim_start";
        /*PROTECTED REGION END*/

    }
    void Init::initialiseParameters()
    {
        /*PROTECTED REGION ID(initialiseParameters1585210187368) ENABLED START*/
        //Add additional options here

























        /*PROTECTED REGION END*/

    }
    /*PROTECTED REGION ID(methods1585210187368) ENABLED START*/
        //Add additional options here
    /*PROTECTED REGION END*/

} /* namespace alica */
