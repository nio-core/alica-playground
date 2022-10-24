#include "UtilityFunction1560261023006Impl.h"

namespace alica {
    long UtilityFunction1560261023006Impl::id = 1560261023006;

    UtilityFunction1560261023006Impl::UtilityFunction1560261023006Impl() {

    }

    UtilityFunction* UtilityFunction1560261023006Impl::getUtilityFunction(BasicPlan* plan) {
        return new DefaultUtilityFunction(plan);
    }
}
