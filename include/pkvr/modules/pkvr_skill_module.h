#pragma once

#include <engine/skillmanagement/SkillModule.h>
#include <supplementary/InformationElement.h>
#include <supplementary/WorldModel.h>

#include <iostream>

namespace pkvr_agent {
    namespace communication { class Communication; }
    namespace modules {
        class PKVRSkillModule : public supplementary::WorldModel, public alica::SkillModule {
            public:
                PKVRSkillModule(){};
                virtual ~PKVRSkillModule(){};
                void init(alica::AlicaEngine * alicaEngine);
                bool setEngine(alica::AlicaEngine* alicaEngine);
                std::string getAgentID(){return this->agentID;};
            private:
                std::string agentID;
        };
    }
}
