from typing import Any
from gen.domain.domain_behaviour import DomainBehaviour
from impl.behaviours.initialization_impl import InitializationImpl


class Initialization(DomainBehaviour):
    def __init__(self, context: Any) -> None:
        super().__init__("Initialization", 1560257552366, context)
        self.impl = InitializationImpl(self)

    def run(self) -> None:
        pass

    def run(self, msg: Any) -> None:
        self.impl.run(msg)

    def initialise_parameters(self) -> None:
        self.impl.initialise_parameters()
