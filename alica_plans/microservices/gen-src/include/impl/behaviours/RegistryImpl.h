#pragma once

// Forward declaration
class DomainBehaviour;

#include "DomainBehaviourImpl.h"
#include <iostream>

namespace alica {
    class RegistryImpl: public DomainBehaviourImpl {
        public:
            RegistryImpl(DomainBehaviour* domain);
            virtual void run(void* msg);
            virtual void initialiseParameters();
    };
}
