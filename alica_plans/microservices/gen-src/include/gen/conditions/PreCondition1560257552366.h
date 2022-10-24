#pragma once

#include "domain/DomainCondition.h"

namespace alica {
    class PreCondition1560257552368Impl;

    class RunningPlan;

    class PreCondition1560257552368: public DomainCondition {
        public:
            static long id;
            PreCondition1560257552368(void* context);

        private:
            PreCondition1560257552368Impl* impl;
            bool evaluate(RunningPlan* rp);
    };
}
