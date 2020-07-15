package autogenerated.behaviours;

import de.uniks.vs.jalica.autogenerated.DomainBehaviour;
import autogenerated.interfaces.BehaviourInterface;
import autogenerated.behaviours.implementations.InitializationImpl;
import de.uniks.vs.jalica.engine.AlicaEngine;

public class Initialization extends DomainBehaviour {

    private BehaviourInterface behaviourImpl;

    public Initialization(AlicaEngine ae) {
        super("Initialization", ae);
        behaviourImpl = new InitializationImpl(this);
        behaviourImpl.onConstructor();
    }

    @Override
    public void run(Object msg) {
        behaviourImpl.onRun((String) msg);
    }

    @Override
    protected void initialiseParameters() {
        behaviourImpl.onInitialiseParameters();
    }

    @Override
    public void run() {

    }
}
