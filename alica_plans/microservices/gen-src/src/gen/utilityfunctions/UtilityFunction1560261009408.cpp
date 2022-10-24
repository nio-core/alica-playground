#include "utilityfunctions/UtilityFunction1560261009408.h"
#include "utilityfunctions/UtilityFunction1560261009408Impl.h"
#include <engine/ProblemDescriptor.h>
#include <engine/RunningPlan.h>
#include <engine/BasicPlan.h>
#include <engine/UtilityFunction.h>

namespace alica {
    long UtilityFunction1560261009408::id = 1560261009408;

    UtilityFunction1560261009408::UtilityFunction1560261009408(): BasicUtilityFunction() {
        this -> impl = new UtilityFunction1560261009408Impl();
    }

    UtilityFunction* UtilityFunction1560261009408::getUtilityFunction(BasicPlan* plan) {
        return this -> impl -> getUtilityFunction(plan);
    }

    void UtilityFunction1560261009408::getConstraint(ProblemDescriptor *c, RunningPlan *rp) {

    }
}
