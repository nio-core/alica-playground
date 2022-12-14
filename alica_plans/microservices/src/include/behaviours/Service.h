#pragma once

#include "DomainBehaviour.h"
/*PROTECTED REGION ID(inc1560262281954) ENABLED START*/
//Add additional includes here
/*PROTECTED REGION END*/

namespace alica
{
    class Service : public DomainBehaviour
    {
        public:
            Service();
            virtual ~Service();
            virtual void run(void* msg);
            /*PROTECTED REGION ID(pub1560262281954) ENABLED START*/
            //Add additional protected methods here
            /*PROTECTED REGION END*/
        protected:
            virtual void initialiseParameters();
            /*PROTECTED REGION ID(pro1560262281954) ENABLED START*/
            //Add additional protected methods here
            /*PROTECTED REGION END*/
        private:
        /*PROTECTED REGION ID(prv1560262281954) ENABLED START*/
            //Add additional private methods here
        /*PROTECTED REGION END*/
    };
} /* namespace alica */
