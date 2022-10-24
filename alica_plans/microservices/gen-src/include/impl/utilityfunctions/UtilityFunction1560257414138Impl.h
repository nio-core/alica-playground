#pragma once

#include <engine/BasicPlan.h>
#include <engine/UtilityFunction.h>
#include <engine/DefaultUtilityFunction.h>
#include <iostream>

namespace alica {
    class UtilityFunction1560257414138Impl {
        public:
            static long id;
            UtilityFunction1560257414138Impl();
            UtilityFunction* getUtilityFunction(BasicPlan* plan);
    };
}
