#include "DomainBehaviour.h"
/*PROTECTED REGION ID(domainBehaviourSrcHeaders) ENABLED START*/
//Add additional options here
/*PROTECTED REGION END*/

namespace alica
{
    DomainBehaviour::DomainBehaviour(std::string name) : BasicBehaviour(name)
    {
        /*PROTECTED REGION ID(domainBehaviourConstructor) ENABLED START*/
        std::cout << "\033[0;36m" << "DB: " << name << " constructor" << "\033[0m" << std::endl;
//Add additional options here
        /*PROTECTED REGION END*/
    }

    DomainBehaviour::~DomainBehaviour()
    {
        /*PROTECTED REGION ID(domainBehaviourDestructor) ENABLED START*/
//Add additional options here
        /*PROTECTED REGION END*/
    }

    /*PROTECTED REGION ID(domainBehaviourMethods) ENABLED START*/
//Add additional options here
    /*PROTECTED REGION END*/
} /* namespace alica */
