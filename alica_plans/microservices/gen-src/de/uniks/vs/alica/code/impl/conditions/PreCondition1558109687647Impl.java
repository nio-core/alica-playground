package de.uniks.vs.alica.code.impl.conditions;

import de.uniks.vs.jalica.engine.RunningPlan;
import de.uniks.vs.alica.code.gen.domain.DomainCondition;

public class PreCondition1558109687647Impl {
    static long id = 1558109687647L;

    private DomainCondition condition;

    public PreCondition1558109687647Impl(DomainCondition condition) {
        this.condition = condition;
    }

    public boolean evaluate(RunningPlan rp) {
        System.out.println("The PreCondition " + id + " in Transition FromInitStateToRuntimeState is not implement yet!");
        return false;
    }
}
