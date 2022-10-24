#include "behaviours/behaviours/Initialization.h"
#include "behaviours/InitializationImpl.h"

namespace alica {
    Initialization::Initialization(void* context): DomainBehaviour("Initialization", 1560257552366, context) {
        this -> impl = new InitializationImpl(this);
    }

    void Initialization::run(void* msg) {
        this -> impl -> run(msg);
    }

    void Initialization::initialiseParameters() {
        this -> impl -> initialiseParameters();
    }
}
