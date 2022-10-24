package de.uniks.vs.alica.code.gen.behaviours.behaviours;

import de.uniks.vs.alica.code.gen.domain.DomainBehaviour;
import de.uniks.vs.alica.code.impl.behaviours.RegistryImpl;

public class Registry extends DomainBehaviour {
    public Registry(Object context) {
        super("Registry", 1560262295454L, context);
        this.impl = new RegistryImpl(this);
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
