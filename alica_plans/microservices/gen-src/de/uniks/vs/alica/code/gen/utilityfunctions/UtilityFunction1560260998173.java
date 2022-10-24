package de.uniks.vs.alica.code.gen.utilityfunctions;

import de.uniks.vs.jalica.engine.BasicUtilityFunction;
import de.uniks.vs.jalica.engine.UtilityFunction;

import de.uniks.vs.alica.code.impl.utilityfunctions.UtilityFunction1560260998173Impl;
import de.uniks.vs.jalica.engine.model.Plan;

public class UtilityFunction1560260998173 extends BasicUtilityFunction {
    static long id = 1560260998173L;

    private UtilityFunction1560260998173Impl impl;

    public UtilityFunction1560260998173() {
        this.impl = new UtilityFunction1560260998173Impl();
    }

    public UtilityFunction getUtilityFunction(Plan plan) {
        return this.impl.getUtilityFunction(plan);
    }
}
