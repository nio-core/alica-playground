#include "creators/BehaviourCreator.h"
#include "behaviours/TestfxBehaviour.h"
#include <engine/BasicBehaviour.h>
#include <iostream>

namespace alica {
    BehaviourCreator::BehaviourCreator() {

    }

    BehaviourCreator::~BehaviourCreator() {

    }

    BasicBehaviour* BehaviourCreator::createBehaviour(long behaviourId, void* context) {
        switch(behaviourId) {
            case 1560257552366:
                return new Initialization(context);
            case 1560262281954:
                return new Service(context);
            case 1560262295454:
                return new Registry(context);
            case 1560626197460:
                return new Proxy(context);
            default:
                std::cerr << "BehaviourCreator: Unknown behaviour requested: " << behaviourId << std::endl;
                return nullptr;
        }
    }
}
