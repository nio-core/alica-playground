package de.uniks.vs.alica.code.impl.behaviours;

import de.uniks.vs.alica.code.gen.domain.DomainBehaviour;
import de.uniks.vs.alica.code.impl.domain.DomainBehaviourImpl;

public class InitializationImpl extends DomainBehaviourImpl {
    public InitializationImpl(DomainBehaviour domain) {
        super(domain);
    }

    public void run(Object msg) {
        System.out.println("Behaviour Initialization(" + this.domain.getOwnId() + "): started");
        try {
            Thread.sleep(1000);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }

    public void initialiseParameters() {

    }
}
