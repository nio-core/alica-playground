from typing import Any
from engine import BasicCondition, RunningPlan
from impl.domain.domain_condition_impl import DomainConditionImpl


class DomainCondition(BasicCondition):
    def __init__(self, context: Any) -> None:
        super().__init__()
        self.impl = DomainConditionImpl()
