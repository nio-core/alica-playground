from typing import Any
from gen.domain.domain_behaviour import DomainBehaviour
from impl.behaviours.service_impl import ServiceImpl


class Service(DomainBehaviour):
    def __init__(self, context: Any) -> None:
        super().__init__("Service", 1560262281954, context)
        self.impl = ServiceImpl(self)

    def run(self) -> None:
        pass

    def run(self, msg: Any) -> None:
        self.impl.run(msg)

    def initialise_parameters(self) -> None:
        self.impl.initialise_parameters()
