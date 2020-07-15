#include  "behaviours/Proxy.h"
#include <memory>

/*PROTECTED REGION ID(inccpp1560626197460) ENABLED START*/
    //Add additional includes here
/*PROTECTED REGION END*/

namespace alica
{
    /*PROTECTED REGION ID(staticVars1560626197460) ENABLED START*/
    //initialise static variables here
    /*PROTECTED REGION END*/

    Proxy::Proxy() : DomainBehaviour("Proxy")
    {
        /*PROTECTED REGION ID(con1560626197460) ENABLED START*/
        //Add additional options here
        /*PROTECTED REGION END*/

    }
    Proxy::~Proxy()
    {
        /*PROTECTED REGION ID(dcon1560626197460) ENABLED START*/
        //Add additional options here
        /*PROTECTED REGION END*/

    }
    void Proxy::run(void* msg)
    {
        /*PROTECTED REGION ID(run1560626197460) ENABLED START*/
         //std::cout << "Behaviour:  Start Proxy Behaviour" << std::endl; 
        std::this_thread::sleep_for(std::chrono::milliseconds(5000));
        std::cout << "\033[0;36m" << "Behaviour: run " << this->getName() << "\033[0m" << std::endl;
        this->notifyLoopFinished();
        //Add additional options here
        /*PROTECTED REGION END*/

    }
    void Proxy::initialiseParameters()
    {
        /*PROTECTED REGION ID(initialiseParameters1560626197460) ENABLED START*/
        //Add additional options here

        /*PROTECTED REGION END*/

    }
    /*PROTECTED REGION ID(methods1560626197460) ENABLED START*/
        //Add additional options here
    /*PROTECTED REGION END*/

} /* namespace alica */
