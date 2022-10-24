from typing import Any
from engine import BasicConstraint


class ConstraintCreator(object):
    def create_constraint(self, constraint_conf_id: int, context: Any) -> BasicConstraint:
        print("ConstraintCreator: Unknown constraint requested: {}".format(constraint_conf_id))
