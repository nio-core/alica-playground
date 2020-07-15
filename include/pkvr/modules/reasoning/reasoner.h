#pragma once

//#include "pkvr/modules/pkvr_skill_module.h"

#include <engine/skillmanagement/SkillModule.h>

namespace alica { class AlicaEngine;
    namespace reasoner { class ASPSolverWrapper; }
}
namespace reasoner { namespace asp {class Solver; } }

namespace pkvr_agent {
    namespace reasoning {

        class Reasoner : public alica::ISkill {

            public:
                Reasoner(alica::AlicaEngine * alicaEngine);
                ~Reasoner() {};
            
            private:
                ::reasoner::asp::Solver * solver;
                alica::reasoner::ASPSolverWrapper * solverWrapper;
                alica::AlicaEngine * alicaEngine;
        };
    }
}