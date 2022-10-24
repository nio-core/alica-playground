package de.uniks.vs.alica.code.gen.creators;

import de.uniks.vs.jalica.engine.BasicBehaviour;
import de.uniks.vs.jalica.engine.IBehaviourCreator;
import de.uniks.vs.alica.code.gen.behaviours.behaviours.Initialization;
import de.uniks.vs.alica.code.gen.behaviours.behaviours.Service;
import de.uniks.vs.alica.code.gen.behaviours.behaviours.Registry;
import de.uniks.vs.alica.code.gen.behaviours.behaviours.Proxy;

public class BehaviourCreator implements IBehaviourCreator {
    public BasicBehaviour createBehaviour(long behaviourId, Object context) {
        switch (String.valueOf(behaviourId)) {
            case "1560257552366":
                return new Initialization(context);
            case "1560262281954":
                return new Service(context);
            case "1560262295454":
                return new Registry(context);
            case "1560626197460":
                return new Proxy(context);
            default:
                System.err.println("BehaviourCreator: Unknown behaviour requested: " + behaviourId);
                return null;
        }
    }
}
