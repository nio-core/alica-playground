package de.uniks.vs.alica.code.gen.domain;

import de.uniks.vs.alica.code.impl.domain.DomainConditionImpl;
import de.uniks.vs.jalica.engine.BasicCondition;

public abstract class DomainCondition extends BasicCondition {
    protected DomainConditionImpl impl;

    public DomainCondition(Object context) {
        super();
    }
}
