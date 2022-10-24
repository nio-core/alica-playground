#pragma once

#include <engine/BasicUtilityFunction.h>

namespace alica {
    class ProblemDescriptor;

    class RunningPlan;

    class BasicPlan;

    class UtilityFunction;

    class UtilityFunction1560261009408Impl;

    class UtilityFunction1560261009408: public BasicUtilityFunction {
        public:
            static long id;
            UtilityFunction1560261009408();
            void getConstraint(ProblemDescriptor* c, RunningPlan* rp);

        private:
            UtilityFunction1560261009408Impl* impl;
            UtilityFunction* getUtilityFunction(BasicPlan* plan);
    };
}
