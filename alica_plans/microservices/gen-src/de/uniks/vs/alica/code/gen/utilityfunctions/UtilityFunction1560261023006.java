package de.uniks.vs.alica.code.gen.utilityfunctions;

import de.uniks.vs.alica.code.impl.utilityfunctions.UtilityFunction1560261023006Impl;
import de.uniks.vs.jalica.engine.BasicUtilityFunction;
import de.uniks.vs.jalica.engine.UtilityFunction;
import de.uniks.vs.jalica.engine.model.Plan;

public class UtilityFunction1560261023006 extends BasicUtilityFunction {
    static long id = 1560261023006L;

    private UtilityFunction1560261023006Impl impl;

    public UtilityFunction1560261023006() {
        this.impl = new UtilityFunction1560261023006Impl();
    }

    public UtilityFunction getUtilityFunction(Plan plan) {
        return this.impl.getUtilityFunction(plan);
    }
}
