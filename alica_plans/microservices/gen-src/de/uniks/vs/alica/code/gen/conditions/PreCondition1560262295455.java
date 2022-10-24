package de.uniks.vs.alica.code.gen.conditions;

import de.uniks.vs.jalica.engine.RunningPlan;
import de.uniks.vs.alica.code.gen.domain.DomainCondition;
import de.uniks.vs.alica.code.impl.conditions.PreCondition1560262295455Impl;

public class PreCondition1560262295455 extends DomainCondition {
    static long id = 1560262295455L;

    private PreCondition1560262295455Impl impl;

    public PreCondition1560262295455(Object context) {
        super(context);
        this.impl = new PreCondition1560262295455Impl();
    }

    public boolean evaluate(RunningPlan rp) {
        return this.impl.evaluate(rp);
    }
}
