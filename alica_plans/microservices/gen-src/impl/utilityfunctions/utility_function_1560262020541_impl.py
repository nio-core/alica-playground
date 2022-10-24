from engine import BasicPlan, DefaultUtilityFunction


class UtilityFunction1560262020541Impl(object):
    id_ = 1560262020541

    def __init__(self) -> None:
        pass

    def get_utility_function(self, plan: BasicPlan) -> DefaultUtilityFunction:
        return DefaultUtilityFunction(plan)
