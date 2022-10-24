#include "domain/DomainBehaviour.h"
#include "domain/DomainBehaviourImpl.h"
#include <string>

namespace alica {
    DomainBehaviour::DomainBehaviour(std::string name, long id, void* context): BasicBehaviour(name) {
        this -> id = id;
        this -> context = context;
        this -> impl = new DomainBehaviourImpl(this);
    }

    DomainBehaviour::~DomainBehaviour() {

    }

    void* DomainBehaviour::getContext() {
        return this -> context;
    }

    long DomainBehaviour::getOwnId() {
        return this -> id;
    }
}
