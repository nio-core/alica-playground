{
  "id" : 1560261023006,
  "name" : "ProxyPlan",
  "comment" : "",
  "relativeDirectory" : "",
  "variables" : [ ],
  "masterPlan" : false,
  "utilityThreshold" : 0.0,
  "preCondition" : null,
  "runtimeCondition" : null,
  "entryPoints" : [ {
    "id" : 1560626142730,
    "name" : "1560626142730",
    "comment" : "",
    "successRequired" : false,
    "minCardinality" : 0,
    "maxCardinality" : 2,
    "task" : "TaskRepo.tsk#1559058183279",
    "state" : 1560626146037,
    "plan" : 1560261023006
  } ],
  "states" : [ {
    "type" : "State",
    "id" : 1560626146037,
    "name" : "Proxy",
    "comment" : "",
    "entryPoint" : 1560626142730,
    "parentPlan" : 1560261023006,
    "abstractPlans" : [ "behaviours/Proxy.beh#1560626197460" ],
    "variableBindings" : [ ],
    "outTransitions" : [ ],
    "inTransitions" : [ ]
  } ],
  "transitions" : [ ],
  "synchronisations" : [ ]
}