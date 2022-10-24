package de.uniks.vs.alica.code.impl.utilityfunctions;

import de.uniks.vs.jalica.engine.DefaultUtilityFunction;
import de.uniks.vs.jalica.engine.UtilityFunction;
import de.uniks.vs.jalica.engine.model.Plan;

public class UtilityFunction1560260998173Impl {
    static long id = 1560260998173L;

    public UtilityFunction1560260998173Impl() {

    }

    public UtilityFunction getUtilityFunction(Plan plan) {
        return new DefaultUtilityFunction(plan);
    }
}
