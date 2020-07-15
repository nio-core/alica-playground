{
  "id" : 1560262020541,
  "name" : "RuntimePlan",
  "comment" : "",
  "relativeDirectory" : "",
  "variables" : [ ],
  "masterPlan" : false,
  "utilityThreshold" : 0.0,
  "preCondition" : null,
  "runtimeCondition" : null,
  "entryPoints" : [ {
    "id" : 1560262056450,
    "name" : "1560262056450",
    "comment" : "",
    "successRequired" : false,
    "minCardinality" : 0,
    "maxCardinality" : 2,
    "task" : "TaskRepo.tsk#1559058172419",
    "state" : 1560262059669,
    "plan" : 1560262020541
  }, {
    "id" : 1560262105459,
    "name" : "1560262105459",
    "comment" : "",
    "successRequired" : false,
    "minCardinality" : 0,
    "maxCardinality" : 2,
    "task" : "TaskRepo.tsk#1559058199488",
    "state" : 1560262108766,
    "plan" : 1560262020541
  }, {
    "id" : 1560626030216,
    "name" : "1560626030216",
    "comment" : "",
    "successRequired" : false,
    "minCardinality" : 0,
    "maxCardinality" : 2,
    "task" : "TaskRepo.tsk#1559058183279",
    "state" : 1560626037188,
    "plan" : 1560262020541
  } ],
  "states" : [ {
    "type" : "State",
    "id" : 1560262059669,
    "name" : "RegistryState",
    "comment" : "",
    "entryPoint" : 1560262056450,
    "parentPlan" : 1560262020541,
    "abstractPlans" : [ "RegistryPlan.pml#1560260998173" ],
    "variableBindings" : [ ],
    "outTransitions" : [ ],
    "inTransitions" : [ ]
  }, {
    "type" : "State",
    "id" : 1560262108766,
    "name" : "ServiceState",
    "comment" : "",
    "entryPoint" : 1560262105459,
    "parentPlan" : 1560262020541,
    "abstractPlans" : [ "ServicePlan.pml#1560261009408" ],
    "variableBindings" : [ ],
    "outTransitions" : [ ],
    "inTransitions" : [ ]
  }, {
    "type" : "State",
    "id" : 1560626037188,
    "name" : "ProxyState",
    "comment" : "",
    "entryPoint" : 1560626030216,
    "parentPlan" : 1560262020541,
    "abstractPlans" : [ "ProxyPlan.pml#1560261023006" ],
    "variableBindings" : [ ],
    "outTransitions" : [ ],
    "inTransitions" : [ ]
  } ],
  "transitions" : [ ],
  "synchronisations" : [ ]
}