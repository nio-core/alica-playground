package autogenerated.behaviours;

import autogenerated.behaviours.implementations.RegistryImpl;
import de.uniks.vs.alica.code.gen.domain.DomainBehaviour;
import de.uniks.vs.jalica.engine.AlicaEngine;
import autogenerated.interfaces.BehaviourInterface;

public class Registry extends DomainBehaviour {

    private BehaviourInterface behaviourImpl;

    public Registry(AlicaEngine ae) {
        super("Registry", ae);
        behaviourImpl = new RegistryImpl(this);
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
