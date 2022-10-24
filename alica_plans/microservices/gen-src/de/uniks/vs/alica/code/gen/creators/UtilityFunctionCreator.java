package de.uniks.vs.alica.code.gen.creators;

import de.uniks.vs.jalica.engine.BasicUtilityFunction;
import de.uniks.vs.jalica.engine.IUtilityCreator;
import de.uniks.vs.alica.code.gen.utilityfunctions.UtilityFunction1560257414138;
import de.uniks.vs.alica.code.gen.utilityfunctions.UtilityFunction1560260998173;
import de.uniks.vs.alica.code.gen.utilityfunctions.UtilityFunction1560261009408;
import de.uniks.vs.alica.code.gen.utilityfunctions.UtilityFunction1560261023006;
import de.uniks.vs.alica.code.gen.utilityfunctions.UtilityFunction1560261035058;
import de.uniks.vs.alica.code.gen.utilityfunctions.UtilityFunction1560262020541;

public class UtilityFunctionCreator implements IUtilityCreator {
    public BasicUtilityFunction createUtility(long utilityFunctionConfId) {
        switch(String.valueOf(utilityFunctionConfId)) {
            case "1560257414138":
                return new UtilityFunction1560257414138();
            case "1560260998173":
                return new UtilityFunction1560260998173();
            case "1560261009408":
                return new UtilityFunction1560261009408();
            case "1560261023006":
                return new UtilityFunction1560261023006();
            case "1560261035058":
                return new UtilityFunction1560261035058();
            case "1560262020541":
                return new UtilityFunction1560262020541();
            default:
                System.err.println("UtilityFunctionCreator: Unknown utility requested: " + utilityFunctionConfId);
                return null;
        }
    }
}
