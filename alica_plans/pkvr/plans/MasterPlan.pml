{
  "id" : 1574275889504,
  "name" : "MasterPlan",
  "comment" : "",
  "relativeDirectory" : "",
  "variables" : [ {
    "id" : 1585211805484,
    "name" : "status",
    "comment" : "MISSING_COMMENT",
    "variableType" : ""
  }, {
    "id" : 1585211815747,
    "name" : "id",
    "comment" : "MISSING_COMMENT",
    "variableType" : ""
  } ],
  "masterPlan" : false,
  "utilityThreshold" : 0.0,
  "preCondition" : {
    "id" : 1574516982562,
    "name" : "1574516982562",
    "comment" : "",
    "enabled" : true,
    "conditionString" : null,
    "pluginName" : "DefaultPlugin",
    "variables" : [ ],
    "quantifiers" : [ ]
  },
  "runtimeCondition" : {
    "id" : 1585322978424,
    "name" : "1585322978424",
    "comment" : "",
    "enabled" : true,
    "conditionString" : null,
    "pluginName" : "DefaultPlugin",
    "variables" : [ ],
    "quantifiers" : [ ]
  },
  "entryPoints" : [ {
    "id" : 1585155483368,
    "name" : "1585155483368",
    "comment" : "",
    "successRequired" : false,
    "minCardinality" : 0,
    "maxCardinality" : 1,
    "task" : "TaskRepo.tsk#1585155459870",
    "state" : 1585155792889,
    "plan" : 1574275889504
  }, {
    "id" : 1585155489211,
    "name" : "1585155489211",
    "comment" : "",
    "successRequired" : false,
    "minCardinality" : 0,
    "maxCardinality" : 1,
    "task" : "TaskRepo.tsk#1585155463465",
    "state" : 1585155817945,
    "plan" : 1574275889504
  }, {
    "id" : 1585155493079,
    "name" : "1585155493079",
    "comment" : "",
    "successRequired" : false,
    "minCardinality" : 0,
    "maxCardinality" : 1,
    "task" : "TaskRepo.tsk#1585155466925",
    "state" : 1585155819181,
    "plan" : 1574275889504
  }, {
    "id" : 1585155498196,
    "name" : "1585155498196",
    "comment" : "",
    "successRequired" : false,
    "minCardinality" : 0,
    "maxCardinality" : 1,
    "task" : "TaskRepo.tsk#1585155470090",
    "state" : 1585155820074,
    "plan" : 1574275889504
  }, {
    "id" : 1585155851143,
    "name" : "1585155851143",
    "comment" : "",
    "successRequired" : false,
    "minCardinality" : 0,
    "maxCardinality" : 1,
    "task" : "TaskRepo.tsk#1585155473093",
    "state" : 1585155820896,
    "plan" : 1574275889504
  }, {
    "id" : 1585219435234,
    "name" : "1585219435234",
    "comment" : "",
    "successRequired" : false,
    "minCardinality" : 0,
    "maxCardinality" : 1,
    "task" : "TaskRepo.tsk#1585219431423",
    "state" : 1585219514763,
    "plan" : 1574275889504
  }, {
    "id" : 1585219491890,
    "name" : "1585219491890",
    "comment" : "",
    "successRequired" : false,
    "minCardinality" : 0,
    "maxCardinality" : 1,
    "task" : "TaskRepo.tsk#1585219452652",
    "state" : 1585219516888,
    "plan" : 1574275889504
  }, {
    "id" : 1585219497671,
    "name" : "1585219497671",
    "comment" : "",
    "successRequired" : false,
    "minCardinality" : 0,
    "maxCardinality" : 1,
    "task" : "TaskRepo.tsk#1585219456795",
    "state" : 1585219517766,
    "plan" : 1574275889504
  }, {
    "id" : 1585219502898,
    "name" : "1585219502898",
    "comment" : "",
    "successRequired" : false,
    "minCardinality" : 0,
    "maxCardinality" : 1,
    "task" : "TaskRepo.tsk#1585219459882",
    "state" : 1585219518510,
    "plan" : 1574275889504
  }, {
    "id" : 1585321585507,
    "name" : "1585321585507",
    "comment" : "",
    "successRequired" : false,
    "minCardinality" : 0,
    "maxCardinality" : 1,
    "task" : "TaskRepo.tsk#1585219463219",
    "state" : 1585219519748,
    "plan" : 1574275889504
  } ],
  "states" : [ {
    "type" : "State",
    "id" : 1585155792889,
    "name" : "agentA1",
    "comment" : "",
    "entryPoint" : 1585155483368,
    "parentPlan" : 1574275889504,
    "abstractPlans" : [ "Player.pml#1585922801787" ],
    "variableBindings" : [ ],
    "outTransitions" : [ ],
    "inTransitions" : [ ]
  }, {
    "type" : "State",
    "id" : 1585155817945,
    "name" : "agentA2",
    "comment" : "",
    "entryPoint" : 1585155489211,
    "parentPlan" : 1574275889504,
    "abstractPlans" : [ "Player.pml#1585922801787" ],
    "variableBindings" : [ ],
    "outTransitions" : [ ],
    "inTransitions" : [ ]
  }, {
    "type" : "State",
    "id" : 1585155819181,
    "name" : "agentA3",
    "comment" : "",
    "entryPoint" : 1585155493079,
    "parentPlan" : 1574275889504,
    "abstractPlans" : [ "Player.pml#1585922801787" ],
    "variableBindings" : [ ],
    "outTransitions" : [ ],
    "inTransitions" : [ ]
  }, {
    "type" : "State",
    "id" : 1585155820074,
    "name" : "agentA4",
    "comment" : "",
    "entryPoint" : 1585155498196,
    "parentPlan" : 1574275889504,
    "abstractPlans" : [ "Player.pml#1585922801787" ],
    "variableBindings" : [ ],
    "outTransitions" : [ ],
    "inTransitions" : [ ]
  }, {
    "type" : "State",
    "id" : 1585155820896,
    "name" : "agentA5",
    "comment" : "",
    "entryPoint" : 1585155851143,
    "parentPlan" : 1574275889504,
    "abstractPlans" : [ "Player.pml#1585922801787" ],
    "variableBindings" : [ ],
    "outTransitions" : [ ],
    "inTransitions" : [ ]
  }, {
    "type" : "State",
    "id" : 1585219514763,
    "name" : "agentA6",
    "comment" : "",
    "entryPoint" : 1585219435234,
    "parentPlan" : 1574275889504,
    "abstractPlans" : [ "Player.pml#1585922801787" ],
    "variableBindings" : [ ],
    "outTransitions" : [ ],
    "inTransitions" : [ ]
  }, {
    "type" : "State",
    "id" : 1585219516888,
    "name" : "agentA7",
    "comment" : "",
    "entryPoint" : 1585219491890,
    "parentPlan" : 1574275889504,
    "abstractPlans" : [ "Player.pml#1585922801787" ],
    "variableBindings" : [ ],
    "outTransitions" : [ ],
    "inTransitions" : [ ]
  }, {
    "type" : "State",
    "id" : 1585219517766,
    "name" : "agentA8",
    "comment" : "",
    "entryPoint" : 1585219497671,
    "parentPlan" : 1574275889504,
    "abstractPlans" : [ "Player.pml#1585922801787" ],
    "variableBindings" : [ ],
    "outTransitions" : [ ],
    "inTransitions" : [ ]
  }, {
    "type" : "State",
    "id" : 1585219518510,
    "name" : "agentA9",
    "comment" : "",
    "entryPoint" : 1585219502898,
    "parentPlan" : 1574275889504,
    "abstractPlans" : [ "Player.pml#1585922801787" ],
    "variableBindings" : [ ],
    "outTransitions" : [ ],
    "inTransitions" : [ ]
  }, {
    "type" : "State",
    "id" : 1585219519748,
    "name" : "agentA10",
    "comment" : "",
    "entryPoint" : 1585321585507,
    "parentPlan" : 1574275889504,
    "abstractPlans" : [ "Player.pml#1585922801787" ],
    "variableBindings" : [ ],
    "outTransitions" : [ ],
    "inTransitions" : [ ]
  } ],
  "transitions" : [ ],
  "synchronisations" : [ ]
}