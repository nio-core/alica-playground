#include  "behaviours/Initialization.h"
#include <memory>

/*PROTECTED REGION ID(inccpp1560257552366) ENABLED START*/
    //Add additional includes here
/*PROTECTED REGION END*/

namespace alica
{
    /*PROTECTED REGION ID(staticVars1560257552366) ENABLED START*/
    //initialise static variables here
    /*PROTECTED REGION END*/

    Initialization::Initialization() : DomainBehaviour("Initialization")
    {
        /*PROTECTED REGION ID(con1560257552366) ENABLED START*/
        //Add additional options here
        /*PROTECTED REGION END*/

    }
    Initialization::~Initialization()
    {
        /*PROTECTED REGION ID(dcon1560257552366) ENABLED START*/
        //Add additional options here
        /*PROTECTED REGION END*/

    }
    int i = 0;
    void Initialization::run(void* msg)
    {
        /*PROTECTED REGION ID(run1560257552366) ENABLED START*/
        if (this->isFinished()) {
            if (i++ < 1) 
                std::cout << "\033[0;36m" <<"B: " << this->getName() << " FINISHED"<< "\033[0m" << std::endl;
            return;
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        std::cout << "\033[0;36m" << "Behaviour: run " << this->getName() << "\033[0m" << std::endl;
        this->notifyLoopFinished();
        //Add additional options here
        /*PROTECTED REGION END*/

    }
    void Initialization::initialiseParameters()
    {
        /*PROTECTED REGION ID(initialiseParameters1560257552366) ENABLED START*/
        //Add additional options here

        /*PROTECTED REGION END*/

    }
    /*PROTECTED REGION ID(methods1560257552366) ENABLED START*/
        //Add additional options here
    /*PROTECTED REGION END*/

} /* namespace alica */
