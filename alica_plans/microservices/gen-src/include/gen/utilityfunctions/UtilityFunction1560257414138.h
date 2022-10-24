#pragma once

#include <engine/BasicUtilityFunction.h>

namespace alica {
    class ProblemDescriptor;

    class RunningPlan;

    class BasicPlan;

    class UtilityFunction;

    class UtilityFunction1560257414138Impl;

    class UtilityFunction1560257414138: public BasicUtilityFunction {
        public:
            static long id;
            UtilityFunction1560257414138();
            void getConstraint(ProblemDescriptor* c, RunningPlan* rp);

        private:
            UtilityFunction1560257414138Impl* impl;
            UtilityFunction* getUtilityFunction(BasicPlan* plan);
    };
}
