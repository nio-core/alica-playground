#pragma once

#include "pkvr/modules/pkvr_skill_module.h"

#include <engine/skillmanagement/SkillModule.h>

namespace pkvr_agent{
    namespace sensors {

        class Vision : public alica::ISkill {

            public:
                Vision() {};
                ~Vision() {};
        };
    }
}