#include "RegistryImpl.h"

namespace alica {
    RegistryImpl::RegistryImpl(DomainBehaviour* domain): DomainBehaviourImpl(domain) {

    }

    void RegistryImpl::run(void* msg) {
        std::cout << "Behaviour Registry(" << this -> domain -> getOwnId() << "): started" << std::endl;
    }

    void RegistryImpl::initialiseParameters() {

    }
}
