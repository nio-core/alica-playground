#pragma once

#include <iostream>

namespace alica {
   class AlicaEngine;
   class BehaviourCreator;
   class ConditionCreator;
   class UtilityFunctionCreator;
   class ConstraintCreator;
}

namespace pkvr_agent {
   namespace modules {
      class PKVRSkillModule;
   }
   class Agent {
       public:
         Agent(std::string roleSetName, std::string masterPlanName, std::string planPath, std::string roleSetDir);
         ~Agent();
         void start();
         static bool isRunning();
         static bool running;
        
         alica::AlicaEngine * alicaEngine; 
         alica::BehaviourCreator * behaviorCreator;
         alica::ConditionCreator * conditionCreator;
         alica::UtilityFunctionCreator * utilityCreator;
         alica::ConstraintCreator * constraintCreator;
         modules::PKVRSkillModule * skillModule;
   };
}