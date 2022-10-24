#include "UtilityFunction1560260998173Impl.h"

namespace alica {
    long UtilityFunction1560260998173Impl::id = 1560260998173;

    UtilityFunction1560260998173Impl::UtilityFunction1560260998173Impl() {

    }

    UtilityFunction* UtilityFunction1560260998173Impl::getUtilityFunction(BasicPlan* plan) {
        return new DefaultUtilityFunction(plan);
    }
}
