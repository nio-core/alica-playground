{
  "id" : 1560260998173,
  "name" : "RegistryPlan",
  "comment" : "",
  "relativeDirectory" : "",
  "variables" : [ ],
  "masterPlan" : false,
  "utilityThreshold" : 0.0,
  "preCondition" : null,
  "runtimeCondition" : null,
  "entryPoints" : [ {
    "id" : 1560262336022,
    "name" : "1560262336022",
    "comment" : "",
    "successRequired" : false,
    "minCardinality" : 0,
    "maxCardinality" : 1,
    "task" : "TaskRepo.tsk#1559058172419",
    "state" : 1560262338497,
    "plan" : 1560260998173
  } ],
  "states" : [ {
    "type" : "State",
    "id" : 1560262338497,
    "name" : "Registry",
    "comment" : "",
    "entryPoint" : 1560262336022,
    "parentPlan" : 1560260998173,
    "abstractPlans" : [ "behaviours/Registry.beh#1560262295454" ],
    "variableBindings" : [ ],
    "outTransitions" : [ ],
    "inTransitions" : [ ]
  } ],
  "transitions" : [ ],
  "synchronisations" : [ ]
}