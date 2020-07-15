#pragma once

#include "DomainBehaviour.h"
/*PROTECTED REGION ID(inc1560626197460) ENABLED START*/
//Add additional includes here
/*PROTECTED REGION END*/

namespace alica
{
    class Proxy : public DomainBehaviour
    {
        public:
            Proxy();
            virtual ~Proxy();
            virtual void run(void* msg);
            /*PROTECTED REGION ID(pub1560626197460) ENABLED START*/
            //Add additional protected methods here
            /*PROTECTED REGION END*/
        protected:
            virtual void initialiseParameters();
            /*PROTECTED REGION ID(pro1560626197460) ENABLED START*/
            //Add additional protected methods here
            /*PROTECTED REGION END*/
        private:
        /*PROTECTED REGION ID(prv1560626197460) ENABLED START*/
            //Add additional private methods here
        /*PROTECTED REGION END*/
    };
} /* namespace alica */
