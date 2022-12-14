package autogenerated.behaviours.implementations;

import de.uniks.vs.jalica.autogenerated.DomainBehaviour;
import autogenerated.interfaces.BehaviourInterface;
import de.uniks.vs.jalica.common.utils.CommonUtils;

public class ServiceImpl extends BehaviourInterface {

    public ServiceImpl(DomainBehaviour behaviour) {
        super(behaviour);
    }

    @Override
    public void onConstructor() {

    }

    @Override
    public void onInitialiseParameters() {

    }

    @Override
    public void onRun(String msg) {
        if (this.behaviour.isFinished())
            return;
        System.out.println("B " + this.behaviour.getName());

        if (CommonUtils.B_DEBUG_debug) System.out.println("B: " +this.behaviour.getName() + " starts Behaviour " + this.behaviour.getName() + "   onRun(MSG:" + msg + ")");

        try {
            Thread.sleep(2000);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }

        if (CommonUtils.B_DEBUG_debug)  System.out.println("B: " +this.behaviour.getName() + " finished Behaviour " + this.behaviour.getName() + "   onRun(MSG:" + msg + ")");
        this.behaviour.notifyLoopFinished();

    }
}
