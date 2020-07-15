#include "pkvr/modules/pkvr_skill_module.h"

#include "pkvr/modules/communication/communication.h"
#include "pkvr/modules/model/model.h"
#include "pkvr/modules/actuators/movement.h"
#include "pkvr/modules/reasoning/reasoner.h"
#include "pkvr/modules/vision/vision.h"

#include <engine/AlicaEngine.h>

namespace pkvr_agent {
    namespace modules {
    
        void PKVRSkillModule::init(alica::AlicaEngine * alicaEngine){
            this->setEngine(alicaEngine);
            this->skills["communication"] = new communication::Communication();
            this->skills["datamodel"] = new model::Model();
            this->skills["reasoner"] = new reasoning::Reasoner(alicaEngine);
            this->skills["movement"] = new actuators::Movement();
            this->skills["vision"] = new sensors::Vision();
        };

        bool PKVRSkillModule::setEngine(alica::AlicaEngine * alicaEngine) {
            WorldModel::setEngine(alicaEngine);
            alicaEngine->setSkillModule(this);
            return true;
        };
    } 
}
