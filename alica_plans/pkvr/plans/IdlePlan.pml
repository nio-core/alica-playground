{
  "id" : 1585900095632,
  "name" : "IdlePlan",
  "comment" : "",
  "relativeDirectory" : "",
  "variables" : [ ],
  "masterPlan" : false,
  "utilityThreshold" : 0.0,
  "preCondition" : null,
  "runtimeCondition" : null,
  "entryPoints" : [ {
    "id" : 1585900345966,
    "name" : "1585900345966",
    "comment" : "",
    "successRequired" : false,
    "minCardinality" : 0,
    "maxCardinality" : 1,
    "task" : "TaskRepo.tsk#1585155459870",
    "state" : 1585900355431,
    "plan" : 1585900095632
  }, {
    "id" : 1585900352463,
    "name" : "1585900352463",
    "comment" : "",
    "successRequired" : false,
    "minCardinality" : 0,
    "maxCardinality" : 1,
    "task" : "TaskRepo.tsk#1585155463465",
    "state" : 1585900356932,
    "plan" : 1585900095632
  }, {
    "id" : 1585901528122,
    "name" : "1585901528122",
    "comment" : "",
    "successRequired" : false,
    "minCardinality" : 0,
    "maxCardinality" : 1,
    "task" : "TaskRepo.tsk#1585155466925",
    "state" : 1585901544709,
    "plan" : 1585900095632
  }, {
    "id" : 1585901532790,
    "name" : "1585901532790",
    "comment" : "",
    "successRequired" : false,
    "minCardinality" : 0,
    "maxCardinality" : 1,
    "task" : "TaskRepo.tsk#1585155470090",
    "state" : 1585901546248,
    "plan" : 1585900095632
  }, {
    "id" : 1585901538296,
    "name" : "1585901538296",
    "comment" : "",
    "successRequired" : false,
    "minCardinality" : 0,
    "maxCardinality" : 1,
    "task" : "TaskRepo.tsk#1585155473093",
    "state" : 1585901547651,
    "plan" : 1585900095632
  } ],
  "states" : [ {
    "type" : "State",
    "id" : 1585900355431,
    "name" : "Behaviour1",
    "comment" : "",
    "entryPoint" : 1585900345966,
    "parentPlan" : 1585900095632,
    "abstractPlans" : [ ],
    "variableBindings" : [ ],
    "outTransitions" : [ 1585905322413 ],
    "inTransitions" : [ ]
  }, {
    "type" : "State",
    "id" : 1585900356932,
    "name" : "Behaviour2",
    "comment" : "",
    "entryPoint" : 1585900352463,
    "parentPlan" : 1585900095632,
    "abstractPlans" : [ ],
    "variableBindings" : [ ],
    "outTransitions" : [ 1585905319051 ],
    "inTransitions" : [ ]
  }, {
    "type" : "State",
    "id" : 1585901544709,
    "name" : "Behaviour3",
    "comment" : "",
    "entryPoint" : 1585901528122,
    "parentPlan" : 1585900095632,
    "abstractPlans" : [ ],
    "variableBindings" : [ ],
    "outTransitions" : [ 1585905314719 ],
    "inTransitions" : [ ]
  }, {
    "type" : "State",
    "id" : 1585901546248,
    "name" : "Behaviour4",
    "comment" : "",
    "entryPoint" : 1585901532790,
    "parentPlan" : 1585900095632,
    "abstractPlans" : [ ],
    "variableBindings" : [ ],
    "outTransitions" : [ 1585905325267 ],
    "inTransitions" : [ ]
  }, {
    "type" : "State",
    "id" : 1585901547651,
    "name" : "Behaviour5",
    "comment" : "",
    "entryPoint" : 1585901538296,
    "parentPlan" : 1585900095632,
    "abstractPlans" : [ ],
    "variableBindings" : [ ],
    "outTransitions" : [ 1585905328224 ],
    "inTransitions" : [ ]
  }, {
    "type" : "State",
    "id" : 1585904962297,
    "name" : "Gathering",
    "comment" : "",
    "entryPoint" : null,
    "parentPlan" : 1585900095632,
    "abstractPlans" : [ ],
    "variableBindings" : [ ],
    "outTransitions" : [ ],
    "inTransitions" : [ 1585905314719, 1585905319051, 1585905322413, 1585905325267, 1585905328224 ]
  } ],
  "transitions" : [ {
    "id" : 1585905314719,
    "name" : "FromBehaviour3To Gathering",
    "comment" : "MISSING_COMMENT",
    "inState" : 1585901544709,
    "outState" : 1585904962297,
    "preCondition" : {
      "id" : 1585905314721,
      "name" : "1585905314721",
      "comment" : "",
      "enabled" : false,
      "conditionString" : null,
      "pluginName" : "DefaultPlugin",
      "variables" : [ ],
      "quantifiers" : [ ]
    },
    "synchronisation" : null
  }, {
    "id" : 1585905319051,
    "name" : "FromBehaviour2To Gathering",
    "comment" : "MISSING_COMMENT",
    "inState" : 1585900356932,
    "outState" : 1585904962297,
    "preCondition" : {
      "id" : 1585905319053,
      "name" : "1585905319053",
      "comment" : "",
      "enabled" : true,
      "conditionString" : null,
      "pluginName" : "DefaultPlugin",
      "variables" : [ ],
      "quantifiers" : [ ]
    },
    "synchronisation" : null
  }, {
    "id" : 1585905322413,
    "name" : "FromBehaviour1To Gathering",
    "comment" : "MISSING_COMMENT",
    "inState" : 1585900355431,
    "outState" : 1585904962297,
    "preCondition" : {
      "id" : 1585905322414,
      "name" : "1585905322414",
      "comment" : "",
      "enabled" : true,
      "conditionString" : null,
      "pluginName" : "DefaultPlugin",
      "variables" : [ ],
      "quantifiers" : [ ]
    },
    "synchronisation" : null
  }, {
    "id" : 1585905325267,
    "name" : "FromBehaviour4To Gathering",
    "comment" : "MISSING_COMMENT",
    "inState" : 1585901546248,
    "outState" : 1585904962297,
    "preCondition" : {
      "id" : 1585905325269,
      "name" : "1585905325269",
      "comment" : "",
      "enabled" : false,
      "conditionString" : null,
      "pluginName" : "DefaultPlugin",
      "variables" : [ ],
      "quantifiers" : [ ]
    },
    "synchronisation" : null
  }, {
    "id" : 1585905328224,
    "name" : "FromBehaviour5To Gathering",
    "comment" : "MISSING_COMMENT",
    "inState" : 1585901547651,
    "outState" : 1585904962297,
    "preCondition" : {
      "id" : 1585905328225,
      "name" : "1585905328225",
      "comment" : "",
      "enabled" : false,
      "conditionString" : null,
      "pluginName" : "DefaultPlugin",
      "variables" : [ ],
      "quantifiers" : [ ]
    },
    "synchronisation" : null
  } ],
  "synchronisations" : [ ]
}