#pragma once

#include <engine/BasicUtilityFunction.h>

namespace alica {
    class ProblemDescriptor;

    class RunningPlan;

    class BasicPlan;

    class UtilityFunction;

    class UtilityFunction1560261023006Impl;

    class UtilityFunction1560261023006: public BasicUtilityFunction {
        public:
            static long id;
            UtilityFunction1560261023006();
            void getConstraint(ProblemDescriptor* c, RunningPlan* rp);

        private:
            UtilityFunction1560261023006Impl* impl;
            UtilityFunction* getUtilityFunction(BasicPlan* plan);
    };
}
