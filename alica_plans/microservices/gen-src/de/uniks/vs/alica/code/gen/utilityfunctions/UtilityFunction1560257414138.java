package de.uniks.vs.alica.code.gen.utilityfunctions;

import de.uniks.vs.jalica.engine.BasicUtilityFunction;
import de.uniks.vs.jalica.engine.UtilityFunction;

import de.uniks.vs.alica.code.impl.utilityfunctions.UtilityFunction1560257414138Impl;
import de.uniks.vs.jalica.engine.model.Plan;

public class UtilityFunction1560257414138 extends BasicUtilityFunction {
    static long id = 1560257414138L;

    private UtilityFunction1560257414138Impl impl;

    public UtilityFunction1560257414138() {
        this.impl = new UtilityFunction1560257414138Impl();
    }

    public UtilityFunction getUtilityFunction(Plan plan) {
        return this.impl.getUtilityFunction(plan);
    }
}
