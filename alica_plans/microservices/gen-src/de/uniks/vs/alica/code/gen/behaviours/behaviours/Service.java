package de.uniks.vs.alica.code.gen.behaviours.behaviours;

import de.uniks.vs.alica.code.gen.domain.DomainBehaviour;
import de.uniks.vs.alica.code.impl.behaviours.ServiceImpl;

public class Service extends DomainBehaviour {
    public Service(Object context) {
        super("Service", 1560262281954L, context);
        this.impl = new ServiceImpl(this);
    }

    @Override
    public void run() {

    }

    public void run(Object msg) {
        this.impl.run(msg);
    }

    public void initialiseParameters() {
        this.impl.initialiseParameters();
    }
}
