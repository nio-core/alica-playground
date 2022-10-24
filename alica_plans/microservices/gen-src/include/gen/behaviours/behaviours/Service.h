#pragma once

#include "domain/DomainBehaviour.h"

namespace alica {
    class ServiceImpl;

    class Service: public DomainBehaviour {
        public:
            Service(void* context);
            virtual void run(void* msg);
            virtual void initialiseParameters();

        private:
            ServiceImpl* impl;
    };
}
