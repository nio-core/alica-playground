#pragma once

#include "domain/DomainBehaviour.h"

namespace alica {
    class RegistryImpl;

    class Registry: public DomainBehaviour {
        public:
            Registry(void* context);
            virtual void run(void* msg);
            virtual void initialiseParameters();

        private:
            RegistryImpl* impl;
    };
}
