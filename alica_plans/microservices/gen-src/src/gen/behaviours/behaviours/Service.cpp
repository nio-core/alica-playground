#include "behaviours/behaviours/Service.h"
#include "behaviours/ServiceImpl.h"

namespace alica {
    Service::Service(void* context): DomainBehaviour("Service", 1560262281954, context) {
        this -> impl = new ServiceImpl(this);
    }

    void Service::run(void* msg) {
        this -> impl -> run(msg);
    }

    void Service::initialiseParameters() {
        this -> impl -> initialiseParameters();
    }
}
