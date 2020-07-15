package autogenerated;

//import de.uniks.vs.jalica.autogenerated.plans.behaviour.*;
import autogenerated.behaviours.Proxy;
import de.uniks.vs.jalica.common.utils.CommonUtils;
import de.uniks.vs.jalica.engine.AlicaEngine;
import de.uniks.vs.jalica.engine.BasicBehaviour;
import de.uniks.vs.jalica.engine.IBehaviourCreator;

import  autogenerated.behaviours.Initialization;
import  autogenerated.behaviours.Service;
import  autogenerated.behaviours.Registry;

public class BehaviourCreator implements IBehaviourCreator {

    @Override
    public BasicBehaviour createBehaviour(Long behaviourConfId, AlicaEngine ae) {

//        switch(behaviourConfId)
//        {
//                case 1560257552366l:
            if (behaviourConfId == 1560257552366l)
                return new Initialization(ae);
//                break;
//                case 1560262281954l:
            if (behaviourConfId == 1560262281954l)
                return new Service(ae);
//                break;
//                case 1560262295454l:
            if (behaviourConfId == 1560262295454l)
                return new Registry(ae);
//                break;
//                case 1560626197460l:
            if (behaviourConfId == 1560626197460l)
                return new Proxy(ae);
//                break;
//            default:
                CommonUtils.aboutError( "BehaviourCreator: Unknown behaviour requested: " + behaviourConfId );
                try {
                    throw new Exception();
                } catch (Exception e) {
                    e.printStackTrace();
                }
//                break;
//        }
     return null;
    }
}
