from typing import Any
from engine import BasicCondition
from gen.conditions.pre_condition_1558109687647 import PreCondition1558109687647
from gen.conditions.pre_condition_1560257552368 import PreCondition1560257552368
from gen.conditions.pre_condition_1560262281956 import PreCondition1560262281956
from gen.conditions.pre_condition_1560262295455 import PreCondition1560262295455
from gen.conditions.pre_condition_1560626197462 import PreCondition1560626197462


class ConditionCreator(object):
    def create_conditions(self, condition_conf_id: int, context: Any) -> BasicCondition:
        if condition_conf_id == 1558109687647:
            return PreCondition1558109687647(context)
        if condition_conf_id == 1560257552368:
            return PreCondition1560257552368(context)
        if condition_conf_id == 1560262281956:
            return PreCondition1560262281956(context)
        if condition_conf_id == 1560262295455:
            return PreCondition1560262295455(context)
        if condition_conf_id == 1560626197462:
            return PreCondition1560626197462(context)
        print("ConditionCreator: Unknown condition id requested: {}".format(condition_conf_id))
