#include "UtilityFunction1560261035058Impl.h"

namespace alica {
    long UtilityFunction1560261035058Impl::id = 1560261035058;

    UtilityFunction1560261035058Impl::UtilityFunction1560261035058Impl() {

    }

    UtilityFunction* UtilityFunction1560261035058Impl::getUtilityFunction(BasicPlan* plan) {
        return new DefaultUtilityFunction(plan);
    }
}
