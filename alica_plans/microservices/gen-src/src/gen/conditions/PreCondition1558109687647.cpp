#include "conditions/PreCondition1558109687647.h"
#include "conditions/PreCondition1558109687647Impl.h"
#include <engine/RunningPlan.h>

namespace alica {
    long PreCondition1558109687647::id = 1558109687647;

    PreCondition1558109687647::PreCondition1558109687647(void* context): DomainCondition(context) {
        this -> impl = new PreCondition1558109687647Impl();
    }

    bool PreCondition1558109687647::evaluate(RunningPlan* rp) {
        return this -> impl -> evaluate(rp);
    }
}
