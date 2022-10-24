from engine import BasicUtilityFunction
from gen.utilityfunctions.utility_function_1560257414138 import UtilityFunction1560257414138
from gen.utilityfunctions.utility_function_1560260998173 import UtilityFunction1560260998173
from gen.utilityfunctions.utility_function_1560261009408 import UtilityFunction1560261009408
from gen.utilityfunctions.utility_function_1560261023006 import UtilityFunction1560261023006
from gen.utilityfunctions.utility_function_1560261035058 import UtilityFunction1560261035058
from gen.utilityfunctions.utility_function_1560262020541 import UtilityFunction1560262020541


class UtilityFunctionCreator(object):
    def create_utility(self, utility_function_conf_id: int) -> BasicUtilityFunction:
        if utility_function_conf_id == 1560257414138:
            return UtilityFunction1560257414138()
        if utility_function_conf_id == 1560260998173:
            return UtilityFunction1560260998173()
        if utility_function_conf_id == 1560261009408:
            return UtilityFunction1560261009408()
        if utility_function_conf_id == 1560261023006:
            return UtilityFunction1560261023006()
        if utility_function_conf_id == 1560261035058:
            return UtilityFunction1560261035058()
        if utility_function_conf_id == 1560262020541:
            return UtilityFunction1560262020541()
        print("UtilityFunctionCreator: Unknown utility requested: {}".format(utility_function_conf_id))
