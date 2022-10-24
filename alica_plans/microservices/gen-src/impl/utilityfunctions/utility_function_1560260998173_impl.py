from engine import BasicPlan, DefaultUtilityFunction


class UtilityFunction1560260998173Impl(object):
    id_ = 1560260998173

    def __init__(self) -> None:
        pass

    def get_utility_function(self, plan: BasicPlan) -> DefaultUtilityFunction:
        return DefaultUtilityFunction(plan)
