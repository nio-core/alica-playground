package de.uniks.vs.alica.code.impl.domain;

import de.uniks.vs.jalica.engine.RunningPlan;

public class DomainConditionImpl {
    public DomainConditionImpl() {

    }

    public boolean evaluate(RunningPlan rp) {
        System.out.println("DC-Impl: Missing link");
        return false;
    }
}
