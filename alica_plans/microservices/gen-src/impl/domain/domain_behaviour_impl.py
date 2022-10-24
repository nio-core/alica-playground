from typing import Any
from gen.domain.domain_behaviour import DomainBehaviour


class DomainBehaviourImpl(object):
    def __init__(self, domain: DomainBehaviour) -> None:
        self.domain = domain

    def run(msg: Any) -> None:
        pass

    def initialise_parameters() -> None:
        pass
