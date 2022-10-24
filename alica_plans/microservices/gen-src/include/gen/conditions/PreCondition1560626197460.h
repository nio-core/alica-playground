#pragma once

#include "domain/DomainCondition.h"

namespace alica {
    class PreCondition1560626197462Impl;

    class RunningPlan;

    class PreCondition1560626197462: public DomainCondition {
        public:
            static long id;
            PreCondition1560626197462(void* context);

        private:
            PreCondition1560626197462Impl* impl;
            bool evaluate(RunningPlan* rp);
    };
}
