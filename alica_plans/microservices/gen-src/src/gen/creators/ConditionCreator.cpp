#include "conditions/PreCondition1558109687647.h"
#include "conditions/PreCondition1560257552368.h"
#include "conditions/PreCondition1560262281956.h"
#include "conditions/PreCondition1560262295455.h"
#include "conditions/PreCondition1560626197462.h"
#include "creators/ConditionCreator.h"
#include <engine/BasicCondition.h>
#include <iostream>

namespace alica{
    ConditionCreator::ConditionCreator() {
    }

    ConditionCreator::~ConditionCreator() {
    }

    BasicCondition* ConditionCreator::createConditions(long conditionConfId, void* context) {
        switch (conditionConfId) {
            case 1558109687647:
                return new PreCondition1558109687647(context);
            case 1560257552368:
                return new PreCondition1560257552368(context);
            case 1560262281956:
                return new PreCondition1560262281956(context);
            case 1560262295455:
                return new PreCondition1560262295455(context);
            case 1560626197462:
                return new PreCondition1560626197462(context);
            default:
                std::cerr << "ConditionCreator: Unknown condition id requested: " << conditionConfId << std::endl;
                return nullptr;
        }
    }
}
