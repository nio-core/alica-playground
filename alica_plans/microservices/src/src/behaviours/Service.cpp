#include  "behaviours/Service.h"
#include <memory>

/*PROTECTED REGION ID(inccpp1560262281954) ENABLED START*/
    //Add additional includes here
/*PROTECTED REGION END*/

namespace alica
{
    /*PROTECTED REGION ID(staticVars1560262281954) ENABLED START*/
    //initialise static variables here
    /*PROTECTED REGION END*/

    Service::Service() : DomainBehaviour("Service")
    {
        /*PROTECTED REGION ID(con1560262281954) ENABLED START*/
        //Add additional options here
        /*PROTECTED REGION END*/

    }
    Service::~Service()
    {
        /*PROTECTED REGION ID(dcon1560262281954) ENABLED START*/
        //Add additional options here
        /*PROTECTED REGION END*/

    }
    void Service::run(void* msg)
    {
        /*PROTECTED REGION ID(run1560262281954) ENABLED START*/
        std::cout << "\033[0;36m" << "Behaviour: run " << this->getName() << "\033[0m" << std::endl; 
        std::this_thread::sleep_for(std::chrono::milliseconds(60000));
        this->notifyLoopFinished();        //Add additional options here
        /*PROTECTED REGION END*/

    }
    void Service::initialiseParameters()
    {
        /*PROTECTED REGION ID(initialiseParameters1560262281954) ENABLED START*/
        //Add additional options here

        /*PROTECTED REGION END*/

    }
    /*PROTECTED REGION ID(methods1560262281954) ENABLED START*/
        //Add additional options here
    /*PROTECTED REGION END*/

} /* namespace alica */
