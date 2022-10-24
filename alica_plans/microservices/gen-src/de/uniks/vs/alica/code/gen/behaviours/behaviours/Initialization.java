package de.uniks.vs.alica.code.gen.behaviours.behaviours;

import de.uniks.vs.alica.code.gen.domain.DomainBehaviour;
import de.uniks.vs.alica.code.impl.behaviours.InitializationImpl;

public class Initialization extends DomainBehaviour {
    public Initialization(Object context) {
        super("Initialization", 1560257552366L, context);
        this.impl = new InitializationImpl(this);
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
