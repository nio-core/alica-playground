{
  "id" : 1560257414138,
  "name" : "InitPlan",
  "comment" : "",
  "relativeDirectory" : "",
  "variables" : [ ],
  "masterPlan" : false,
  "utilityThreshold" : 0.0,
  "preCondition" : null,
  "runtimeCondition" : null,
  "entryPoints" : [ {
    "id" : 1560257602072,
    "name" : "1560257602072",
    "comment" : "",
    "successRequired" : false,
    "minCardinality" : 0,
    "maxCardinality" : 9999,
    "task" : "TaskRepo.tsk#1560257324591",
    "state" : 1560257595608,
    "plan" : 1560257414138
  } ],
  "states" : [ {
    "type" : "State",
    "id" : 1560257595608,
    "name" : "InitState",
    "comment" : "",
    "entryPoint" : 1560257602072,
    "parentPlan" : 1560257414138,
    "abstractPlans" : [ "behaviours/Initialization.beh#1560257552366" ],
    "variableBindings" : [ ],
    "outTransitions" : [ 1560260511449 ],
    "inTransitions" : [ ]
  }, {
    "type" : "State",
    "id" : 1560260429771,
    "name" : "RuntimeState",
    "comment" : "",
    "entryPoint" : null,
    "parentPlan" : 1560257414138,
    "abstractPlans" : [ "RuntimePlan.pml#1560262020541" ],
    "variableBindings" : [ ],
    "outTransitions" : [ ],
    "inTransitions" : [ 1560260511449 ]
  } ],
  "transitions" : [ {
    "id" : 1560260511449,
    "name" : "FromInitStateToRuntimeState",
    "comment" : "MISSING_COMMENT",
    "inState" : 1560257595608,
    "outState" : 1560260429771,
    "preCondition" : {
      "id" : 1558109687647,
      "name" : "1558109687647",
      "comment" : "",
      "enabled" : true,
      "conditionString" : null,
      "pluginName" : "DefaultPlugin",
      "variables" : [ ],
      "quantifiers" : [ ]
    },
    "synchronisation" : null
  } ],
  "synchronisations" : [ ]
}