from engine import BasicPlan, BasicUtilityFunction
from impl.utilityfunctions.utility_function_1560260998173_impl import UtilityFunction1560260998173Impl


class UtilityFunction1560260998173(BasicUtilityFunction):
    id_ = 1560260998173

    def __init__(self) -> None:
        super().__init__()
        self.impl = UtilityFunction1560260998173Impl()

    def get_utility_function(self, basic_plan: BasicPlan) -> BasicUtilityFunction:
        return self.impl.get_utility_function(basic_plan)
