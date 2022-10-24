from engine import BasicPlan, BasicUtilityFunction
from impl.utilityfunctions.utility_function_1560262020541_impl import UtilityFunction1560262020541Impl


class UtilityFunction1560262020541(BasicUtilityFunction):
    id_ = 1560262020541

    def __init__(self) -> None:
        super().__init__()
        self.impl = UtilityFunction1560262020541Impl()

    def get_utility_function(self, basic_plan: BasicPlan) -> BasicUtilityFunction:
        return self.impl.get_utility_function(basic_plan)
