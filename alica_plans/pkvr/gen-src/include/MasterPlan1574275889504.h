#pragma once

#include "DomainCondition.h"
#include <engine/BasicUtilityFunction.h>
#include <engine/UtilityFunction.h>
#include <engine/DefaultUtilityFunction.h>
/*PROTECTED REGION ID(incl1574275889504) ENABLED START*/
//Add additional includes here
/*PROTECTED REGION END*/

namespace alica
{
    /*PROTECTED REGION ID(meth1574275889504) ENABLED START*/
    //Add additional options here
    /*PROTECTED REGION END*/
    class UtilityFunction1574275889504 : public BasicUtilityFunction
    {
        std::shared_ptr<UtilityFunction> getUtilityFunction(Plan* plan);
    };
    class PreCondition1574516982562 : public DomainCondition
    {
        bool evaluate(std::shared_ptr<RunningPlan> rp);
    };
    class RunTimeCondition1585322978424 : public DomainCondition
    {
        bool evaluate(std::shared_ptr<RunningPlan> rp);
    };
} /* namespace alica */
