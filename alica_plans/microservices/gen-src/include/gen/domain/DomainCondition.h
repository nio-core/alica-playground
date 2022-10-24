#pragma once

#include <engine/BasicCondition.h>

namespace alica {
    class DomainConditionImpl;

    class DomainCondition: public BasicCondition {
        public:
            DomainCondition(void* context);
            virtual ~DomainCondition();

        private:
            DomainConditionImpl* impl;
    };
}
