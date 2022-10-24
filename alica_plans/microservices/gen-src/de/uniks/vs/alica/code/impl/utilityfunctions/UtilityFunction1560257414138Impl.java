package de.uniks.vs.alica.code.impl.utilityfunctions;

import de.uniks.vs.jalica.engine.DefaultUtilityFunction;
import de.uniks.vs.jalica.engine.UtilityFunction;
import de.uniks.vs.jalica.engine.model.Plan;

public class UtilityFunction1560257414138Impl {
    static long id = 1560257414138L;

    public UtilityFunction1560257414138Impl() {

    }

    public UtilityFunction getUtilityFunction(Plan plan) {
        return new DefaultUtilityFunction(plan);
    }
}
