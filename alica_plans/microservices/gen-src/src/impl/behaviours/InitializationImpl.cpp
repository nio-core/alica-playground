#include "InitializationImpl.h"

namespace alica {
    InitializationImpl::InitializationImpl(DomainBehaviour* domain): DomainBehaviourImpl(domain) {

    }

    void InitializationImpl::run(void* msg) {
        std::cout << "Behaviour Initialization(" << this -> domain -> getOwnId() << "): started" << std::endl;
    }

    void InitializationImpl::initialiseParameters() {

    }
}
