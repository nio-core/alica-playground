package autogenerated.behaviours.implementations;

import de.uniks.vs.jalica.autogenerated.DomainBehaviour;
import autogenerated.interfaces.BehaviourInterface;
import de.uniks.vs.jalica.common.utils.CommonUtils;

public class InitializationImpl extends BehaviourInterface {


    public InitializationImpl(DomainBehaviour behaviour) {
        super(behaviour);
    }

    @Override
    public void onConstructor() { }

    @Override
    public void onInitialiseParameters() {
        this.behaviour.isLoop(false);
        if (CommonUtils.B_DEBUG_debug) System.out.println("B: "+this.behaviour.getName()+" onInitialiseParameters");
    }

    @Override
    public void onRun(String msg) {

        if (this.behaviour.isFinished()) {
            if (CommonUtils.B_DEBUG_debug) System.out.println("B: INITIALISATION FINISHED");
            return;
        }
        if (CommonUtils.B_DEBUG_debug) System.out.println("B: Behaviour " + this.behaviour.getName() + " runs");

        if (CommonUtils.B_DEBUG_debug) System.out.println("B: " +this.behaviour.getName() + " starts Behaviour " + this.behaviour.getName() + "   onRun(MSG:" + msg + ")");

        try {
            Thread.sleep(10000);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }

        if (CommonUtils.B_DEBUG_debug)  System.out.println("B: " +this.behaviour.getName() + " finished Behaviour " + this.behaviour.getName() + "   onRun(MSG:" + msg + ")");
        this.behaviour.notifyLoopFinished();
        if (CommonUtils.B_DEBUG_debug) System.out.println("B: INITIALISATION BEHAVIOUR FINISHED");
    }
}
