package de.uniks.vs.alica.code.gen.domain;

import de.uniks.vs.alica.code.impl.domain.DomainBehaviourImpl;
import de.uniks.vs.jalica.engine.BasicBehaviour;

public abstract class DomainBehaviour extends BasicBehaviour {
    protected DomainBehaviourImpl impl;
    private long id;
    private Object context;

    public DomainBehaviour(String name, long id, Object context) {
        super(name);
        this.id = id;
        this.context = context;
        this.impl = new DomainBehaviourImpl(this);
    }

    public Object getContext() {
        return this.context;
    }

//    public long getOwnId() {
//        return this.id;
//    }
}
