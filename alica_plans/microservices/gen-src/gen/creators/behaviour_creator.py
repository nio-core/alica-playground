from typing import Any
from engine import BasicBehaviour
from gen.behaviours.behaviours.initialization import Initialization
from gen.behaviours.behaviours.service import Service
from gen.behaviours.behaviours.registry import Registry
from gen.behaviours.behaviours.proxy import Proxy


class BehaviourCreator(object):
    def create_behaviour(self, behaviour_id: int, context: Any) -> BasicBehaviour:
        if behaviour_id == 1560257552366:
            return Initialization(context)
        if behaviour_id == 1560262281954:
            return Service(context)
        if behaviour_id == 1560262295454:
            return Registry(context)
        if behaviour_id == 1560626197460:
            return Proxy(context)
        print("BehaviourCreator: Unknown behaviour requested: {}".format(behaviour_id))
