{
  "id" : 1560261009408,
  "name" : "ServicePlan",
  "comment" : "",
  "relativeDirectory" : "",
  "variables" : [ ],
  "masterPlan" : false,
  "utilityThreshold" : 0.0,
  "preCondition" : null,
  "runtimeCondition" : null,
  "entryPoints" : [ {
    "id" : 1560262212790,
    "name" : "1560262212790",
    "comment" : "",
    "successRequired" : false,
    "minCardinality" : 0,
    "maxCardinality" : 1,
    "task" : "TaskRepo.tsk#1559058199488",
    "state" : 1560262220997,
    "plan" : 1560261009408
  } ],
  "states" : [ {
    "type" : "State",
    "id" : 1560262220997,
    "name" : "Service",
    "comment" : "",
    "entryPoint" : 1560262212790,
    "parentPlan" : 1560261009408,
    "abstractPlans" : [ "behaviours/Service.beh#1560262281954" ],
    "variableBindings" : [ ],
    "outTransitions" : [ ],
    "inTransitions" : [ ]
  } ],
  "transitions" : [ ],
  "synchronisations" : [ ]
}