#include "BehaviourCreator.h"
#include "engine/BasicBehaviour.h"
#include "Register.h"
#include "WaitForStart.h"
#include "Play.h"
#include "Init.h"
#include "Idle.h"

namespace alica
{

    BehaviourCreator::BehaviourCreator()
    {
    }

    BehaviourCreator::~BehaviourCreator()
    {
    }

    std::shared_ptr<BasicBehaviour> BehaviourCreator::createBehaviour(long behaviourId)
    {
        switch(behaviourId)
        {
            case 1575026296341:
            return std::make_shared<Register>();
            break;
            case 1575039858266:
            return std::make_shared<WaitForStart>();
            break;
            case 1575039923358:
            return std::make_shared<Play>();
            break;
            case 1585210187368:
            return std::make_shared<Init>();
            break;
            case 1585901211194:
            return std::make_shared<Idle>();
            break;
            default:
            std::cerr << "BehaviourCreator: Unknown behaviour requested: " << behaviourId << std::endl;
            throw new std::exception();
            break;
        }
    }
}
