#pragma once

#include "DomainCondition.h"
#include <engine/BasicUtilityFunction.h>
#include <engine/UtilityFunction.h>
#include <engine/DefaultUtilityFunction.h>
/*PROTECTED REGION ID(incl1585900095632) ENABLED START*/
//Add additional includes here
/*PROTECTED REGION END*/

namespace alica
{
    /*PROTECTED REGION ID(meth1585900095632) ENABLED START*/
    //Add additional options here
    /*PROTECTED REGION END*/
    class UtilityFunction1585900095632 : public BasicUtilityFunction
    {
        std::shared_ptr<UtilityFunction> getUtilityFunction(Plan* plan);
    };
    class PreCondition1585905322414 : public DomainCondition
    {
        bool evaluate(std::shared_ptr<RunningPlan> rp);
    };
    class PreCondition1585905319053 : public DomainCondition
    {
        bool evaluate(std::shared_ptr<RunningPlan> rp);
    };
    class PreCondition1585905314721 : public DomainCondition
    {
        bool evaluate(std::shared_ptr<RunningPlan> rp);
    };
    class PreCondition1585905325269 : public DomainCondition
    {
        bool evaluate(std::shared_ptr<RunningPlan> rp);
    };
    class PreCondition1585905328225 : public DomainCondition
    {
        bool evaluate(std::shared_ptr<RunningPlan> rp);
    };
} /* namespace alica */
