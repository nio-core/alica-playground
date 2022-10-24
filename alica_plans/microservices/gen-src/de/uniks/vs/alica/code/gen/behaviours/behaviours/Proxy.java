package de.uniks.vs.alica.code.gen.behaviours.behaviours;

import de.uniks.vs.alica.code.gen.domain.DomainBehaviour;
import de.uniks.vs.alica.code.impl.behaviours.ProxyImpl;

public class Proxy extends DomainBehaviour {
    public Proxy(Object context) {
        super("Proxy", 1560626197460L, context);
        this.impl = new ProxyImpl(this);
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
