#include "ServiceImpl.h"

namespace alica {
    ServiceImpl::ServiceImpl(DomainBehaviour* domain): DomainBehaviourImpl(domain) {

    }

    void ServiceImpl::run(void* msg) {
        std::cout << "Behaviour Service(" << this -> domain -> getOwnId() << "): started" << std::endl;
    }

    void ServiceImpl::initialiseParameters() {

    }
}
