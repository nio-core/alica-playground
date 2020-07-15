{
  "id" : 1585922801787,
  "name" : "Player",
  "comment" : "",
  "relativeDirectory" : "",
  "variables" : [ ],
  "masterPlan" : false,
  "utilityThreshold" : 0.0,
  "preCondition" : null,
  "runtimeCondition" : null,
  "entryPoints" : [ {
    "id" : 1585923482304,
    "name" : "1585923482304",
    "comment" : "",
    "successRequired" : false,
    "minCardinality" : 0,
    "maxCardinality" : 2147483647,
    "task" : "TaskRepo.tsk#1585215571536",
    "state" : 1585923008825,
    "plan" : 1585922801787
  } ],
  "states" : [ {
    "type" : "State",
    "id" : 1585923008825,
    "name" : "Registration",
    "comment" : "",
    "entryPoint" : 1585923482304,
    "parentPlan" : 1585922801787,
    "abstractPlans" : [ "Register.beh#1575026296341" ],
    "variableBindings" : [ ],
    "outTransitions" : [ 1585923038616 ],
    "inTransitions" : [ ]
  }, {
    "type" : "State",
    "id" : 1585923017320,
    "name" : "Ready",
    "comment" : "",
    "entryPoint" : null,
    "parentPlan" : 1585922801787,
    "abstractPlans" : [ "WaitForStart.beh#1575039858266" ],
    "variableBindings" : [ ],
    "outTransitions" : [ 1585923041272 ],
    "inTransitions" : [ 1585923038616 ]
  }, {
    "type" : "State",
    "id" : 1585923023431,
    "name" : "Play",
    "comment" : "",
    "entryPoint" : null,
    "parentPlan" : 1585922801787,
    "abstractPlans" : [ "Play.beh#1575039923358" ],
    "variableBindings" : [ ],
    "outTransitions" : [ ],
    "inTransitions" : [ 1585923041272 ]
  } ],
  "transitions" : [ {
    "id" : 1585923038616,
    "name" : "FromDefault NameTo Default Name",
    "comment" : "MISSING_COMMENT",
    "inState" : 1585923008825,
    "outState" : 1585923017320,
    "preCondition" : {
      "id" : 1585923038617,
      "name" : "1585923038617",
      "comment" : "",
      "enabled" : true,
      "conditionString" : null,
      "pluginName" : "DefaultPlugin",
      "variables" : [ ],
      "quantifiers" : [ ]
    },
    "synchronisation" : null
  }, {
    "id" : 1585923041272,
    "name" : "FromDefault NameTo Default Name",
    "comment" : "MISSING_COMMENT",
    "inState" : 1585923017320,
    "outState" : 1585923023431,
    "preCondition" : {
      "id" : 1585923041273,
      "name" : "1585923041273",
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