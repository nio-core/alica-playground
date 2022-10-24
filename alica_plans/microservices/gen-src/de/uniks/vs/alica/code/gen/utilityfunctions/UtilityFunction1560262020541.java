package de.uniks.vs.alica.code.gen.utilityfunctions;

import de.uniks.vs.alica.code.impl.utilityfunctions.UtilityFunction1560262020541Impl;
import de.uniks.vs.jalica.engine.BasicUtilityFunction;
import de.uniks.vs.jalica.engine.UtilityFunction;
import de.uniks.vs.jalica.engine.model.Plan;

public class UtilityFunction1560262020541 extends BasicUtilityFunction {
    static long id = 1560262020541L;

    private UtilityFunction1560262020541Impl impl;

    public UtilityFunction1560262020541() {
        this.impl = new UtilityFunction1560262020541Impl();
    }

    public UtilityFunction getUtilityFunction(Plan plan) {
        return this.impl.getUtilityFunction(plan);
    }
}
