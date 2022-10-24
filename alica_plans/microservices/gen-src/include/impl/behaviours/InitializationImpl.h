#pragma once

// Forward declaration
class DomainBehaviour;

#include "DomainBehaviourImpl.h"
#include <iostream>

namespace alica {
    class InitializationImpl: public DomainBehaviourImpl {
        public:
            InitializationImpl(DomainBehaviour* domain);
            virtual void run(void* msg);
            virtual void initialiseParameters();
    };
}
