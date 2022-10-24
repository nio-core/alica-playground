package de.uniks.vs.alica.code.impl.behaviours;

import de.uniks.vs.alica.code.gen.domain.DomainBehaviour;
import de.uniks.vs.alica.code.impl.domain.DomainBehaviourImpl;

public class ServiceImpl extends DomainBehaviourImpl {
    public ServiceImpl(DomainBehaviour domain) {
        super(domain);
    }

    public void run(Object msg) {
        System.out.println("Behaviour Service(" + this.domain.getOwnId() + "): started");
    }

    public void initialiseParameters() {

    }
}
