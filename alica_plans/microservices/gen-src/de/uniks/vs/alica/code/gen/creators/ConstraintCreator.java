package de.uniks.vs.alica.code.gen.creators;

import de.uniks.vs.jalica.engine.BasicConstraint;
import de.uniks.vs.jalica.engine.IConstraintCreator;

public class ConstraintCreator implements IConstraintCreator {

    public BasicConstraint createConstraint(long constraintConfId, Object context) {
        switch (String.valueOf(constraintConfId)) {
            default:
                System.err.println("ConstraintCreator: Unknown constraint requested: " + constraintConfId);
                return null;
        }
    }
}
