#include "conditions/PreCondition1560257552368.h"
#include "conditions/PreCondition1560257552368Impl.h"
#include <engine/RunningPlan.h>

namespace alica {
    long PreCondition1560257552368::id = 1560257552368;

    PreCondition1560257552368::PreCondition1560257552368(void* context): DomainCondition(context) {
        this -> impl = new PreCondition1560257552368Impl();
    }

    bool PreCondition1560257552368::evaluate(RunningPlan* rp) {
        this -> impl -> evaluate(rp);
    }
}
