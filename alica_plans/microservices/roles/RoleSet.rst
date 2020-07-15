{
  "id" : 1559044455588,
  "name" : "RoleSet",
  "comment" : "",
  "relativeDirectory" : "",
  "defaultPriority" : 0.5,
  "defaultRoleSet" : true,
  "roles" : [ {
    "id" : 1559058130009,
    "name" : "Storage",
    "comment" : "",
    "taskPriorities" : {
      "TaskRepo.tsk#1559058172419" : 0.8,
      "TaskRepo.tsk#1560257324591" : 1.0,
      "TaskRepo.tsk#1559058199488" : 0.8,
      "TaskRepo.tsk#1559058183279" : 0.2,
      "TaskRepo.tsk#1560260617403" : 0.9
    },
    "characteristics" : [ {
      "id" : 1559417583932,
      "name" : "hasRestAPI",
      "comment" : "",
      "weight" : 0.7,
      "value" : "true",
      "role" : 1559058130009
    }, {
      "id" : 1559425097498,
      "name" : "communication",
      "comment" : "",
      "weight" : 0.7,
      "value" : "local",
      "role" : 1559058130009
    }, {
      "id" : 1559505707455,
      "name" : "hasStorage",
      "comment" : "",
      "weight" : 1.0,
      "value" : "true",
      "role" : 1559058130009
    }, {
      "id" : 1559902562267,
      "name" : "canSend",
      "comment" : "",
      "weight" : 0.7,
      "value" : "true",
      "role" : 1559058130009
    }, {
      "id" : 1560321200330,
      "name" : "canReceive",
      "comment" : "",
      "weight" : 0.7,
      "value" : "true",
      "role" : 1559058130009
    } ],
    "roleSet" : 1559044455588
  }, {
    "id" : 1559058134102,
    "name" : "Proxy",
    "comment" : "",
    "taskPriorities" : {
      "TaskRepo.tsk#1559058172419" : 0.1,
      "TaskRepo.tsk#1560257324591" : 1.0,
      "TaskRepo.tsk#1559058199488" : 0.1,
      "TaskRepo.tsk#1559058183279" : 0.9,
      "TaskRepo.tsk#1560260617403" : 0.1
    },
    "characteristics" : [ {
      "id" : 1559902475708,
      "name" : "hasRestAPI",
      "comment" : "",
      "weight" : 0.7,
      "value" : "true",
      "role" : 1559058134102
    }, {
      "id" : 1559902480951,
      "name" : "communication",
      "comment" : "",
      "weight" : 1.0,
      "value" : "internet",
      "role" : 1559058134102
    }, {
      "id" : 1560321166859,
      "name" : "canSend",
      "comment" : "",
      "weight" : 0.8,
      "value" : "true",
      "role" : 1559058134102
    }, {
      "id" : 1560321169259,
      "name" : "canReceive",
      "comment" : "",
      "weight" : 0.8,
      "value" : "true",
      "role" : 1559058134102
    }, {
      "id" : 1560321414495,
      "name" : "transferRate",
      "comment" : "",
      "weight" : 0.9,
      "value" : "high",
      "role" : 1559058134102
    } ],
    "roleSet" : 1559044455588
  }, {
    "id" : 1559058141651,
    "name" : "Service",
    "comment" : "",
    "taskPriorities" : {
      "TaskRepo.tsk#1559058172419" : 0.4,
      "TaskRepo.tsk#1559058199488" : 0.9,
      "TaskRepo.tsk#1559058183279" : 0.4,
      "TaskRepo.tsk#1560260617403" : 0.2
    },
    "characteristics" : [ {
      "id" : 1559902516910,
      "name" : "communication",
      "comment" : "",
      "weight" : 0.7,
      "value" : "local",
      "role" : 1559058141651
    }, {
      "id" : 1559902519631,
      "name" : "hasStorage",
      "comment" : "",
      "weight" : 1.0,
      "value" : "high",
      "role" : 1559058141651
    }, {
      "id" : 1559902692602,
      "name" : "hasRestAPI",
      "comment" : "",
      "weight" : 0.7,
      "value" : "true",
      "role" : 1559058141651
    }, {
      "id" : 1560320612244,
      "name" : "canSend",
      "comment" : "",
      "weight" : 0.8,
      "value" : "true",
      "role" : 1559058141651
    }, {
      "id" : 1560320621444,
      "name" : "canReceive",
      "comment" : "",
      "weight" : 0.8,
      "value" : "true",
      "role" : 1559058141651
    } ],
    "roleSet" : 1559044455588
  }, {
    "id" : 1559653113781,
    "name" : "Registry",
    "comment" : "",
    "taskPriorities" : {
      "TaskRepo.tsk#1559058172419" : 0.9,
      "TaskRepo.tsk#1560257324591" : 1.0,
      "TaskRepo.tsk#1559058183279" : 0.2,
      "TaskRepo.tsk#1560260617403" : 0.2
    },
    "characteristics" : [ {
      "id" : 1559902571446,
      "name" : "hasRestAPI",
      "comment" : "",
      "weight" : 0.7,
      "value" : "true",
      "role" : 1559653113781
    }, {
      "id" : 1559902576571,
      "name" : "transferRate",
      "comment" : "",
      "weight" : 0.5,
      "value" : "low",
      "role" : 1559653113781
    }, {
      "id" : 1559902700197,
      "name" : "communication",
      "comment" : "",
      "weight" : 0.7,
      "value" : "local",
      "role" : 1559653113781
    }, {
      "id" : 1560321019305,
      "name" : "hasStorage",
      "comment" : "",
      "weight" : 0.5,
      "value" : "true",
      "role" : 1559653113781
    }, {
      "id" : 1560321022779,
      "name" : "canSend",
      "comment" : "",
      "weight" : 0.8,
      "value" : "true",
      "role" : 1559653113781
    }, {
      "id" : 1560321024678,
      "name" : "canReceive",
      "comment" : "",
      "weight" : 0.8,
      "value" : "true",
      "role" : 1559653113781
    } ],
    "roleSet" : 1559044455588
  } ]
}