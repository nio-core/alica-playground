#pragma once

// Forward declaration
class DomainBehaviour;

#include "DomainBehaviourImpl.h"
#include <iostream>

namespace alica {
    class ServiceImpl: public DomainBehaviourImpl {
        public:
            ServiceImpl(DomainBehaviour* domain);
            virtual void run(void* msg);
            virtual void initialiseParameters();
    };
}
