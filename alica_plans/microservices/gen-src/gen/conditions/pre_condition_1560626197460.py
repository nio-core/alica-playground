from typing import Any
from engine import RunningPlan
from gen.domain.domain_condition import DomainCondition
from impl.conditions.pre_condition_1560626197462_impl import PreCondition1560626197462Impl


class PreCondition1560626197462(DomainCondition):
    id_ = 1560626197462

    def __init__(self, context: Any) -> None:
        super().__init__(context)
        self.impl = PreCondition1560626197462Impl()

    def evaluate(self, running_plan: RunningPlan) -> bool:
        return self.impl.evaluate(running_plan)
