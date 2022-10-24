from engine import BasicPlan, DefaultUtilityFunction


class UtilityFunction1560261035058Impl(object):
    id_ = 1560261035058

    def __init__(self) -> None:
        pass

    def get_utility_function(self, plan: BasicPlan) -> DefaultUtilityFunction:
        return DefaultUtilityFunction(plan)
