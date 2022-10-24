#pragma once

#include <engine/IConstraintCreator.h>
#include <engine/BasicConstraint.h>
#include <iostream>

namespace alica {
    class ConstraintCreator: public IConstraintCreator {
        public:
            ConstraintCreator();
            virtual ~ConstraintCreator();
            BasicConstraint* createConstraint(long constraintConfId);
    };
}
