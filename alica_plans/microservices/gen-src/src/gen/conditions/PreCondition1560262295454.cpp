#include "conditions/PreCondition1560262295455.h"
#include "conditions/PreCondition1560262295455Impl.h"
#include <engine/RunningPlan.h>

namespace alica {
    long PreCondition1560262295455::id = 1560262295455;

    PreCondition1560262295455::PreCondition1560262295455(void* context): DomainCondition(context) {
        this -> impl = new PreCondition1560262295455Impl();
    }

    bool PreCondition1560262295455::evaluate(RunningPlan* rp) {
        this -> impl -> evaluate(rp);
    }
}
