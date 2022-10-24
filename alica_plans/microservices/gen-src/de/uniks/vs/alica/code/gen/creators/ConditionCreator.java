package de.uniks.vs.alica.code.gen.creators;

import de.uniks.vs.jalica.engine.BasicCondition;
import de.uniks.vs.jalica.engine.IConditionCreator;
import de.uniks.vs.alica.code.gen.conditions.PreCondition1558109687647;
import de.uniks.vs.alica.code.gen.conditions.PreCondition1560257552368;
import de.uniks.vs.alica.code.gen.conditions.PreCondition1560262281956;
import de.uniks.vs.alica.code.gen.conditions.PreCondition1560262295455;
import de.uniks.vs.alica.code.gen.conditions.PreCondition1560626197462;

public class ConditionCreator implements IConditionCreator {

    public BasicCondition createConditions(long conditionConfId, Object context) {
        switch (String.valueOf(conditionConfId)) {
            case "1558109687647":
                return new PreCondition1558109687647(context);
            case "1560257552368":
                return new PreCondition1560257552368(context);
            case "1560262281956":
                return new PreCondition1560262281956(context);
            case "1560262295455":
                return new PreCondition1560262295455(context);
            case "1560626197462":
                return new PreCondition1560626197462(context);
            default:
                System.err.println("ConditionCreator: Unknown condition id requested: " + conditionConfId);
                return null;
        }
    }
}
