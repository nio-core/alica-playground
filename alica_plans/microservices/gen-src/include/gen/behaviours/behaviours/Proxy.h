#pragma once

#include "domain/DomainBehaviour.h"

namespace alica {
    class ProxyImpl;

    class Proxy: public DomainBehaviour {
        public:
            Proxy(void* context);
            virtual void run(void* msg);
            virtual void initialiseParameters();

        private:
            ProxyImpl* impl;
    };
}
