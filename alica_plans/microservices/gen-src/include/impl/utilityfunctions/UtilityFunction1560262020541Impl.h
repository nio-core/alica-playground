#pragma once

#include <engine/BasicPlan.h>
#include <engine/UtilityFunction.h>
#include <engine/DefaultUtilityFunction.h>
#include <iostream>

namespace alica {
    class UtilityFunction1560262020541Impl {
        public:
            static long id;
            UtilityFunction1560262020541Impl();
            UtilityFunction* getUtilityFunction(BasicPlan* plan);
    };
}
