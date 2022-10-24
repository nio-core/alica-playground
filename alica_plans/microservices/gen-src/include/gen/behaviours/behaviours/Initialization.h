#pragma once

#include "domain/DomainBehaviour.h"

namespace alica {
    class InitializationImpl;

    class Initialization: public DomainBehaviour {
        public:
            Initialization(void* context);
            virtual void run(void* msg);
            virtual void initialiseParameters();

        private:
            InitializationImpl* impl;
    };
}
