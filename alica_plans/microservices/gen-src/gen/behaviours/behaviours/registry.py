from typing import Any
from gen.domain.domain_behaviour import DomainBehaviour
from impl.behaviours.registry_impl import RegistryImpl


class Registry(DomainBehaviour):
    def __init__(self, context: Any) -> None:
        super().__init__("Registry", 1560262295454, context)
        self.impl = RegistryImpl(self)

    def run(self) -> None:
        pass

    def run(self, msg: Any) -> None:
        self.impl.run(msg)

    def initialise_parameters(self) -> None:
        self.impl.initialise_parameters()
