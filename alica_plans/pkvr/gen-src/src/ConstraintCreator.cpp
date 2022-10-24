#include "ConstraintCreator.h"

#include "constraints/MasterPlan1574275889504Constraints.h"
#include "constraints/EntryPlan1585215541605Constraints.h"
#include "constraints/DummyPlan1585849746246Constraints.h"
#include "constraints/IdlePlan1585900095632Constraints.h"
#include "constraints/Player1585922801787Constraints.h"
#include "constraints/Register1575026296341Constraints.h"
#include "constraints/WaitForStart1575039858266Constraints.h"
#include "constraints/Play1575039923358Constraints.h"
#include "constraints/Init1585210187368Constraints.h"
#include "constraints/Idle1585901211194Constraints.h"

#include <iostream>

namespace alica
{

    ConstraintCreator::ConstraintCreator()
    {
    }

    ConstraintCreator::~ConstraintCreator()
    {
    }


    std::shared_ptr<BasicConstraint> ConstraintCreator::createConstraint(int64_t constraintConfId)
    {
        switch(constraintConfId)
        {
            default:
            std::cerr << "ConstraintCreator: Unknown constraint requested: " << constraintConfId << std::endl;
            throw new std::exception();
            break;
        }
    }


}
