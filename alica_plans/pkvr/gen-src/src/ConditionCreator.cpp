#include "ConditionCreator.h"
#include "MasterPlan1574275889504.h"
#include "EntryPlan1585215541605.h"
#include "DummyPlan1585849746246.h"
#include "IdlePlan1585900095632.h"
#include "Player1585922801787.h"
#include "Register1575026296341.h"
#include "WaitForStart1575039858266.h"
#include "Play1575039923358.h"
#include "Init1585210187368.h"
#include "Idle1585901211194.h"

namespace alica
{

    ConditionCreator::ConditionCreator()
    {
    }
    ConditionCreator::~ConditionCreator()
    {
    }

    std::shared_ptr<BasicCondition> ConditionCreator::createConditions(long conditionConfId)
    {
        switch (conditionConfId)
        {
            case 1574516982562:
            return std::make_shared<PreCondition1574516982562>();
                break;
            case 1575027261529:
            return std::make_shared<PreCondition1575027261529>();
                break;
            case 1575039952304:
            return std::make_shared<PreCondition1575039952304>();
                break;
            case 1575039972266:
            return std::make_shared<PreCondition1575039972266>();
                break;
            case 1585322978424:
            return std::make_shared<RunTimeCondition1585322978424>();
                break;
            case 1585905314721:
            return std::make_shared<PreCondition1585905314721>();
                break;
            case 1585905319053:
            return std::make_shared<PreCondition1585905319053>();
                break;
            case 1585905322414:
            return std::make_shared<PreCondition1585905322414>();
                break;
            case 1585905325269:
            return std::make_shared<PreCondition1585905325269>();
                break;
            case 1585905328225:
            return std::make_shared<PreCondition1585905328225>();
                break;
            case 1585923038617:
            return std::make_shared<PreCondition1585923038617>();
                break;
            case 1585923041273:
            return std::make_shared<PreCondition1585923041273>();
                break;
            default:
            std::cerr << "ConditionCreator: Unknown condition id requested: " << conditionConfId << std::endl;
            throw new std::exception();
            break;
        }
    }
}
