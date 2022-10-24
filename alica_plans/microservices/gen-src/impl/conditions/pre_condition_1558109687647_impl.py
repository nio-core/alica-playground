from engine import RunningPlan, BasicPlan, DefaultUtilityFunction
from gen.domain.domain_condition import DomainCondition


class PreCondition1558109687647Impl(object):
    id_ = 1558109687647

    def __init__(self, condition: DomainCondition) -> None:
        self.condition = condition

    def evaluate(self, running_plan: RunningPlan) -> bool:
        print("The PreCondition {} in Transition FromInitStateToRuntimeState is not implement yet!".format(id_));
        return False
