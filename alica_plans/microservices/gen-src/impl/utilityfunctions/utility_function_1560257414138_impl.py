from engine import BasicPlan, DefaultUtilityFunction


class UtilityFunction1560257414138Impl(object):
    id_ = 1560257414138

    def __init__(self) -> None:
        pass

    def get_utility_function(self, plan: BasicPlan) -> DefaultUtilityFunction:
        return DefaultUtilityFunction(plan)
