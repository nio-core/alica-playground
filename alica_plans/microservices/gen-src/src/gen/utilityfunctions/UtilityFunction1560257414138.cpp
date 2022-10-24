#include "utilityfunctions/UtilityFunction1560257414138.h"
#include "utilityfunctions/UtilityFunction1560257414138Impl.h"
#include <engine/ProblemDescriptor.h>
#include <engine/RunningPlan.h>
#include <engine/BasicPlan.h>
#include <engine/UtilityFunction.h>

namespace alica {
    long UtilityFunction1560257414138::id = 1560257414138;

    UtilityFunction1560257414138::UtilityFunction1560257414138(): BasicUtilityFunction() {
        this -> impl = new UtilityFunction1560257414138Impl();
    }

    UtilityFunction* UtilityFunction1560257414138::getUtilityFunction(BasicPlan* plan) {
        return this -> impl -> getUtilityFunction(plan);
    }

    void UtilityFunction1560257414138::getConstraint(ProblemDescriptor *c, RunningPlan *rp) {

    }
}
