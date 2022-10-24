#pragma once

#include <engine/IUtilityCreator.h>

namespace alica {
    class BasicUtilityFunction;

    class UtilityFunctionCreator: public IUtilityCreator {
        public:
            virtual ~UtilityFunctionCreator();
            UtilityFunctionCreator();
            BasicUtilityFunction* createUtility(long utilityFunctionConfId);
    };
}
