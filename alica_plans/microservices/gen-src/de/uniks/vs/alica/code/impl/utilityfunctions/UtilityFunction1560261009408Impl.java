package de.uniks.vs.alica.code.impl.utilityfunctions;

import de.uniks.vs.jalica.engine.DefaultUtilityFunction;
import de.uniks.vs.jalica.engine.UtilityFunction;
import de.uniks.vs.jalica.engine.model.Plan;

public class UtilityFunction1560261009408Impl {
    static long id = 1560261009408L;

    public UtilityFunction1560261009408Impl() {

    }

    public UtilityFunction getUtilityFunction(Plan plan) {
        return new DefaultUtilityFunction(plan);
    }
}
