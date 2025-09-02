// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pathfinder_anscer:action/MultiMapNavigate.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pathfinder_anscer/action/multi_map_navigate.h"


#ifndef PATHFINDER_ANSCER__ACTION__DETAIL__MULTI_MAP_NAVIGATE__STRUCT_H_
#define PATHFINDER_ANSCER__ACTION__DETAIL__MULTI_MAP_NAVIGATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'goal_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"
// Member 'target_map_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/MultiMapNavigate in the package pathfinder_anscer.
typedef struct pathfinder_anscer__action__MultiMapNavigate_Goal
{
  geometry_msgs__msg__PoseStamped goal_pose;
  rosidl_runtime_c__String target_map_name;
} pathfinder_anscer__action__MultiMapNavigate_Goal;

// Struct for a sequence of pathfinder_anscer__action__MultiMapNavigate_Goal.
typedef struct pathfinder_anscer__action__MultiMapNavigate_Goal__Sequence
{
  pathfinder_anscer__action__MultiMapNavigate_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pathfinder_anscer__action__MultiMapNavigate_Goal__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/MultiMapNavigate in the package pathfinder_anscer.
typedef struct pathfinder_anscer__action__MultiMapNavigate_Result
{
  bool success;
  rosidl_runtime_c__String message;
} pathfinder_anscer__action__MultiMapNavigate_Result;

// Struct for a sequence of pathfinder_anscer__action__MultiMapNavigate_Result.
typedef struct pathfinder_anscer__action__MultiMapNavigate_Result__Sequence
{
  pathfinder_anscer__action__MultiMapNavigate_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pathfinder_anscer__action__MultiMapNavigate_Result__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'current_state'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/MultiMapNavigate in the package pathfinder_anscer.
typedef struct pathfinder_anscer__action__MultiMapNavigate_Feedback
{
  rosidl_runtime_c__String current_state;
  float distance_remaining;
} pathfinder_anscer__action__MultiMapNavigate_Feedback;

// Struct for a sequence of pathfinder_anscer__action__MultiMapNavigate_Feedback.
typedef struct pathfinder_anscer__action__MultiMapNavigate_Feedback__Sequence
{
  pathfinder_anscer__action__MultiMapNavigate_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pathfinder_anscer__action__MultiMapNavigate_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "pathfinder_anscer/action/detail/multi_map_navigate__struct.h"

/// Struct defined in action/MultiMapNavigate in the package pathfinder_anscer.
typedef struct pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  pathfinder_anscer__action__MultiMapNavigate_Goal goal;
} pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request;

// Struct for a sequence of pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request.
typedef struct pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request__Sequence
{
  pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/MultiMapNavigate in the package pathfinder_anscer.
typedef struct pathfinder_anscer__action__MultiMapNavigate_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} pathfinder_anscer__action__MultiMapNavigate_SendGoal_Response;

// Struct for a sequence of pathfinder_anscer__action__MultiMapNavigate_SendGoal_Response.
typedef struct pathfinder_anscer__action__MultiMapNavigate_SendGoal_Response__Sequence
{
  pathfinder_anscer__action__MultiMapNavigate_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pathfinder_anscer__action__MultiMapNavigate_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  pathfinder_anscer__action__MultiMapNavigate_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  pathfinder_anscer__action__MultiMapNavigate_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/MultiMapNavigate in the package pathfinder_anscer.
typedef struct pathfinder_anscer__action__MultiMapNavigate_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request__Sequence request;
  pathfinder_anscer__action__MultiMapNavigate_SendGoal_Response__Sequence response;
} pathfinder_anscer__action__MultiMapNavigate_SendGoal_Event;

// Struct for a sequence of pathfinder_anscer__action__MultiMapNavigate_SendGoal_Event.
typedef struct pathfinder_anscer__action__MultiMapNavigate_SendGoal_Event__Sequence
{
  pathfinder_anscer__action__MultiMapNavigate_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pathfinder_anscer__action__MultiMapNavigate_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/MultiMapNavigate in the package pathfinder_anscer.
typedef struct pathfinder_anscer__action__MultiMapNavigate_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} pathfinder_anscer__action__MultiMapNavigate_GetResult_Request;

// Struct for a sequence of pathfinder_anscer__action__MultiMapNavigate_GetResult_Request.
typedef struct pathfinder_anscer__action__MultiMapNavigate_GetResult_Request__Sequence
{
  pathfinder_anscer__action__MultiMapNavigate_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pathfinder_anscer__action__MultiMapNavigate_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "pathfinder_anscer/action/detail/multi_map_navigate__struct.h"

/// Struct defined in action/MultiMapNavigate in the package pathfinder_anscer.
typedef struct pathfinder_anscer__action__MultiMapNavigate_GetResult_Response
{
  int8_t status;
  pathfinder_anscer__action__MultiMapNavigate_Result result;
} pathfinder_anscer__action__MultiMapNavigate_GetResult_Response;

// Struct for a sequence of pathfinder_anscer__action__MultiMapNavigate_GetResult_Response.
typedef struct pathfinder_anscer__action__MultiMapNavigate_GetResult_Response__Sequence
{
  pathfinder_anscer__action__MultiMapNavigate_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pathfinder_anscer__action__MultiMapNavigate_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  pathfinder_anscer__action__MultiMapNavigate_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  pathfinder_anscer__action__MultiMapNavigate_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/MultiMapNavigate in the package pathfinder_anscer.
typedef struct pathfinder_anscer__action__MultiMapNavigate_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  pathfinder_anscer__action__MultiMapNavigate_GetResult_Request__Sequence request;
  pathfinder_anscer__action__MultiMapNavigate_GetResult_Response__Sequence response;
} pathfinder_anscer__action__MultiMapNavigate_GetResult_Event;

// Struct for a sequence of pathfinder_anscer__action__MultiMapNavigate_GetResult_Event.
typedef struct pathfinder_anscer__action__MultiMapNavigate_GetResult_Event__Sequence
{
  pathfinder_anscer__action__MultiMapNavigate_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pathfinder_anscer__action__MultiMapNavigate_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "pathfinder_anscer/action/detail/multi_map_navigate__struct.h"

/// Struct defined in action/MultiMapNavigate in the package pathfinder_anscer.
typedef struct pathfinder_anscer__action__MultiMapNavigate_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  pathfinder_anscer__action__MultiMapNavigate_Feedback feedback;
} pathfinder_anscer__action__MultiMapNavigate_FeedbackMessage;

// Struct for a sequence of pathfinder_anscer__action__MultiMapNavigate_FeedbackMessage.
typedef struct pathfinder_anscer__action__MultiMapNavigate_FeedbackMessage__Sequence
{
  pathfinder_anscer__action__MultiMapNavigate_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pathfinder_anscer__action__MultiMapNavigate_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PATHFINDER_ANSCER__ACTION__DETAIL__MULTI_MAP_NAVIGATE__STRUCT_H_
