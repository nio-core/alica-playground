#include "utilityfunctions/UtilityFunction1560260998173.h"
#include "utilityfunctions/UtilityFunction1560260998173Impl.h"
#include <engine/ProblemDescriptor.h>
#include <engine/RunningPlan.h>
#include <engine/BasicPlan.h>
#include <engine/UtilityFunction.h>

namespace alica {
    long UtilityFunction1560260998173::id = 1560260998173;

    UtilityFunction1560260998173::UtilityFunction1560260998173(): BasicUtilityFunction() {
        this -> impl = new UtilityFunction1560260998173Impl();
    }

    UtilityFunction* UtilityFunction1560260998173::getUtilityFunction(BasicPlan* plan) {
        return this -> impl -> getUtilityFunction(plan);
    }

    void UtilityFunction1560260998173::getConstraint(ProblemDescriptor *c, RunningPlan *rp) {

    }
}
