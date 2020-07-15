{
  "id" : 1585849746246,
  "name" : "DummyPlan",
  "comment" : "",
  "relativeDirectory" : "",
  "variables" : [ ],
  "masterPlan" : true,
  "utilityThreshold" : 0.0,
  "preCondition" : null,
  "runtimeCondition" : null,
  "entryPoints" : [ {
    "id" : 1585899401090,
    "name" : "1585899401090",
    "comment" : "",
    "successRequired" : false,
    "minCardinality" : 0,
    "maxCardinality" : 2147483647,
    "task" : "TaskRepo.tsk#1585215571536",
    "state" : 1585899403330,
    "plan" : 1585849746246
  } ],
  "states" : [ {
    "type" : "State",
    "id" : 1585899403330,
    "name" : "Idle",
    "comment" : "",
    "entryPoint" : 1585899401090,
    "parentPlan" : 1585849746246,
    "abstractPlans" : [ "IdlePlan.pml#1585900095632" ],
    "variableBindings" : [ ],
    "outTransitions" : [ ],
    "inTransitions" : [ ]
  } ],
  "transitions" : [ ],
  "synchronisations" : [ ]
}