#include "BehaviourCreator.h"
#include "engine/BasicBehaviour.h"
#include  "behaviours/Initialization.h"
#include  "behaviours/Service.h"
#include  "behaviours/Registry.h"
#include  "behaviours/Proxy.h"

namespace alica
{

    BehaviourCreator::BehaviourCreator()
    {
    }

    BehaviourCreator::~BehaviourCreator()
    {
    }

    std::shared_ptr<BasicBehaviour> BehaviourCreator::createBehaviour(int64_t behaviourConfId)
    {
        switch(behaviourConfId)
        {
            case 1560257552366:
            return std::make_shared<Initialization>();
            break;
            case 1560262281954:
            return std::make_shared<Service>();
            break;
            case 1560262295454:
            return std::make_shared<Registry>();
            break;
            case 1560626197460:
            return std::make_shared<Proxy>();
            break;
            default:
            std::cerr << "BehaviourCreator: Unknown behaviour requested: " << behaviourConfId << std::endl;
            throw new std::exception();
            break;
        }
    }
}
