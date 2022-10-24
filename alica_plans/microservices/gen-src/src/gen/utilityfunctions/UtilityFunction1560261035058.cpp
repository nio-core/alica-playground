#include "utilityfunctions/UtilityFunction1560261035058.h"
#include "utilityfunctions/UtilityFunction1560261035058Impl.h"
#include <engine/ProblemDescriptor.h>
#include <engine/RunningPlan.h>
#include <engine/BasicPlan.h>
#include <engine/UtilityFunction.h>

namespace alica {
    long UtilityFunction1560261035058::id = 1560261035058;

    UtilityFunction1560261035058::UtilityFunction1560261035058(): BasicUtilityFunction() {
        this -> impl = new UtilityFunction1560261035058Impl();
    }

    UtilityFunction* UtilityFunction1560261035058::getUtilityFunction(BasicPlan* plan) {
        return this -> impl -> getUtilityFunction(plan);
    }

    void UtilityFunction1560261035058::getConstraint(ProblemDescriptor *c, RunningPlan *rp) {

    }
}
