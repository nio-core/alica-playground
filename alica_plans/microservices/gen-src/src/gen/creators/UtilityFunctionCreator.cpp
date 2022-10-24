#include "utilityfunctions/UtilityFunction1560257414138.h"
#include "utilityfunctions/UtilityFunction1560260998173.h"
#include "utilityfunctions/UtilityFunction1560261009408.h"
#include "utilityfunctions/UtilityFunction1560261023006.h"
#include "utilityfunctions/UtilityFunction1560261035058.h"
#include "utilityfunctions/UtilityFunction1560262020541.h"
#include "creators/UtilityFunctionCreator.h"
#include <iostream>

namespace alica {
    UtilityFunctionCreator::~UtilityFunctionCreator() {
    }

    UtilityFunctionCreator::UtilityFunctionCreator() {
    }

    BasicUtilityFunction* UtilityFunctionCreator::createUtility(long utilityFunctionConfId) {
        switch(utilityFunctionConfId) {
            case 1560257414138:
                return new UtilityFunction1560257414138();
            case 1560260998173:
                return new UtilityFunction1560260998173();
            case 1560261009408:
                return new UtilityFunction1560261009408();
            case 1560261023006:
                return new UtilityFunction1560261023006();
            case 1560261035058:
                return new UtilityFunction1560261035058();
            case 1560262020541:
                return new UtilityFunction1560262020541();
            default:
                std::cerr << "UtilityFunctionCreator: Unknown utility requested: " << utilityFunctionConfId << std::endl;
                return nullptr;
        }
    }
}
