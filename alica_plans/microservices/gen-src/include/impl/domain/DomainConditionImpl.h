#pragma once

// Forward declaration
class DomainBehaviour;

#include <engine/RunningPlan.h>
#include <iostream>

namespace alica {
    class DomainConditionImpl {
        public:
            DomainConditionImpl();
            bool evaluate(RunningPlan* rp);

        protected:
            DomainBehaviour* domain;
    };
}
