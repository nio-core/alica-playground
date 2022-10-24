#include "UtilityFunctionCreator.h"
#include "MasterPlan1574275889504.h"
#include "EntryPlan1585215541605.h"
#include "DummyPlan1585849746246.h"
#include "IdlePlan1585900095632.h"
#include "Player1585922801787.h"
#include <iostream>

namespace alica
{

    UtilityFunctionCreator::~UtilityFunctionCreator()
    {
    }

    UtilityFunctionCreator::UtilityFunctionCreator()
    {
    }


    std::shared_ptr<BasicUtilityFunction> UtilityFunctionCreator::createUtility(int64_t utilityfunctionConfId)
    {
        switch(utilityfunctionConfId)
        {
            case 1574275889504:
                return std::make_shared<UtilityFunction1574275889504>();
                break;
            case 1585215541605:
                return std::make_shared<UtilityFunction1585215541605>();
                break;
            case 1585849746246:
                return std::make_shared<UtilityFunction1585849746246>();
                break;
            case 1585900095632:
                return std::make_shared<UtilityFunction1585900095632>();
                break;
            case 1585922801787:
                return std::make_shared<UtilityFunction1585922801787>();
                break;
            default:
            std::cerr << "UtilityFunctionCreator: Unknown utility requested: " << utilityfunctionConfId << std::endl;
            throw new std::exception();
            break;
        }
    }


}
