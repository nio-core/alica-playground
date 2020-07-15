#pragma once

#include "DomainBehaviour.h"
/*PROTECTED REGION ID(inc1575039923358) ENABLED START*/
//Add additional includes here
 #include <capnzero/Subscriber.h>
 #include <capnzero/Publisher.h>
 #include <condition_variable>
 #include <mutex>
/*PROTECTED REGION END*/

namespace alica
{
    class Play : public DomainBehaviour
    {
        public:
            Play();
            virtual ~Play();
            virtual void run(void* msg);
            /*PROTECTED REGION ID(pub1575039923358) ENABLED START*/
            //Add additional protected methods here
            /*PROTECTED REGION END*/
        protected:
            virtual void initialiseParameters();
            /*PROTECTED REGION ID(pro1575039923358) ENABLED START*/
            //Add additional protected methods here
            /*PROTECTED REGION END*/
        private:
        /*PROTECTED REGION ID(prv1575039923358) ENABLED START*/
            void onMessageResponse(::capnp::FlatArrayMessageReader &msg);
            std::string id;
            u_int64_t actionId; 
            std::condition_variable condVariable;
            std::mutex m; 
            bool running;
            //Add additional private methods here
        /*PROTECTED REGION END*/
    };
} /* namespace alica */
