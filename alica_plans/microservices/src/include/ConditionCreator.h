#pragma once

#include <engine/IConditionCreator.h>
#include <memory>
#include <iostream>

namespace alica
{
    class BasicCondition;

    class ConditionCreator : public IConditionCreator
    {
        public:
        ConditionCreator();
        virtual ~ConditionCreator();
        std::shared_ptr<BasicCondition> createConditions(int64_t conditionConfId);
    };

} /* namespace alica */
