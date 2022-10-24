from typing import Any
from engine import RunningPlan
from gen.domain.domain_condition import DomainCondition
from impl.conditions.pre_condition_1560257552368_impl import PreCondition1560257552368Impl


class PreCondition1560257552368(DomainCondition):
    id_ = 1560257552368

    def __init__(self, context: Any) -> None:
        super().__init__(context)
        self.impl = PreCondition1560257552368Impl()

    def evaluate(self, running_plan: RunningPlan) -> bool:
        return self.impl.evaluate(running_plan)
