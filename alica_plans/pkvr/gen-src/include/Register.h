#pragma once

#include "DomainBehaviour.h"
/*PROTECTED REGION ID(inc1575026296341) ENABLED START*/
 #include <capnzero/Subscriber.h>
 #include <capnzero/Publisher.h>
 #include <condition_variable>
 #include <mutex>
/*PROTECTED REGION END*/

namespace alica
{
    class Register : public DomainBehaviour
    {
        public:
            Register();
            virtual ~Register();
            virtual void run(void* msg);
            /*PROTECTED REGION ID(pub1575026296341) ENABLED START*/
            //Add additional protected methods here
            /*PROTECTED REGION END*/
        protected:
            virtual void initialiseParameters();
            /*PROTECTED REGION ID(pro1575026296341) ENABLED START*/
            //Add additional protected methods here
            /*PROTECTED REGION END*/
        private:
        /*PROTECTED REGION ID(prv1575026296341) ENABLED START*/
            //Add additional private methods here
            void onMessageResponse(::capnp::FlatArrayMessageReader &subMsg);
            std::string id;
            std::condition_variable condVariable;
            std::mutex m;
            bool success;
        /*PROTECTED REGION END*/
    };
} /* namespace alica */
