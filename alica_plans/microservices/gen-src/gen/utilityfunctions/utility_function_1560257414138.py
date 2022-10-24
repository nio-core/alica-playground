from engine import BasicPlan, BasicUtilityFunction
from impl.utilityfunctions.utility_function_1560257414138_impl import UtilityFunction1560257414138Impl


class UtilityFunction1560257414138(BasicUtilityFunction):
    id_ = 1560257414138

    def __init__(self) -> None:
        super().__init__()
        self.impl = UtilityFunction1560257414138Impl()

    def get_utility_function(self, basic_plan: BasicPlan) -> BasicUtilityFunction:
        return self.impl.get_utility_function(basic_plan)
