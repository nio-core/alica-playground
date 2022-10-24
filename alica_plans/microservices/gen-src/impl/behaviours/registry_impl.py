from typing import Any
from gen.domain.domain_behaviour import DomainBehaviour
from impl.domain.domain_behaviour_impl import DomainBehaviourImpl


class RegistryImpl(DomainBehaviourImpl):
    def __init__(self, domain: DomainBehaviour) -> None:
        super().__init__(domain);

    def run(self, msg: Any) -> None:
        print("Behaviour Registry({}): started".format(self.domain.getOwnId()));

    def initialise_parameters(self) -> None:
        pass
