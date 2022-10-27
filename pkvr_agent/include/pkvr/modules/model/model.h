#pragma once

#include "pkvr/modules/pkvr_skill_module.h"

#include "pkvr/modules/model/agent.h"
#include "pkvr/modules/model/game.h"
#include "pkvr/modules/model/variablepool.h"

#include <engine/skillmanagement/SkillModule.h>

namespace pkvr_agent{
    namespace model {

        class Model : public alica::ISkill {

            public:
                Model() {};
                ~Model() {};
                pkvr_agent::model::Agent agent;
                pkvr_agent::model::Game game;
                pkvr_agent::model::VariablePool pool;
        };
    }
} // namespace pkvr_agent