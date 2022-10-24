#include "ProxyImpl.h"

namespace alica {
    ProxyImpl::ProxyImpl(DomainBehaviour* domain): DomainBehaviourImpl(domain) {

    }

    void ProxyImpl::run(void* msg) {
        std::cout << "Behaviour Proxy(" << this -> domain -> getOwnId() << "): started" << std::endl;
    }

    void ProxyImpl::initialiseParameters() {

    }
}
