#include "creators/ConstraintCreator.h"

namespace alica {
    ConstraintCreator::ConstraintCreator() {
    }

    ConstraintCreator::~ConstraintCreator() {
    }

    BasicConstraint* ConstraintCreator::createConstraint(long constraintConfId) {
        switch(constraintConfId) {
            default:
                std::cerr << "ConstraintCreator: Unknown constraint requested: " << constraintConfId << std::endl;
                return nullptr;
        }
    }
}
