#pragma once

// Forward declaration
struct DomainBehaviour {
    long getOwnId();
};

namespace alica {
    class DomainBehaviourImpl {
        public:
            DomainBehaviourImpl(DomainBehaviour* domain);
            virtual void run(void* msg);
            virtual void initialiseParameters();

        protected:
            DomainBehaviour* domain;
    };
}
