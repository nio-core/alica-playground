#pragma once

#include "domain/DomainCondition.h"

namespace alica {
    class PreCondition1560262295455Impl;

    class RunningPlan;

    class PreCondition1560262295455: public DomainCondition {
        public:
            static long id;
            PreCondition1560262295455(void* context);

        private:
            PreCondition1560262295455Impl* impl;
            bool evaluate(RunningPlan* rp);
    };
}
