#include "utilityfunctions/UtilityFunction1560261023006.h"
#include "utilityfunctions/UtilityFunction1560261023006Impl.h"
#include <engine/ProblemDescriptor.h>
#include <engine/RunningPlan.h>
#include <engine/BasicPlan.h>
#include <engine/UtilityFunction.h>

namespace alica {
    long UtilityFunction1560261023006::id = 1560261023006;

    UtilityFunction1560261023006::UtilityFunction1560261023006(): BasicUtilityFunction() {
        this -> impl = new UtilityFunction1560261023006Impl();
    }

    UtilityFunction* UtilityFunction1560261023006::getUtilityFunction(BasicPlan* plan) {
        return this -> impl -> getUtilityFunction(plan);
    }

    void UtilityFunction1560261023006::getConstraint(ProblemDescriptor *c, RunningPlan *rp) {

    }
}
