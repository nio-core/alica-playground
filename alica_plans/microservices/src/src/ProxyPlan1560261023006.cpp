#include "ProxyPlan1560261023006.h"
/*PROTECTED REGION ID(eph1560261023006) ENABLED START*/
//Add additional options here
/*PROTECTED REGION END*/

using namespace alica;

namespace alicaAutogenerated
{
    //Plan:ProxyPlan
    /* generated comment
        Task: route  -> EntryPoint-ID: 1560626142730
    */
    shared_ptr<UtilityFunction> UtilityFunction1560261023006::getUtilityFunction(Plan* plan)
    {
       /*PROTECTED REGION ID(1560261023006) ENABLED START*/
       std::shared_ptr<UtilityFunction> defaultFunction = std::make_shared<DefaultUtilityFunction>(plan);
       return defaultFunction;
        /*PROTECTED REGION END*/
    }
}
