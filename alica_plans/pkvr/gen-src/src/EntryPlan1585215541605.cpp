#include "EntryPlan1585215541605.h"
/*PROTECTED REGION ID(eph1585215541605) ENABLED START*/
//Add additional options here
/*PROTECTED REGION END*/

namespace alica
{
    //Plan:EntryPlan
/** 
* Task: EntryTask  -> EntryPoint-ID: 1585215574843
 */
std::shared_ptr<UtilityFunction> UtilityFunction1585215541605::getUtilityFunction(Plan* plan)
{
   /*PROTECTED REGION ID(1585215541605) ENABLED START*/
   std::shared_ptr<UtilityFunction> defaultFunction = std::make_shared<DefaultUtilityFunction>(plan);
   return defaultFunction;
    /*PROTECTED REGION END*/
}
}
