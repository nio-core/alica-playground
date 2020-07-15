#pragma once

#include "DomainCondition.h"
#include <engine/BasicUtilityFunction.h>
#include <engine/UtilityFunction.h>
#include <engine/DefaultUtilityFunction.h>
/*PROTECTED REGION ID(incl1585849746246) ENABLED START*/
//Add additional includes here
/*PROTECTED REGION END*/

namespace alica
{
    /*PROTECTED REGION ID(meth1585849746246) ENABLED START*/
    //Add additional options here
    /*PROTECTED REGION END*/
    class UtilityFunction1585849746246 : public BasicUtilityFunction
    {
        std::shared_ptr<UtilityFunction> getUtilityFunction(Plan* plan);
    };
} /* namespace alica */
