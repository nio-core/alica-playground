from typing import Any
from engine import RunningPlan
from gen.domain.domain_condition import DomainCondition
from impl.conditions.pre_condition_1560262281956_impl import PreCondition1560262281956Impl


class PreCondition1560262281956(DomainCondition):
    id_ = 1560262281956

    def __init__(self, context: Any) -> None:
        super().__init__(context)
        self.impl = PreCondition1560262281956Impl()

    def evaluate(self, running_plan: RunningPlan) -> bool:
        return self.impl.evaluate(running_plan)
