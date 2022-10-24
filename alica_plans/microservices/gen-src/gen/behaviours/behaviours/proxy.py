from typing import Any
from gen.domain.domain_behaviour import DomainBehaviour
from impl.behaviours.proxy_impl import ProxyImpl


class Proxy(DomainBehaviour):
    def __init__(self, context: Any) -> None:
        super().__init__("Proxy", 1560626197460, context)
        self.impl = ProxyImpl(self)

    def run(self) -> None:
        pass

    def run(self, msg: Any) -> None:
        self.impl.run(msg)

    def initialise_parameters(self) -> None:
        self.impl.initialise_parameters()
