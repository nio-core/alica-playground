#include "Player1585922801787.h"
/*PROTECTED REGION ID(eph1585922801787) ENABLED START*/
#include "pkvr/modules/communication/communication.h"
#include "pkvr/modules/model/model.h"

// #include <alica/reasoner/SimpleSolver.h>
// #include <alica_solver_interface/SimpleContext.h>
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
//Plan:Player
/** 
* Task: EntryTask  -> EntryPoint-ID: 1585923482304
 */
std::shared_ptr<UtilityFunction> UtilityFunction1585922801787::getUtilityFunction(Plan *plan)
{
    /*PROTECTED REGION ID(1585922801787) ENABLED START*/
    std::shared_ptr<UtilityFunction> defaultFunction = std::make_shared<DefaultUtilityFunction>(plan);
    return defaultFunction;
    /*PROTECTED REGION END*/
}
/**
* Outgoing transition:
*   - Name: 1585923038617, ConditionString: , Comment: MISSING_COMMENT
*
* Abstract plans in current state: 
*   - Register (1575026296341)
*
* Tasks in plan: 
*   - EntryTask (1585215571536) (Entrypoint: 1585923482304)
*
* States in plan: 
*   - Registration (1585923008825)
*   - Ready (1585923017320)
*   - Play (1585923023431)
*
* Variables of preconditon:
*/
bool PreCondition1585923038617::evaluate(std::shared_ptr<RunningPlan> rp)
{
    /*PROTECTED REGION ID(1585923038616) ENABLED START*/
    //std::cout << "The PreCondition 1585923038617 in Transition FromDefault NameTo Default Name is not implement yet!" << std::endl;
    // std::string id = rp->getAlicaEngine()->getRobotName();
    alica::ISkill *skill = rp->getAlicaEngine()->getSkillModule()->get("datamodel");
    pkvr_agent::model::Model *model = static_cast<pkvr_agent::model::Model *>(skill);
    std::string id = model->agent.id;

    const alica::Variable *status = rp->getActivePlan()->getVariable("status");
    // const std::string value = status->getValue();

    std::cout << "REGISTER PreCondition1585923038617: validate " << std::endl;
    // const alica::State * s1 = rp->getActiveState();
    // std::vector<const alica::VariableBinding * > variableBinding = rp->getActiveState()->getParametrisation();
    // alica::reasoner::SimpleSolver * solver = rp->getAlicaEngine()->getSolver<alica::reasoner::SimpleSolver>();
    // std::unique_ptr<SolverContext> context = solver->createSolverContext();
    // SolverVariable * variable = solver->createVariable(1, context.get());

    if (model->pool.get("status") == "registered")
        return true;
    // if (model->pool.variables.find("status") != model->pool.variables.end() && model->pool.variables.find("status")->second == "registered") {
    //     // std::cout << "PRECONDITION Registration - Ready: registration successful" << std::endl;
    //     return true;
    // }

    return false;
    /*PROTECTED REGION END*/
}
/**
* Outgoing transition:
*   - Name: 1585923041273, ConditionString: , Comment: MISSING_COMMENT
*
* Abstract plans in current state: 
*   - WaitForStart (1575039858266)
*
* Tasks in plan: 
*   - EntryTask (1585215571536) (Entrypoint: 1585923482304)
*
* States in plan: 
*   - Registration (1585923008825)
*   - Ready (1585923017320)
*   - Play (1585923023431)
*
* Variables of preconditon:
*/
bool PreCondition1585923041273::evaluate(std::shared_ptr<RunningPlan> rp)
{
    /*PROTECTED REGION ID(1585923041272) ENABLED START*/
    // std::cout << "The PreCondition 1585923041273 in Transition FromDefault NameTo Default Name is not implement yet!" << std::endl;
    // std::cout << "PRECONDITION Transition id: " <<  rp->getActiveState()->getName() << std::endl;
    alica::ISkill *skill = rp->getAlicaEngine()->getSkillModule()->get("datamodel");
    pkvr_agent::model::Model *model = static_cast<pkvr_agent::model::Model *>(skill);

    if (model->game.status == "sim_start")
        return true;
    return false;
    /*PROTECTED REGION END*/
}
} // namespace alica
