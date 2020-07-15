package autogenerated.behaviours;

import autogenerated.behaviours.implementations.ProxyImpl;
import autogenerated.interfaces.BehaviourInterface;
import de.uniks.vs.jalica.autogenerated.DomainBehaviour;
import de.uniks.vs.jalica.engine.AlicaEngine;

public class Proxy extends DomainBehaviour {

    private BehaviourInterface behaviourImpl;

    public Proxy(AlicaEngine ae) {
        super("Proxy", ae);
        behaviourImpl = new ProxyImpl(this);
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
