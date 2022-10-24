#pragma once

#include <engine/IBehaviourCreator.h>

namespace alica {
    class BasicBehaviour;

    class BehaviourCreator: public IBehaviourCreator {
        public:
            BehaviourCreator();
            virtual ~BehaviourCreator();
            virtual BasicBehaviour* createBehaviour(long behaviourId, void* context);
    };
}
