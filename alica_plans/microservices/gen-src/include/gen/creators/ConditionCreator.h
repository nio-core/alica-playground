#pragma once

#include <engine/IConditionCreator.h>

namespace alica {
    class BasicCondition;

    class ConditionCreator: public IConditionCreator {
        public:
            ConditionCreator();
            virtual ~ConditionCreator();
            BasicCondition* createConditions(long conditionConfId, void* context);
    };
}
