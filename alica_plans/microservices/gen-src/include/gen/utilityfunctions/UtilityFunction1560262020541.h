#pragma once

#include <engine/BasicUtilityFunction.h>

namespace alica {
    class ProblemDescriptor;

    class RunningPlan;

    class BasicPlan;

    class UtilityFunction;

    class UtilityFunction1560262020541Impl;

    class UtilityFunction1560262020541: public BasicUtilityFunction {
        public:
            static long id;
            UtilityFunction1560262020541();
            void getConstraint(ProblemDescriptor* c, RunningPlan* rp);

        private:
            UtilityFunction1560262020541Impl* impl;
            UtilityFunction* getUtilityFunction(BasicPlan* plan);
    };
}
