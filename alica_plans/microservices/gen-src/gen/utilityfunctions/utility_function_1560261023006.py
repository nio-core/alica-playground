from engine import BasicPlan, BasicUtilityFunction
from impl.utilityfunctions.utility_function_1560261023006_impl import UtilityFunction1560261023006Impl


class UtilityFunction1560261023006(BasicUtilityFunction):
    id_ = 1560261023006

    def __init__(self) -> None:
        super().__init__()
        self.impl = UtilityFunction1560261023006Impl()

    def get_utility_function(self, basic_plan: BasicPlan) -> BasicUtilityFunction:
        return self.impl.get_utility_function(basic_plan)
