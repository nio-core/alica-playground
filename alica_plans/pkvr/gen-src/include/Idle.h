#pragma once

#include "DomainBehaviour.h"
/*PROTECTED REGION ID(inc1585901211194) ENABLED START*/
//Add additional includes here
/*PROTECTED REGION END*/

namespace alica
{
    class Idle : public DomainBehaviour
    {
        public:
            Idle();
            virtual ~Idle();
            virtual void run(void* msg);
            /*PROTECTED REGION ID(pub1585901211194) ENABLED START*/
            //Add additional protected methods here
            /*PROTECTED REGION END*/
        protected:
            virtual void initialiseParameters();
            /*PROTECTED REGION ID(pro1585901211194) ENABLED START*/
            //Add additional protected methods here
            /*PROTECTED REGION END*/
        private:
        /*PROTECTED REGION ID(prv1585901211194) ENABLED START*/
            //Add additional private methods here
        /*PROTECTED REGION END*/
    };
} /* namespace alica */
