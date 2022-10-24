#include "conditions/PreCondition1560262281956.h"
#include "conditions/PreCondition1560262281956Impl.h"
#include <engine/RunningPlan.h>

namespace alica {
    long PreCondition1560262281956::id = 1560262281956;

    PreCondition1560262281956::PreCondition1560262281956(void* context): DomainCondition(context) {
        this -> impl = new PreCondition1560262281956Impl();
    }

    bool PreCondition1560262281956::evaluate(RunningPlan* rp) {
        this -> impl -> evaluate(rp);
    }
}
