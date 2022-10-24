#include "DomainConditionImpl.h"

namespace alica {
    DomainConditionImpl::DomainConditionImpl() {

    }

    bool DomainConditionImpl::evaluate(RunningPlan* rp) {
        std::cerr << "DC-Impl: Missing link" << std::endl;
        return false;
    }
}
