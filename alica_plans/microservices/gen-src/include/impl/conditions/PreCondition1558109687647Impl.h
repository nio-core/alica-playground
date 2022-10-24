#pragma once

#include "DomainCondition.h"
#include <iostream>

namespace alica {
    class PreCondition1558109687647Impl {
        public:
            static long id;
            PreCondition1558109687647Impl(std::DomainCondition* condition);

        private:
            DomainCondition* condition;
            bool evaluate(RunningPlan* rp);
    };
}
