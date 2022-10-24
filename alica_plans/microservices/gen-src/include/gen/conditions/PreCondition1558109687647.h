#pragma once

namespace alica {
    class PreCondition1558109687647: public DomainCondition {
        public:
            static long id;
            PreCondition1558109687647(void* context);

        private:
            PreCondition1558109687647Impl* impl;
            bool evaluate(RunningPlan* rp);
    };
}
