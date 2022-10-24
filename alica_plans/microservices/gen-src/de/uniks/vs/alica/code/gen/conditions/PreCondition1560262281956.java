package de.uniks.vs.alica.code.gen.conditions;

import de.uniks.vs.jalica.engine.RunningPlan;
import de.uniks.vs.alica.code.gen.domain.DomainCondition;
import de.uniks.vs.alica.code.impl.conditions.PreCondition1560262281956Impl;

public class PreCondition1560262281956 extends DomainCondition {
    static long id = 1560262281956L;

    private PreCondition1560262281956Impl impl;

    public PreCondition1560262281956(Object context) {
        super(context);
        this.impl = new PreCondition1560262281956Impl();
    }

    public boolean evaluate(RunningPlan rp) {
        return this.impl.evaluate(rp);
    }
}
