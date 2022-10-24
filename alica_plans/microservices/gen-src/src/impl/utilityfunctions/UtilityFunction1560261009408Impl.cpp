#include "UtilityFunction1560261009408Impl.h"

namespace alica {
    long UtilityFunction1560261009408Impl::id = 1560261009408;

    UtilityFunction1560261009408Impl::UtilityFunction1560261009408Impl() {

    }

    UtilityFunction* UtilityFunction1560261009408Impl::getUtilityFunction(BasicPlan* plan) {
        return new DefaultUtilityFunction(plan);
    }
}
