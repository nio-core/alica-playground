#include "behaviours/behaviours/Registry.h"
#include "behaviours/RegistryImpl.h"

namespace alica {
    Registry::Registry(void* context): DomainBehaviour("Registry", 1560262295454, context) {
        this -> impl = new RegistryImpl(this);
    }

    void Registry::run(void* msg) {
        this -> impl -> run(msg);
    }

    void Registry::initialiseParameters() {
        this -> impl -> initialiseParameters();
    }
}
