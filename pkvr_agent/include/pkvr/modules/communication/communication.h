#pragma once

#include "pkvr/modules/pkvr_skill_module.h"

#include <capnzero/Publisher.h>
#include <capnzero/Subscriber.h>
#include <capnp/serialize-packed.h>
#include <engine/skillmanagement/SkillModule.h>
#include <condition_variable>
#include <mutex>

// namespace capnzero {
//     class Publisher;
//     class Subscriber;
    
// } 

namespace pkvr_agent{
    namespace communication {

        class Communication : public alica::ISkill {

            public:
                Communication();
                virtual ~Communication() {};

                void setPublisherTopic(std::string topic) {pub->setDefaultTopic(topic); }
                void setSubscriberTopic(std::string topic) {sub->setTopic(topic); }
                void addAddress(std::string address) { this->pub->addAddress(address); this->sub->addAddress(address); }
                void removeAddress(std::string address) { this->pub->removeAddress(address); this->sub->removeAddress(address); }
                bool sendMessage(::capnp::MallocMessageBuilder * msgBuilder);
                
                template <class CallbackObjType>
                void setCallback(void (CallbackObjType::* callbackFunction)(::capnp::FlatArrayMessageReader& reader), CallbackObjType* callbackObject) {
                    sub->subscribe(callbackFunction, callbackObject);
                }

            private:
                void onMessageResponse(::capnp::FlatArrayMessageReader &subMsg);
               
                capnzero::Publisher * pub ;
                capnzero::Subscriber * sub;
                std::condition_variable condVariable;
                std::mutex m;
                bool registered;

        };
    }
} // namespace pkvr_agent


