#include "behaviours/behaviours/Proxy.h"
#include "behaviours/ProxyImpl.h"

namespace alica {
    Proxy::Proxy(void* context): DomainBehaviour("Proxy", 1560626197460, context) {
        this -> impl = new ProxyImpl(this);
    }

    void Proxy::run(void* msg) {
        this -> impl -> run(msg);
    }

    void Proxy::initialiseParameters() {
        this -> impl -> initialiseParameters();
    }
}
