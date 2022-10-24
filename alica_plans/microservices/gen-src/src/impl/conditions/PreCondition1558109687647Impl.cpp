#include <iostream>

namespace alica {
    long PreCondition1558109687647Impl::id = 1558109687647;

    PreCondition1558109687647Impl::PreCondition1558109687647Impl(DomainCondition* condition) {
        this -> condition = condition;
    }

    bool PreCondition1558109687647Impl::evaluate(RunningPlan* rp) {
        std::cerr << "The PreCondition " << this -> id << " in Transition FromInitStateToRuntimeState is not implement yet!" << std::endl;
        return false;
    }
}
