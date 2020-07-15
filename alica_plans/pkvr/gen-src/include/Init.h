#pragma once

#include "DomainBehaviour.h"
/*PROTECTED REGION ID(inc1585210187368) ENABLED START*/
//Add additional includes here
/*PROTECTED REGION END*/

namespace alica
{
    class Init : public DomainBehaviour
    {
        public:
            Init();
            virtual ~Init();
            virtual void run(void* msg);
            /*PROTECTED REGION ID(pub1585210187368) ENABLED START*/
            //Add additional protected methods here
            /*PROTECTED REGION END*/
        protected:
            virtual void initialiseParameters();
            /*PROTECTED REGION ID(pro1585210187368) ENABLED START*/
            //Add additional protected methods here
            /*PROTECTED REGION END*/
        private:
        /*PROTECTED REGION ID(prv1585210187368) ENABLED START*/
            //Add additional private methods here
        /*PROTECTED REGION END*/
    };
} /* namespace alica */
