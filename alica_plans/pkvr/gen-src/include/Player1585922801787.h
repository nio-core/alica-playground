#pragma once

#include "DomainCondition.h"
#include <engine/BasicUtilityFunction.h>
#include <engine/UtilityFunction.h>
#include <engine/DefaultUtilityFunction.h>
/*PROTECTED REGION ID(incl1585922801787) ENABLED START*/
//Add additional includes here
/*PROTECTED REGION END*/

namespace alica
{
    /*PROTECTED REGION ID(meth1585922801787) ENABLED START*/
    //Add additional options here
    /*PROTECTED REGION END*/
    class UtilityFunction1585922801787 : public BasicUtilityFunction
    {
        std::shared_ptr<UtilityFunction> getUtilityFunction(Plan* plan);
    };
    class PreCondition1585923038617 : public DomainCondition
    {
        bool evaluate(std::shared_ptr<RunningPlan> rp);
    };
    class PreCondition1585923041273 : public DomainCondition
    {
        bool evaluate(std::shared_ptr<RunningPlan> rp);
    };
} /* namespace alica */
