{
  "id" : 1585215541605,
  "name" : "EntryPlan",
  "comment" : "",
  "relativeDirectory" : "",
  "variables" : [ ],
  "masterPlan" : true,
  "utilityThreshold" : 0.0,
  "preCondition" : null,
  "runtimeCondition" : null,
  "entryPoints" : [ {
    "id" : 1585215574843,
    "name" : "1585215574843",
    "comment" : "",
    "successRequired" : false,
    "minCardinality" : 0,
    "maxCardinality" : 2147483647,
    "task" : "TaskRepo.tsk#1585215571536",
    "state" : 1585215579125,
    "plan" : 1585215541605
  } ],
  "states" : [ {
    "type" : "State",
    "id" : 1585215579125,
    "name" : "EntryState",
    "comment" : "",
    "entryPoint" : 1585215574843,
    "parentPlan" : 1585215541605,
    "abstractPlans" : [ "MasterPlan.pml#1574275889504" ],
    "variableBindings" : [ ],
    "outTransitions" : [ ],
    "inTransitions" : [ ]
  } ],
  "transitions" : [ ],
  "synchronisations" : [ ]
}