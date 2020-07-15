#pragma once

#include "DomainBehaviour.h"
/*PROTECTED REGION ID(inc1560257552366) ENABLED START*/
//Add additional includes here
/*PROTECTED REGION END*/

namespace alica
{
    class Initialization : public DomainBehaviour
    {
        public:
            Initialization();
            virtual ~Initialization();
            virtual void run(void* msg) override;
            /*PROTECTED REGION ID(pub1560257552366) ENABLED START*/
            //Add additional protected methods here
            /*PROTECTED REGION END*/
        protected:
            virtual void initialiseParameters();
            /*PROTECTED REGION ID(pro1560257552366) ENABLED START*/
            //Add additional protected methods here
            /*PROTECTED REGION END*/
        private:
        /*PROTECTED REGION ID(prv1560257552366) ENABLED START*/
        //Add additional private methods here
        /*PROTECTED REGION END*/
    };
} /* namespace alica */
