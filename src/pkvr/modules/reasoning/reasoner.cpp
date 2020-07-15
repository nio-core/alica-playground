#include "pkvr/modules/reasoning/reasoner.h"

#include <asp_solver_wrapper/ASPSolverWrapper.h>
#include <engine/AlicaEngine.h>
#include <reasoner/asp/Solver.h>

namespace pkvr_agent {
    namespace reasoning {

        Reasoner::Reasoner(alica::AlicaEngine * alicaEngine) {
            this->alicaEngine = alicaEngine;
            this->solver = new ::reasoner::asp::Solver({});
            this->solverWrapper = new alica::reasoner::ASPSolverWrapper(this->alicaEngine, {});
            this->solverWrapper->init(this->solver);
        }
    }
}