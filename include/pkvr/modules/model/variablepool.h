#pragma once

#include <unordered_map>
#include <iostream>

namespace pkvr_agent{
    namespace model {

        struct VariablePool {
            std::string get(std::string key) { return (variables.find(key) != variables.end()) ? variables.find(key)->second : "";}
            std::unordered_map<std::string, std::string> variables;
        };
    }
}