#include "DummyPlan1585849746246.h"
/*PROTECTED REGION ID(eph1585849746246) ENABLED START*/
//Add additional options here
/*PROTECTED REGION END*/

namespace alica
{
    //Plan:DummyPlan
/** 
* Task: EntryTask  -> EntryPoint-ID: 1585899401090
 */
std::shared_ptr<UtilityFunction> UtilityFunction1585849746246::getUtilityFunction(Plan* plan)
{
   /*PROTECTED REGION ID(1585849746246) ENABLED START*/
   std::shared_ptr<UtilityFunction> defaultFunction = std::make_shared<DefaultUtilityFunction>(plan);
   return defaultFunction;
    /*PROTECTED REGION END*/
}
}
