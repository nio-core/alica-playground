#pragma once

#include <engine/BasicBehaviour.h>

namespace alica {
    class DomainBehaviourImpl;

    class DomainBehaviour: public BasicBehaviour {
        public:
            DomainBehaviour(std::string name, long id, void* context);
            virtual ~DomainBehaviour();
            void* getContext();
            long getOwnId();

        protected:
            long id;
            void* context;
            DomainBehaviourImpl* impl;
    };
}
