#include "utilityfunctions/UtilityFunction1560262020541.h"
#include "utilityfunctions/UtilityFunction1560262020541Impl.h"
#include <engine/ProblemDescriptor.h>
#include <engine/RunningPlan.h>
#include <engine/BasicPlan.h>
#include <engine/UtilityFunction.h>

namespace alica {
    long UtilityFunction1560262020541::id = 1560262020541;

    UtilityFunction1560262020541::UtilityFunction1560262020541(): BasicUtilityFunction() {
        this -> impl = new UtilityFunction1560262020541Impl();
    }

    UtilityFunction* UtilityFunction1560262020541::getUtilityFunction(BasicPlan* plan) {
        return this -> impl -> getUtilityFunction(plan);
    }

    void UtilityFunction1560262020541::getConstraint(ProblemDescriptor *c, RunningPlan *rp) {

    }
}
