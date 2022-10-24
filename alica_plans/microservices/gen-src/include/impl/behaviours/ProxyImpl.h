#pragma once

// Forward declaration
class DomainBehaviour;

#include "DomainBehaviourImpl.h"
#include <iostream>

namespace alica {
    class ProxyImpl: public DomainBehaviourImpl {
        public:
            ProxyImpl(DomainBehaviour* domain);
            virtual void run(void* msg);
            virtual void initialiseParameters();
    };
}
