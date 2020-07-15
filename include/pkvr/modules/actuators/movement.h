#pragma once

#include "pkvr/modules/pkvr_skill_module.h"

#include <engine/skillmanagement/SkillModule.h>

namespace pkvr_agent{
    namespace actuators {

        class Movement : public alica::ISkill {

            public:
                Movement() {};
                ~Movement() {};
        };
    }
}