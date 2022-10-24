#include "conditions/PreCondition1560626197462.h"
#include "conditions/PreCondition1560626197462Impl.h"
#include <engine/RunningPlan.h>

namespace alica {
    long PreCondition1560626197462::id = 1560626197462;

    PreCondition1560626197462::PreCondition1560626197462(void* context): DomainCondition(context) {
        this -> impl = new PreCondition1560626197462Impl();
    }

    bool PreCondition1560626197462::evaluate(RunningPlan* rp) {
        this -> impl -> evaluate(rp);
    }
}
