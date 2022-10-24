package de.uniks.vs.alica.code.gen.conditions;

import de.uniks.vs.jalica.engine.RunningPlan;
import de.uniks.vs.alica.code.gen.domain.DomainCondition;
import de.uniks.vs.alica.code.impl.conditions.PreCondition1558109687647Impl;

public class PreCondition1558109687647 extends DomainCondition {
    static long id = 1558109687647L;

    private PreCondition1558109687647Impl impl;

    public PreCondition1558109687647(Object context) {
        super(context);
        this.impl = new PreCondition1558109687647Impl(this);
    }

    public boolean evaluate(RunningPlan rp) {
        return this.impl.evaluate(rp);
    }
}
