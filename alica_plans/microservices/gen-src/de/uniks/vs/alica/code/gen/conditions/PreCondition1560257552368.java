package de.uniks.vs.alica.code.gen.conditions;

import de.uniks.vs.jalica.engine.RunningPlan;
import de.uniks.vs.alica.code.gen.domain.DomainCondition;
import de.uniks.vs.alica.code.impl.conditions.PreCondition1560257552368Impl;

public class PreCondition1560257552368 extends DomainCondition {
    static long id = 1560257552368L;

    private PreCondition1560257552368Impl impl;

    public PreCondition1560257552368(Object context) {
        super(context);
        this.impl = new PreCondition1560257552368Impl();
    }

    public boolean evaluate(RunningPlan rp) {
        return this.impl.evaluate(rp);
    }
}
