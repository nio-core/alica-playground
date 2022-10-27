#include "pkvr/modules/communication/communication.h"

#include <cpnp/msgs/RegisterResponseMsg.capnp.h>
#include <cpnp/msgs/RegisterMsg.capnp.h>

namespace pkvr_agent {

    namespace communication {

        Communication::Communication() {
            std::cout << "COMMUNICATION: constructor"  <<std::endl;
            void * ctx = zmq_ctx_new();
            this->pub = new capnzero::Publisher(ctx, capnzero::Protocol::UDP);
            this->sub = new capnzero::Subscriber(ctx, capnzero::Protocol::UDP);
        }

        bool Communication::sendMessage(::capnp::MallocMessageBuilder * msgBuilder) {
            std::cout << "COMMUNICATION: send msg" << std::endl;            
            this->pub->send(* msgBuilder);  
            return true;
        }
    }
}