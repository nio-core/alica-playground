#pragma once

#include <engine/BasicUtilityFunction.h>

namespace alica {
    class ProblemDescriptor;

    class RunningPlan;

    class BasicPlan;

    class UtilityFunction;

    class UtilityFunction1560260998173Impl;

    class UtilityFunction1560260998173: public BasicUtilityFunction {
        public:
            static long id;
            UtilityFunction1560260998173();
            void getConstraint(ProblemDescriptor* c, RunningPlan* rp);

        private:
            UtilityFunction1560260998173Impl* impl;
            UtilityFunction* getUtilityFunction(BasicPlan* plan);
    };
}
