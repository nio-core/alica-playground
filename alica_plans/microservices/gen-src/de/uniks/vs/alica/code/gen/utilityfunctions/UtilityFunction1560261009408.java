package de.uniks.vs.alica.code.gen.utilityfunctions;

import de.uniks.vs.jalica.engine.BasicUtilityFunction;
import de.uniks.vs.jalica.engine.UtilityFunction;

import de.uniks.vs.alica.code.impl.utilityfunctions.UtilityFunction1560261009408Impl;
import de.uniks.vs.jalica.engine.model.Plan;

public class UtilityFunction1560261009408 extends BasicUtilityFunction {
    static long id = 1560261009408L;

    private UtilityFunction1560261009408Impl impl;

    public UtilityFunction1560261009408() {
        this.impl = new UtilityFunction1560261009408Impl();
    }

    public UtilityFunction getUtilityFunction(Plan plan) {
        return this.impl.getUtilityFunction(plan);
    }
}
