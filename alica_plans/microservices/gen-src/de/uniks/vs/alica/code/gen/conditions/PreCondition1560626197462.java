package de.uniks.vs.alica.code.gen.conditions;

import de.uniks.vs.jalica.engine.RunningPlan;
import de.uniks.vs.alica.code.gen.domain.DomainCondition;
import de.uniks.vs.alica.code.impl.conditions.PreCondition1560626197462Impl;

public class PreCondition1560626197462 extends DomainCondition {
    static long id = 1560626197462L;

    private PreCondition1560626197462Impl impl;

    public PreCondition1560626197462(Object context) {
        super(context);
        this.impl = new PreCondition1560626197462Impl();
    }

    public boolean evaluate(RunningPlan rp) {
        return this.impl.evaluate(rp);
    }
}
