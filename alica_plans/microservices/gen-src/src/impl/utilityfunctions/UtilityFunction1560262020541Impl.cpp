#include "UtilityFunction1560262020541Impl.h"

namespace alica {
    long UtilityFunction1560262020541Impl::id = 1560262020541;

    UtilityFunction1560262020541Impl::UtilityFunction1560262020541Impl() {

    }

    UtilityFunction* UtilityFunction1560262020541Impl::getUtilityFunction(BasicPlan* plan) {
        return new DefaultUtilityFunction(plan);
    }
}
