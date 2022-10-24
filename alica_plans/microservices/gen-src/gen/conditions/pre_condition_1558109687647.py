from typing import Any
from engine import RunningPlan
from gen.domain.domain_condition import DomainCondition
from impl.conditions.pre_condition_1558109687647_impl import PreCondition1558109687647Impl


class PreCondition1558109687647(DomainCondition):
    id_ = 1558109687647

    def __init__(self, context: Any) -> None:
        super().__init__(context)
        self.impl = PreCondition1558109687647Impl()

    def evaluate(self, running_plan: RunningPlan) -> bool:
        return self.impl.evaluate(rp)
