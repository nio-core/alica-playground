#include "MasterPlan1574275889504.h"
/*PROTECTED REGION ID(eph1574275889504) ENABLED START*/
//Add additional options here
#include "pkvr/modules/communication/communication.h"
#include "pkvr/modules/model/model.h"

#include <alica/reasoner/SimpleSolver.h>
#include <alica_solver_interface/SimpleContext.h>
#include <engine/IRoleAssignment.h>
#include <engine/model/EntryPoint.h>
#include <engine/model/Role.h>
#include <engine/model/Variable.h>
#include <engine/model/VariableBinding.h>

#include <chrono>
#include <cstdint>
#include <iostream>
/*PROTECTED REGION END*/

namespace alica
{
//Plan:MasterPlan
//Check of PreCondition - (Name): 1574516982562, (ConditionString):  , (Comment) :

/**
     * Available Vars:
     */
bool PreCondition1574516982562::evaluate(std::shared_ptr<RunningPlan> rp)
{
    /*PROTECTED REGION ID(1574516982562) ENABLED START*/
    //std::cout << "PRECONDITION Plan:MasterPlan: evaluate" << std::endl;
    alica::ISkill *skill = rp->getAlicaEngine()->getSkillModule()->get("datamodel");
    pkvr_agent::model::Model *model = static_cast<pkvr_agent::model::Model *>(skill);
    // model->pool.variables.clear();
    std::vector<const Variable *> cVars = rp->getActivePlan()->getVariables();
    const alica::State * state = rp->getActiveState();

    if (state)
        std::cout << "PreCondition1574516982562:: active state " << state->getName() << std::endl;

    if (model->pool.variables.size() == (cVars.size() + 1))
    {
        std::string sTime = model->pool.variables.at("start_time");
        int64_t startTime = std::stoll(sTime);
        int64_t now = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();

        if ((startTime + 1000) < now)
            return true;
        return false;
    }

    const Role *role = rp->getAlicaEngine()->getRoleAssignment()->getOwnRole();
    std::cout << role->getName() << std::endl;
    model->agent.role = role->getName();

    for (const Variable *v : cVars)
    {

        if (model->pool.variables.find(v->getName()) == model->pool.variables.end())
        {
            model->pool.variables[v->getName()] = "";
            std::cout << "PreCondition1574516982562:: new variable " << v->getName() << std::endl;
        }
    }
    std::stringstream stringStream;
    int64_t now = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();
    stringStream << now;
    model->pool.variables["start_time"] = stringStream.str();
    std::cout << "PreCondition1574516982562:: time stamp " << model->pool.variables.at("start_time") << std::endl;

    return false;
    /*PROTECTED REGION END*/
}
//Check of RuntimeCondition - (Name): 1585322978424, (ConditionString): , (Comment) :

/**
     * Available Vars:
     */
bool RunTimeCondition1585322978424::evaluate(std::shared_ptr<RunningPlan> rp)
{
    /*PROTECTED REGION ID(1585322978424) ENABLED START*/
    //std::cout << "The RunTimeCondition 1585322978424 in Plan MasterPlan is not implement yet!" << std::endl;
    return true;
    /*PROTECTED REGION END*/
}
/** 
* Task: Agent1  -> EntryPoint-ID: 1585155483368
* Task: Agent2  -> EntryPoint-ID: 1585155489211
* Task: Agent3  -> EntryPoint-ID: 1585155493079
* Task: Agent4  -> EntryPoint-ID: 1585155498196
* Task: Agent5  -> EntryPoint-ID: 1585155851143
* Task: Agent6  -> EntryPoint-ID: 1585219435234
* Task: Agent7  -> EntryPoint-ID: 1585219491890
* Task: Agent8  -> EntryPoint-ID: 1585219497671
* Task: Agent9  -> EntryPoint-ID: 1585219502898
* Task: Agent10  -> EntryPoint-ID: 1585321585507
 */
std::shared_ptr<UtilityFunction> UtilityFunction1574275889504::getUtilityFunction(Plan *plan)
{
    /*PROTECTED REGION ID(1574275889504) ENABLED START*/
    std::shared_ptr<UtilityFunction> defaultFunction = std::make_shared<DefaultUtilityFunction>(plan);
    return defaultFunction;
    /*PROTECTED REGION END*/
}
} // namespace alica
