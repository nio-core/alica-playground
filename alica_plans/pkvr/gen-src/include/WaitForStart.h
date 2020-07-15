#pragma once

#include "DomainBehaviour.h"
/*PROTECTED REGION ID(inc1575039858266) ENABLED START*/
#include <capnzero/Subscriber.h>
#include <capnzero/Publisher.h>
#include <condition_variable>
#include <mutex>
/*PROTECTED REGION END*/

namespace alica
{
    class WaitForStart : public DomainBehaviour
    {
        public:
            WaitForStart();
            virtual ~WaitForStart();
            virtual void run(void* msg);
            /*PROTECTED REGION ID(pub1575039858266) ENABLED START*/
            //Add additional protected methods here
            /*PROTECTED REGION END*/
        protected:
            virtual void initialiseParameters();
            /*PROTECTED REGION ID(pro1575039858266) ENABLED START*/
            //Add additional protected methods here
            /*PROTECTED REGION END*/
        private:
        /*PROTECTED REGION ID(prv1575039858266) ENABLED START*/
            void onMessageResponse(::capnp::FlatArrayMessageReader &subMsg);
            std::string id;
            std::condition_variable condVariable;
            std::mutex m;
            bool success;
            //Add additional private methods here
        /*PROTECTED REGION END*/
    };
} /* namespace alica */
