#pragma once

#include "domain/DomainCondition.h"

namespace alica {
    class PreCondition1560262281956Impl;

    class RunningPlan;

    class PreCondition1560262281956: public DomainCondition {
        public:
            static long id;
            PreCondition1560262281956(void* context);

        private:
            PreCondition1560262281956Impl* impl;
            bool evaluate(RunningPlan* rp);
    };
}
