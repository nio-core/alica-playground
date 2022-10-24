from engine import BasicPlan, BasicUtilityFunction
from impl.utilityfunctions.utility_function_1560261035058_impl import UtilityFunction1560261035058Impl


class UtilityFunction1560261035058(BasicUtilityFunction):
    id_ = 1560261035058

    def __init__(self) -> None:
        super().__init__()
        self.impl = UtilityFunction1560261035058Impl()

    def get_utility_function(self, basic_plan: BasicPlan) -> BasicUtilityFunction:
        return self.impl.get_utility_function(basic_plan)
