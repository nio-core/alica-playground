from typing import Any
from engine import BasicBehaviour


class DomainBehaviour(BasicBehaviour):
    def __init__(self, name: str, id_: int, context: Any) -> None:
        super().__init__(name)
        self.id_ = id_
        self.context = context
        from impl.domain.domain_behaviour_impl import DomainBehaviourImpl  # importing this at the top results in circular dependency
        self.impl = DomainBehaviourImpl(self)

    def get_context(self) -> Any:
        return self.context

    def get_own_id(self) -> int:
        return self.id_
