#include "UtilityFunction1560257414138Impl.h"

namespace alica {
    long UtilityFunction1560257414138Impl::id = 1560257414138;

    UtilityFunction1560257414138Impl::UtilityFunction1560257414138Impl() {

    }

    UtilityFunction* UtilityFunction1560257414138Impl::getUtilityFunction(BasicPlan* plan) {
        return new DefaultUtilityFunction(plan);
    }
}
