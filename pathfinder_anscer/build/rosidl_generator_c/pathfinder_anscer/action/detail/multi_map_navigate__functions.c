// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pathfinder_anscer:action/MultiMapNavigate.idl
// generated code does not contain a copyright notice
#include "pathfinder_anscer/action/detail/multi_map_navigate__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `goal_pose`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"
// Member `target_map_name`
#include "rosidl_runtime_c/string_functions.h"

bool
pathfinder_anscer__action__MultiMapNavigate_Goal__init(pathfinder_anscer__action__MultiMapNavigate_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // goal_pose
  if (!geometry_msgs__msg__PoseStamped__init(&msg->goal_pose)) {
    pathfinder_anscer__action__MultiMapNavigate_Goal__fini(msg);
    return false;
  }
  // target_map_name
  if (!rosidl_runtime_c__String__init(&msg->target_map_name)) {
    pathfinder_anscer__action__MultiMapNavigate_Goal__fini(msg);
    return false;
  }
  return true;
}

void
pathfinder_anscer__action__MultiMapNavigate_Goal__fini(pathfinder_anscer__action__MultiMapNavigate_Goal * msg)
{
  if (!msg) {
    return;
  }
  // goal_pose
  geometry_msgs__msg__PoseStamped__fini(&msg->goal_pose);
  // target_map_name
  rosidl_runtime_c__String__fini(&msg->target_map_name);
}

bool
pathfinder_anscer__action__MultiMapNavigate_Goal__are_equal(const pathfinder_anscer__action__MultiMapNavigate_Goal * lhs, const pathfinder_anscer__action__MultiMapNavigate_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_pose
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->goal_pose), &(rhs->goal_pose)))
  {
    return false;
  }
  // target_map_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->target_map_name), &(rhs->target_map_name)))
  {
    return false;
  }
  return true;
}

bool
pathfinder_anscer__action__MultiMapNavigate_Goal__copy(
  const pathfinder_anscer__action__MultiMapNavigate_Goal * input,
  pathfinder_anscer__action__MultiMapNavigate_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_pose
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->goal_pose), &(output->goal_pose)))
  {
    return false;
  }
  // target_map_name
  if (!rosidl_runtime_c__String__copy(
      &(input->target_map_name), &(output->target_map_name)))
  {
    return false;
  }
  return true;
}

pathfinder_anscer__action__MultiMapNavigate_Goal *
pathfinder_anscer__action__MultiMapNavigate_Goal__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pathfinder_anscer__action__MultiMapNavigate_Goal * msg = (pathfinder_anscer__action__MultiMapNavigate_Goal *)allocator.allocate(sizeof(pathfinder_anscer__action__MultiMapNavigate_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pathfinder_anscer__action__MultiMapNavigate_Goal));
  bool success = pathfinder_anscer__action__MultiMapNavigate_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pathfinder_anscer__action__MultiMapNavigate_Goal__destroy(pathfinder_anscer__action__MultiMapNavigate_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pathfinder_anscer__action__MultiMapNavigate_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pathfinder_anscer__action__MultiMapNavigate_Goal__Sequence__init(pathfinder_anscer__action__MultiMapNavigate_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pathfinder_anscer__action__MultiMapNavigate_Goal * data = NULL;

  if (size) {
    data = (pathfinder_anscer__action__MultiMapNavigate_Goal *)allocator.zero_allocate(size, sizeof(pathfinder_anscer__action__MultiMapNavigate_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pathfinder_anscer__action__MultiMapNavigate_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pathfinder_anscer__action__MultiMapNavigate_Goal__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
pathfinder_anscer__action__MultiMapNavigate_Goal__Sequence__fini(pathfinder_anscer__action__MultiMapNavigate_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pathfinder_anscer__action__MultiMapNavigate_Goal__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

pathfinder_anscer__action__MultiMapNavigate_Goal__Sequence *
pathfinder_anscer__action__MultiMapNavigate_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pathfinder_anscer__action__MultiMapNavigate_Goal__Sequence * array = (pathfinder_anscer__action__MultiMapNavigate_Goal__Sequence *)allocator.allocate(sizeof(pathfinder_anscer__action__MultiMapNavigate_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pathfinder_anscer__action__MultiMapNavigate_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pathfinder_anscer__action__MultiMapNavigate_Goal__Sequence__destroy(pathfinder_anscer__action__MultiMapNavigate_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pathfinder_anscer__action__MultiMapNavigate_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pathfinder_anscer__action__MultiMapNavigate_Goal__Sequence__are_equal(const pathfinder_anscer__action__MultiMapNavigate_Goal__Sequence * lhs, const pathfinder_anscer__action__MultiMapNavigate_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pathfinder_anscer__action__MultiMapNavigate_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pathfinder_anscer__action__MultiMapNavigate_Goal__Sequence__copy(
  const pathfinder_anscer__action__MultiMapNavigate_Goal__Sequence * input,
  pathfinder_anscer__action__MultiMapNavigate_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pathfinder_anscer__action__MultiMapNavigate_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pathfinder_anscer__action__MultiMapNavigate_Goal * data =
      (pathfinder_anscer__action__MultiMapNavigate_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pathfinder_anscer__action__MultiMapNavigate_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pathfinder_anscer__action__MultiMapNavigate_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pathfinder_anscer__action__MultiMapNavigate_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
pathfinder_anscer__action__MultiMapNavigate_Result__init(pathfinder_anscer__action__MultiMapNavigate_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    pathfinder_anscer__action__MultiMapNavigate_Result__fini(msg);
    return false;
  }
  return true;
}

void
pathfinder_anscer__action__MultiMapNavigate_Result__fini(pathfinder_anscer__action__MultiMapNavigate_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
pathfinder_anscer__action__MultiMapNavigate_Result__are_equal(const pathfinder_anscer__action__MultiMapNavigate_Result * lhs, const pathfinder_anscer__action__MultiMapNavigate_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
pathfinder_anscer__action__MultiMapNavigate_Result__copy(
  const pathfinder_anscer__action__MultiMapNavigate_Result * input,
  pathfinder_anscer__action__MultiMapNavigate_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

pathfinder_anscer__action__MultiMapNavigate_Result *
pathfinder_anscer__action__MultiMapNavigate_Result__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pathfinder_anscer__action__MultiMapNavigate_Result * msg = (pathfinder_anscer__action__MultiMapNavigate_Result *)allocator.allocate(sizeof(pathfinder_anscer__action__MultiMapNavigate_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pathfinder_anscer__action__MultiMapNavigate_Result));
  bool success = pathfinder_anscer__action__MultiMapNavigate_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pathfinder_anscer__action__MultiMapNavigate_Result__destroy(pathfinder_anscer__action__MultiMapNavigate_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pathfinder_anscer__action__MultiMapNavigate_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pathfinder_anscer__action__MultiMapNavigate_Result__Sequence__init(pathfinder_anscer__action__MultiMapNavigate_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pathfinder_anscer__action__MultiMapNavigate_Result * data = NULL;

  if (size) {
    data = (pathfinder_anscer__action__MultiMapNavigate_Result *)allocator.zero_allocate(size, sizeof(pathfinder_anscer__action__MultiMapNavigate_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pathfinder_anscer__action__MultiMapNavigate_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pathfinder_anscer__action__MultiMapNavigate_Result__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
pathfinder_anscer__action__MultiMapNavigate_Result__Sequence__fini(pathfinder_anscer__action__MultiMapNavigate_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pathfinder_anscer__action__MultiMapNavigate_Result__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

pathfinder_anscer__action__MultiMapNavigate_Result__Sequence *
pathfinder_anscer__action__MultiMapNavigate_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pathfinder_anscer__action__MultiMapNavigate_Result__Sequence * array = (pathfinder_anscer__action__MultiMapNavigate_Result__Sequence *)allocator.allocate(sizeof(pathfinder_anscer__action__MultiMapNavigate_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pathfinder_anscer__action__MultiMapNavigate_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pathfinder_anscer__action__MultiMapNavigate_Result__Sequence__destroy(pathfinder_anscer__action__MultiMapNavigate_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pathfinder_anscer__action__MultiMapNavigate_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pathfinder_anscer__action__MultiMapNavigate_Result__Sequence__are_equal(const pathfinder_anscer__action__MultiMapNavigate_Result__Sequence * lhs, const pathfinder_anscer__action__MultiMapNavigate_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pathfinder_anscer__action__MultiMapNavigate_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pathfinder_anscer__action__MultiMapNavigate_Result__Sequence__copy(
  const pathfinder_anscer__action__MultiMapNavigate_Result__Sequence * input,
  pathfinder_anscer__action__MultiMapNavigate_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pathfinder_anscer__action__MultiMapNavigate_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pathfinder_anscer__action__MultiMapNavigate_Result * data =
      (pathfinder_anscer__action__MultiMapNavigate_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pathfinder_anscer__action__MultiMapNavigate_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pathfinder_anscer__action__MultiMapNavigate_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pathfinder_anscer__action__MultiMapNavigate_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `current_state`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
pathfinder_anscer__action__MultiMapNavigate_Feedback__init(pathfinder_anscer__action__MultiMapNavigate_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // current_state
  if (!rosidl_runtime_c__String__init(&msg->current_state)) {
    pathfinder_anscer__action__MultiMapNavigate_Feedback__fini(msg);
    return false;
  }
  // distance_remaining
  return true;
}

void
pathfinder_anscer__action__MultiMapNavigate_Feedback__fini(pathfinder_anscer__action__MultiMapNavigate_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // current_state
  rosidl_runtime_c__String__fini(&msg->current_state);
  // distance_remaining
}

bool
pathfinder_anscer__action__MultiMapNavigate_Feedback__are_equal(const pathfinder_anscer__action__MultiMapNavigate_Feedback * lhs, const pathfinder_anscer__action__MultiMapNavigate_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // current_state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->current_state), &(rhs->current_state)))
  {
    return false;
  }
  // distance_remaining
  if (lhs->distance_remaining != rhs->distance_remaining) {
    return false;
  }
  return true;
}

bool
pathfinder_anscer__action__MultiMapNavigate_Feedback__copy(
  const pathfinder_anscer__action__MultiMapNavigate_Feedback * input,
  pathfinder_anscer__action__MultiMapNavigate_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // current_state
  if (!rosidl_runtime_c__String__copy(
      &(input->current_state), &(output->current_state)))
  {
    return false;
  }
  // distance_remaining
  output->distance_remaining = input->distance_remaining;
  return true;
}

pathfinder_anscer__action__MultiMapNavigate_Feedback *
pathfinder_anscer__action__MultiMapNavigate_Feedback__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pathfinder_anscer__action__MultiMapNavigate_Feedback * msg = (pathfinder_anscer__action__MultiMapNavigate_Feedback *)allocator.allocate(sizeof(pathfinder_anscer__action__MultiMapNavigate_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pathfinder_anscer__action__MultiMapNavigate_Feedback));
  bool success = pathfinder_anscer__action__MultiMapNavigate_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pathfinder_anscer__action__MultiMapNavigate_Feedback__destroy(pathfinder_anscer__action__MultiMapNavigate_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pathfinder_anscer__action__MultiMapNavigate_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pathfinder_anscer__action__MultiMapNavigate_Feedback__Sequence__init(pathfinder_anscer__action__MultiMapNavigate_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pathfinder_anscer__action__MultiMapNavigate_Feedback * data = NULL;

  if (size) {
    data = (pathfinder_anscer__action__MultiMapNavigate_Feedback *)allocator.zero_allocate(size, sizeof(pathfinder_anscer__action__MultiMapNavigate_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pathfinder_anscer__action__MultiMapNavigate_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pathfinder_anscer__action__MultiMapNavigate_Feedback__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
pathfinder_anscer__action__MultiMapNavigate_Feedback__Sequence__fini(pathfinder_anscer__action__MultiMapNavigate_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pathfinder_anscer__action__MultiMapNavigate_Feedback__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

pathfinder_anscer__action__MultiMapNavigate_Feedback__Sequence *
pathfinder_anscer__action__MultiMapNavigate_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pathfinder_anscer__action__MultiMapNavigate_Feedback__Sequence * array = (pathfinder_anscer__action__MultiMapNavigate_Feedback__Sequence *)allocator.allocate(sizeof(pathfinder_anscer__action__MultiMapNavigate_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pathfinder_anscer__action__MultiMapNavigate_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pathfinder_anscer__action__MultiMapNavigate_Feedback__Sequence__destroy(pathfinder_anscer__action__MultiMapNavigate_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pathfinder_anscer__action__MultiMapNavigate_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pathfinder_anscer__action__MultiMapNavigate_Feedback__Sequence__are_equal(const pathfinder_anscer__action__MultiMapNavigate_Feedback__Sequence * lhs, const pathfinder_anscer__action__MultiMapNavigate_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pathfinder_anscer__action__MultiMapNavigate_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pathfinder_anscer__action__MultiMapNavigate_Feedback__Sequence__copy(
  const pathfinder_anscer__action__MultiMapNavigate_Feedback__Sequence * input,
  pathfinder_anscer__action__MultiMapNavigate_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pathfinder_anscer__action__MultiMapNavigate_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pathfinder_anscer__action__MultiMapNavigate_Feedback * data =
      (pathfinder_anscer__action__MultiMapNavigate_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pathfinder_anscer__action__MultiMapNavigate_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pathfinder_anscer__action__MultiMapNavigate_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pathfinder_anscer__action__MultiMapNavigate_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "pathfinder_anscer/action/detail/multi_map_navigate__functions.h"

bool
pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request__init(pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!pathfinder_anscer__action__MultiMapNavigate_Goal__init(&msg->goal)) {
    pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request__fini(pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  pathfinder_anscer__action__MultiMapNavigate_Goal__fini(&msg->goal);
}

bool
pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request__are_equal(const pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request * lhs, const pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!pathfinder_anscer__action__MultiMapNavigate_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request__copy(
  const pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request * input,
  pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!pathfinder_anscer__action__MultiMapNavigate_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request *
pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request * msg = (pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request *)allocator.allocate(sizeof(pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request));
  bool success = pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request__destroy(pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request__Sequence__init(pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request * data = NULL;

  if (size) {
    data = (pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request *)allocator.zero_allocate(size, sizeof(pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request__Sequence__fini(pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request__Sequence *
pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request__Sequence * array = (pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request__Sequence *)allocator.allocate(sizeof(pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request__Sequence__destroy(pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request__Sequence__are_equal(const pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request__Sequence * lhs, const pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request__Sequence__copy(
  const pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request__Sequence * input,
  pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request * data =
      (pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
pathfinder_anscer__action__MultiMapNavigate_SendGoal_Response__init(pathfinder_anscer__action__MultiMapNavigate_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    pathfinder_anscer__action__MultiMapNavigate_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
pathfinder_anscer__action__MultiMapNavigate_SendGoal_Response__fini(pathfinder_anscer__action__MultiMapNavigate_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
pathfinder_anscer__action__MultiMapNavigate_SendGoal_Response__are_equal(const pathfinder_anscer__action__MultiMapNavigate_SendGoal_Response * lhs, const pathfinder_anscer__action__MultiMapNavigate_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
pathfinder_anscer__action__MultiMapNavigate_SendGoal_Response__copy(
  const pathfinder_anscer__action__MultiMapNavigate_SendGoal_Response * input,
  pathfinder_anscer__action__MultiMapNavigate_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

pathfinder_anscer__action__MultiMapNavigate_SendGoal_Response *
pathfinder_anscer__action__MultiMapNavigate_SendGoal_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pathfinder_anscer__action__MultiMapNavigate_SendGoal_Response * msg = (pathfinder_anscer__action__MultiMapNavigate_SendGoal_Response *)allocator.allocate(sizeof(pathfinder_anscer__action__MultiMapNavigate_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pathfinder_anscer__action__MultiMapNavigate_SendGoal_Response));
  bool success = pathfinder_anscer__action__MultiMapNavigate_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pathfinder_anscer__action__MultiMapNavigate_SendGoal_Response__destroy(pathfinder_anscer__action__MultiMapNavigate_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pathfinder_anscer__action__MultiMapNavigate_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pathfinder_anscer__action__MultiMapNavigate_SendGoal_Response__Sequence__init(pathfinder_anscer__action__MultiMapNavigate_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pathfinder_anscer__action__MultiMapNavigate_SendGoal_Response * data = NULL;

  if (size) {
    data = (pathfinder_anscer__action__MultiMapNavigate_SendGoal_Response *)allocator.zero_allocate(size, sizeof(pathfinder_anscer__action__MultiMapNavigate_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pathfinder_anscer__action__MultiMapNavigate_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pathfinder_anscer__action__MultiMapNavigate_SendGoal_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
pathfinder_anscer__action__MultiMapNavigate_SendGoal_Response__Sequence__fini(pathfinder_anscer__action__MultiMapNavigate_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pathfinder_anscer__action__MultiMapNavigate_SendGoal_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

pathfinder_anscer__action__MultiMapNavigate_SendGoal_Response__Sequence *
pathfinder_anscer__action__MultiMapNavigate_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pathfinder_anscer__action__MultiMapNavigate_SendGoal_Response__Sequence * array = (pathfinder_anscer__action__MultiMapNavigate_SendGoal_Response__Sequence *)allocator.allocate(sizeof(pathfinder_anscer__action__MultiMapNavigate_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pathfinder_anscer__action__MultiMapNavigate_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pathfinder_anscer__action__MultiMapNavigate_SendGoal_Response__Sequence__destroy(pathfinder_anscer__action__MultiMapNavigate_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pathfinder_anscer__action__MultiMapNavigate_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pathfinder_anscer__action__MultiMapNavigate_SendGoal_Response__Sequence__are_equal(const pathfinder_anscer__action__MultiMapNavigate_SendGoal_Response__Sequence * lhs, const pathfinder_anscer__action__MultiMapNavigate_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pathfinder_anscer__action__MultiMapNavigate_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pathfinder_anscer__action__MultiMapNavigate_SendGoal_Response__Sequence__copy(
  const pathfinder_anscer__action__MultiMapNavigate_SendGoal_Response__Sequence * input,
  pathfinder_anscer__action__MultiMapNavigate_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pathfinder_anscer__action__MultiMapNavigate_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pathfinder_anscer__action__MultiMapNavigate_SendGoal_Response * data =
      (pathfinder_anscer__action__MultiMapNavigate_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pathfinder_anscer__action__MultiMapNavigate_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pathfinder_anscer__action__MultiMapNavigate_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pathfinder_anscer__action__MultiMapNavigate_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "pathfinder_anscer/action/detail/multi_map_navigate__functions.h"

bool
pathfinder_anscer__action__MultiMapNavigate_SendGoal_Event__init(pathfinder_anscer__action__MultiMapNavigate_SendGoal_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    pathfinder_anscer__action__MultiMapNavigate_SendGoal_Event__fini(msg);
    return false;
  }
  // request
  if (!pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request__Sequence__init(&msg->request, 0)) {
    pathfinder_anscer__action__MultiMapNavigate_SendGoal_Event__fini(msg);
    return false;
  }
  // response
  if (!pathfinder_anscer__action__MultiMapNavigate_SendGoal_Response__Sequence__init(&msg->response, 0)) {
    pathfinder_anscer__action__MultiMapNavigate_SendGoal_Event__fini(msg);
    return false;
  }
  return true;
}

void
pathfinder_anscer__action__MultiMapNavigate_SendGoal_Event__fini(pathfinder_anscer__action__MultiMapNavigate_SendGoal_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request__Sequence__fini(&msg->request);
  // response
  pathfinder_anscer__action__MultiMapNavigate_SendGoal_Response__Sequence__fini(&msg->response);
}

bool
pathfinder_anscer__action__MultiMapNavigate_SendGoal_Event__are_equal(const pathfinder_anscer__action__MultiMapNavigate_SendGoal_Event * lhs, const pathfinder_anscer__action__MultiMapNavigate_SendGoal_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!pathfinder_anscer__action__MultiMapNavigate_SendGoal_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
pathfinder_anscer__action__MultiMapNavigate_SendGoal_Event__copy(
  const pathfinder_anscer__action__MultiMapNavigate_SendGoal_Event * input,
  pathfinder_anscer__action__MultiMapNavigate_SendGoal_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!pathfinder_anscer__action__MultiMapNavigate_SendGoal_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!pathfinder_anscer__action__MultiMapNavigate_SendGoal_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

pathfinder_anscer__action__MultiMapNavigate_SendGoal_Event *
pathfinder_anscer__action__MultiMapNavigate_SendGoal_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pathfinder_anscer__action__MultiMapNavigate_SendGoal_Event * msg = (pathfinder_anscer__action__MultiMapNavigate_SendGoal_Event *)allocator.allocate(sizeof(pathfinder_anscer__action__MultiMapNavigate_SendGoal_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pathfinder_anscer__action__MultiMapNavigate_SendGoal_Event));
  bool success = pathfinder_anscer__action__MultiMapNavigate_SendGoal_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pathfinder_anscer__action__MultiMapNavigate_SendGoal_Event__destroy(pathfinder_anscer__action__MultiMapNavigate_SendGoal_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pathfinder_anscer__action__MultiMapNavigate_SendGoal_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pathfinder_anscer__action__MultiMapNavigate_SendGoal_Event__Sequence__init(pathfinder_anscer__action__MultiMapNavigate_SendGoal_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pathfinder_anscer__action__MultiMapNavigate_SendGoal_Event * data = NULL;

  if (size) {
    data = (pathfinder_anscer__action__MultiMapNavigate_SendGoal_Event *)allocator.zero_allocate(size, sizeof(pathfinder_anscer__action__MultiMapNavigate_SendGoal_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pathfinder_anscer__action__MultiMapNavigate_SendGoal_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pathfinder_anscer__action__MultiMapNavigate_SendGoal_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
pathfinder_anscer__action__MultiMapNavigate_SendGoal_Event__Sequence__fini(pathfinder_anscer__action__MultiMapNavigate_SendGoal_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pathfinder_anscer__action__MultiMapNavigate_SendGoal_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

pathfinder_anscer__action__MultiMapNavigate_SendGoal_Event__Sequence *
pathfinder_anscer__action__MultiMapNavigate_SendGoal_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pathfinder_anscer__action__MultiMapNavigate_SendGoal_Event__Sequence * array = (pathfinder_anscer__action__MultiMapNavigate_SendGoal_Event__Sequence *)allocator.allocate(sizeof(pathfinder_anscer__action__MultiMapNavigate_SendGoal_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pathfinder_anscer__action__MultiMapNavigate_SendGoal_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pathfinder_anscer__action__MultiMapNavigate_SendGoal_Event__Sequence__destroy(pathfinder_anscer__action__MultiMapNavigate_SendGoal_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pathfinder_anscer__action__MultiMapNavigate_SendGoal_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pathfinder_anscer__action__MultiMapNavigate_SendGoal_Event__Sequence__are_equal(const pathfinder_anscer__action__MultiMapNavigate_SendGoal_Event__Sequence * lhs, const pathfinder_anscer__action__MultiMapNavigate_SendGoal_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pathfinder_anscer__action__MultiMapNavigate_SendGoal_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pathfinder_anscer__action__MultiMapNavigate_SendGoal_Event__Sequence__copy(
  const pathfinder_anscer__action__MultiMapNavigate_SendGoal_Event__Sequence * input,
  pathfinder_anscer__action__MultiMapNavigate_SendGoal_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pathfinder_anscer__action__MultiMapNavigate_SendGoal_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pathfinder_anscer__action__MultiMapNavigate_SendGoal_Event * data =
      (pathfinder_anscer__action__MultiMapNavigate_SendGoal_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pathfinder_anscer__action__MultiMapNavigate_SendGoal_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pathfinder_anscer__action__MultiMapNavigate_SendGoal_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pathfinder_anscer__action__MultiMapNavigate_SendGoal_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
pathfinder_anscer__action__MultiMapNavigate_GetResult_Request__init(pathfinder_anscer__action__MultiMapNavigate_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    pathfinder_anscer__action__MultiMapNavigate_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
pathfinder_anscer__action__MultiMapNavigate_GetResult_Request__fini(pathfinder_anscer__action__MultiMapNavigate_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
pathfinder_anscer__action__MultiMapNavigate_GetResult_Request__are_equal(const pathfinder_anscer__action__MultiMapNavigate_GetResult_Request * lhs, const pathfinder_anscer__action__MultiMapNavigate_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
pathfinder_anscer__action__MultiMapNavigate_GetResult_Request__copy(
  const pathfinder_anscer__action__MultiMapNavigate_GetResult_Request * input,
  pathfinder_anscer__action__MultiMapNavigate_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

pathfinder_anscer__action__MultiMapNavigate_GetResult_Request *
pathfinder_anscer__action__MultiMapNavigate_GetResult_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pathfinder_anscer__action__MultiMapNavigate_GetResult_Request * msg = (pathfinder_anscer__action__MultiMapNavigate_GetResult_Request *)allocator.allocate(sizeof(pathfinder_anscer__action__MultiMapNavigate_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pathfinder_anscer__action__MultiMapNavigate_GetResult_Request));
  bool success = pathfinder_anscer__action__MultiMapNavigate_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pathfinder_anscer__action__MultiMapNavigate_GetResult_Request__destroy(pathfinder_anscer__action__MultiMapNavigate_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pathfinder_anscer__action__MultiMapNavigate_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pathfinder_anscer__action__MultiMapNavigate_GetResult_Request__Sequence__init(pathfinder_anscer__action__MultiMapNavigate_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pathfinder_anscer__action__MultiMapNavigate_GetResult_Request * data = NULL;

  if (size) {
    data = (pathfinder_anscer__action__MultiMapNavigate_GetResult_Request *)allocator.zero_allocate(size, sizeof(pathfinder_anscer__action__MultiMapNavigate_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pathfinder_anscer__action__MultiMapNavigate_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pathfinder_anscer__action__MultiMapNavigate_GetResult_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
pathfinder_anscer__action__MultiMapNavigate_GetResult_Request__Sequence__fini(pathfinder_anscer__action__MultiMapNavigate_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pathfinder_anscer__action__MultiMapNavigate_GetResult_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

pathfinder_anscer__action__MultiMapNavigate_GetResult_Request__Sequence *
pathfinder_anscer__action__MultiMapNavigate_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pathfinder_anscer__action__MultiMapNavigate_GetResult_Request__Sequence * array = (pathfinder_anscer__action__MultiMapNavigate_GetResult_Request__Sequence *)allocator.allocate(sizeof(pathfinder_anscer__action__MultiMapNavigate_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pathfinder_anscer__action__MultiMapNavigate_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pathfinder_anscer__action__MultiMapNavigate_GetResult_Request__Sequence__destroy(pathfinder_anscer__action__MultiMapNavigate_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pathfinder_anscer__action__MultiMapNavigate_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pathfinder_anscer__action__MultiMapNavigate_GetResult_Request__Sequence__are_equal(const pathfinder_anscer__action__MultiMapNavigate_GetResult_Request__Sequence * lhs, const pathfinder_anscer__action__MultiMapNavigate_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pathfinder_anscer__action__MultiMapNavigate_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pathfinder_anscer__action__MultiMapNavigate_GetResult_Request__Sequence__copy(
  const pathfinder_anscer__action__MultiMapNavigate_GetResult_Request__Sequence * input,
  pathfinder_anscer__action__MultiMapNavigate_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pathfinder_anscer__action__MultiMapNavigate_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pathfinder_anscer__action__MultiMapNavigate_GetResult_Request * data =
      (pathfinder_anscer__action__MultiMapNavigate_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pathfinder_anscer__action__MultiMapNavigate_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pathfinder_anscer__action__MultiMapNavigate_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pathfinder_anscer__action__MultiMapNavigate_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "pathfinder_anscer/action/detail/multi_map_navigate__functions.h"

bool
pathfinder_anscer__action__MultiMapNavigate_GetResult_Response__init(pathfinder_anscer__action__MultiMapNavigate_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!pathfinder_anscer__action__MultiMapNavigate_Result__init(&msg->result)) {
    pathfinder_anscer__action__MultiMapNavigate_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
pathfinder_anscer__action__MultiMapNavigate_GetResult_Response__fini(pathfinder_anscer__action__MultiMapNavigate_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  pathfinder_anscer__action__MultiMapNavigate_Result__fini(&msg->result);
}

bool
pathfinder_anscer__action__MultiMapNavigate_GetResult_Response__are_equal(const pathfinder_anscer__action__MultiMapNavigate_GetResult_Response * lhs, const pathfinder_anscer__action__MultiMapNavigate_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!pathfinder_anscer__action__MultiMapNavigate_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
pathfinder_anscer__action__MultiMapNavigate_GetResult_Response__copy(
  const pathfinder_anscer__action__MultiMapNavigate_GetResult_Response * input,
  pathfinder_anscer__action__MultiMapNavigate_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!pathfinder_anscer__action__MultiMapNavigate_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

pathfinder_anscer__action__MultiMapNavigate_GetResult_Response *
pathfinder_anscer__action__MultiMapNavigate_GetResult_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pathfinder_anscer__action__MultiMapNavigate_GetResult_Response * msg = (pathfinder_anscer__action__MultiMapNavigate_GetResult_Response *)allocator.allocate(sizeof(pathfinder_anscer__action__MultiMapNavigate_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pathfinder_anscer__action__MultiMapNavigate_GetResult_Response));
  bool success = pathfinder_anscer__action__MultiMapNavigate_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pathfinder_anscer__action__MultiMapNavigate_GetResult_Response__destroy(pathfinder_anscer__action__MultiMapNavigate_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pathfinder_anscer__action__MultiMapNavigate_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pathfinder_anscer__action__MultiMapNavigate_GetResult_Response__Sequence__init(pathfinder_anscer__action__MultiMapNavigate_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pathfinder_anscer__action__MultiMapNavigate_GetResult_Response * data = NULL;

  if (size) {
    data = (pathfinder_anscer__action__MultiMapNavigate_GetResult_Response *)allocator.zero_allocate(size, sizeof(pathfinder_anscer__action__MultiMapNavigate_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pathfinder_anscer__action__MultiMapNavigate_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pathfinder_anscer__action__MultiMapNavigate_GetResult_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
pathfinder_anscer__action__MultiMapNavigate_GetResult_Response__Sequence__fini(pathfinder_anscer__action__MultiMapNavigate_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pathfinder_anscer__action__MultiMapNavigate_GetResult_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

pathfinder_anscer__action__MultiMapNavigate_GetResult_Response__Sequence *
pathfinder_anscer__action__MultiMapNavigate_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pathfinder_anscer__action__MultiMapNavigate_GetResult_Response__Sequence * array = (pathfinder_anscer__action__MultiMapNavigate_GetResult_Response__Sequence *)allocator.allocate(sizeof(pathfinder_anscer__action__MultiMapNavigate_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pathfinder_anscer__action__MultiMapNavigate_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pathfinder_anscer__action__MultiMapNavigate_GetResult_Response__Sequence__destroy(pathfinder_anscer__action__MultiMapNavigate_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pathfinder_anscer__action__MultiMapNavigate_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pathfinder_anscer__action__MultiMapNavigate_GetResult_Response__Sequence__are_equal(const pathfinder_anscer__action__MultiMapNavigate_GetResult_Response__Sequence * lhs, const pathfinder_anscer__action__MultiMapNavigate_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pathfinder_anscer__action__MultiMapNavigate_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pathfinder_anscer__action__MultiMapNavigate_GetResult_Response__Sequence__copy(
  const pathfinder_anscer__action__MultiMapNavigate_GetResult_Response__Sequence * input,
  pathfinder_anscer__action__MultiMapNavigate_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pathfinder_anscer__action__MultiMapNavigate_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pathfinder_anscer__action__MultiMapNavigate_GetResult_Response * data =
      (pathfinder_anscer__action__MultiMapNavigate_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pathfinder_anscer__action__MultiMapNavigate_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pathfinder_anscer__action__MultiMapNavigate_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pathfinder_anscer__action__MultiMapNavigate_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
// already included above
// #include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "pathfinder_anscer/action/detail/multi_map_navigate__functions.h"

bool
pathfinder_anscer__action__MultiMapNavigate_GetResult_Event__init(pathfinder_anscer__action__MultiMapNavigate_GetResult_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    pathfinder_anscer__action__MultiMapNavigate_GetResult_Event__fini(msg);
    return false;
  }
  // request
  if (!pathfinder_anscer__action__MultiMapNavigate_GetResult_Request__Sequence__init(&msg->request, 0)) {
    pathfinder_anscer__action__MultiMapNavigate_GetResult_Event__fini(msg);
    return false;
  }
  // response
  if (!pathfinder_anscer__action__MultiMapNavigate_GetResult_Response__Sequence__init(&msg->response, 0)) {
    pathfinder_anscer__action__MultiMapNavigate_GetResult_Event__fini(msg);
    return false;
  }
  return true;
}

void
pathfinder_anscer__action__MultiMapNavigate_GetResult_Event__fini(pathfinder_anscer__action__MultiMapNavigate_GetResult_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  pathfinder_anscer__action__MultiMapNavigate_GetResult_Request__Sequence__fini(&msg->request);
  // response
  pathfinder_anscer__action__MultiMapNavigate_GetResult_Response__Sequence__fini(&msg->response);
}

bool
pathfinder_anscer__action__MultiMapNavigate_GetResult_Event__are_equal(const pathfinder_anscer__action__MultiMapNavigate_GetResult_Event * lhs, const pathfinder_anscer__action__MultiMapNavigate_GetResult_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!pathfinder_anscer__action__MultiMapNavigate_GetResult_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!pathfinder_anscer__action__MultiMapNavigate_GetResult_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
pathfinder_anscer__action__MultiMapNavigate_GetResult_Event__copy(
  const pathfinder_anscer__action__MultiMapNavigate_GetResult_Event * input,
  pathfinder_anscer__action__MultiMapNavigate_GetResult_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!pathfinder_anscer__action__MultiMapNavigate_GetResult_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!pathfinder_anscer__action__MultiMapNavigate_GetResult_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

pathfinder_anscer__action__MultiMapNavigate_GetResult_Event *
pathfinder_anscer__action__MultiMapNavigate_GetResult_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pathfinder_anscer__action__MultiMapNavigate_GetResult_Event * msg = (pathfinder_anscer__action__MultiMapNavigate_GetResult_Event *)allocator.allocate(sizeof(pathfinder_anscer__action__MultiMapNavigate_GetResult_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pathfinder_anscer__action__MultiMapNavigate_GetResult_Event));
  bool success = pathfinder_anscer__action__MultiMapNavigate_GetResult_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pathfinder_anscer__action__MultiMapNavigate_GetResult_Event__destroy(pathfinder_anscer__action__MultiMapNavigate_GetResult_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pathfinder_anscer__action__MultiMapNavigate_GetResult_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pathfinder_anscer__action__MultiMapNavigate_GetResult_Event__Sequence__init(pathfinder_anscer__action__MultiMapNavigate_GetResult_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pathfinder_anscer__action__MultiMapNavigate_GetResult_Event * data = NULL;

  if (size) {
    data = (pathfinder_anscer__action__MultiMapNavigate_GetResult_Event *)allocator.zero_allocate(size, sizeof(pathfinder_anscer__action__MultiMapNavigate_GetResult_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pathfinder_anscer__action__MultiMapNavigate_GetResult_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pathfinder_anscer__action__MultiMapNavigate_GetResult_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
pathfinder_anscer__action__MultiMapNavigate_GetResult_Event__Sequence__fini(pathfinder_anscer__action__MultiMapNavigate_GetResult_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pathfinder_anscer__action__MultiMapNavigate_GetResult_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

pathfinder_anscer__action__MultiMapNavigate_GetResult_Event__Sequence *
pathfinder_anscer__action__MultiMapNavigate_GetResult_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pathfinder_anscer__action__MultiMapNavigate_GetResult_Event__Sequence * array = (pathfinder_anscer__action__MultiMapNavigate_GetResult_Event__Sequence *)allocator.allocate(sizeof(pathfinder_anscer__action__MultiMapNavigate_GetResult_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pathfinder_anscer__action__MultiMapNavigate_GetResult_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pathfinder_anscer__action__MultiMapNavigate_GetResult_Event__Sequence__destroy(pathfinder_anscer__action__MultiMapNavigate_GetResult_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pathfinder_anscer__action__MultiMapNavigate_GetResult_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pathfinder_anscer__action__MultiMapNavigate_GetResult_Event__Sequence__are_equal(const pathfinder_anscer__action__MultiMapNavigate_GetResult_Event__Sequence * lhs, const pathfinder_anscer__action__MultiMapNavigate_GetResult_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pathfinder_anscer__action__MultiMapNavigate_GetResult_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pathfinder_anscer__action__MultiMapNavigate_GetResult_Event__Sequence__copy(
  const pathfinder_anscer__action__MultiMapNavigate_GetResult_Event__Sequence * input,
  pathfinder_anscer__action__MultiMapNavigate_GetResult_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pathfinder_anscer__action__MultiMapNavigate_GetResult_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pathfinder_anscer__action__MultiMapNavigate_GetResult_Event * data =
      (pathfinder_anscer__action__MultiMapNavigate_GetResult_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pathfinder_anscer__action__MultiMapNavigate_GetResult_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pathfinder_anscer__action__MultiMapNavigate_GetResult_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pathfinder_anscer__action__MultiMapNavigate_GetResult_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "pathfinder_anscer/action/detail/multi_map_navigate__functions.h"

bool
pathfinder_anscer__action__MultiMapNavigate_FeedbackMessage__init(pathfinder_anscer__action__MultiMapNavigate_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    pathfinder_anscer__action__MultiMapNavigate_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!pathfinder_anscer__action__MultiMapNavigate_Feedback__init(&msg->feedback)) {
    pathfinder_anscer__action__MultiMapNavigate_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
pathfinder_anscer__action__MultiMapNavigate_FeedbackMessage__fini(pathfinder_anscer__action__MultiMapNavigate_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  pathfinder_anscer__action__MultiMapNavigate_Feedback__fini(&msg->feedback);
}

bool
pathfinder_anscer__action__MultiMapNavigate_FeedbackMessage__are_equal(const pathfinder_anscer__action__MultiMapNavigate_FeedbackMessage * lhs, const pathfinder_anscer__action__MultiMapNavigate_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!pathfinder_anscer__action__MultiMapNavigate_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
pathfinder_anscer__action__MultiMapNavigate_FeedbackMessage__copy(
  const pathfinder_anscer__action__MultiMapNavigate_FeedbackMessage * input,
  pathfinder_anscer__action__MultiMapNavigate_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!pathfinder_anscer__action__MultiMapNavigate_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

pathfinder_anscer__action__MultiMapNavigate_FeedbackMessage *
pathfinder_anscer__action__MultiMapNavigate_FeedbackMessage__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pathfinder_anscer__action__MultiMapNavigate_FeedbackMessage * msg = (pathfinder_anscer__action__MultiMapNavigate_FeedbackMessage *)allocator.allocate(sizeof(pathfinder_anscer__action__MultiMapNavigate_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pathfinder_anscer__action__MultiMapNavigate_FeedbackMessage));
  bool success = pathfinder_anscer__action__MultiMapNavigate_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pathfinder_anscer__action__MultiMapNavigate_FeedbackMessage__destroy(pathfinder_anscer__action__MultiMapNavigate_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pathfinder_anscer__action__MultiMapNavigate_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pathfinder_anscer__action__MultiMapNavigate_FeedbackMessage__Sequence__init(pathfinder_anscer__action__MultiMapNavigate_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pathfinder_anscer__action__MultiMapNavigate_FeedbackMessage * data = NULL;

  if (size) {
    data = (pathfinder_anscer__action__MultiMapNavigate_FeedbackMessage *)allocator.zero_allocate(size, sizeof(pathfinder_anscer__action__MultiMapNavigate_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pathfinder_anscer__action__MultiMapNavigate_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pathfinder_anscer__action__MultiMapNavigate_FeedbackMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
pathfinder_anscer__action__MultiMapNavigate_FeedbackMessage__Sequence__fini(pathfinder_anscer__action__MultiMapNavigate_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pathfinder_anscer__action__MultiMapNavigate_FeedbackMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

pathfinder_anscer__action__MultiMapNavigate_FeedbackMessage__Sequence *
pathfinder_anscer__action__MultiMapNavigate_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pathfinder_anscer__action__MultiMapNavigate_FeedbackMessage__Sequence * array = (pathfinder_anscer__action__MultiMapNavigate_FeedbackMessage__Sequence *)allocator.allocate(sizeof(pathfinder_anscer__action__MultiMapNavigate_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pathfinder_anscer__action__MultiMapNavigate_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pathfinder_anscer__action__MultiMapNavigate_FeedbackMessage__Sequence__destroy(pathfinder_anscer__action__MultiMapNavigate_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pathfinder_anscer__action__MultiMapNavigate_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pathfinder_anscer__action__MultiMapNavigate_FeedbackMessage__Sequence__are_equal(const pathfinder_anscer__action__MultiMapNavigate_FeedbackMessage__Sequence * lhs, const pathfinder_anscer__action__MultiMapNavigate_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pathfinder_anscer__action__MultiMapNavigate_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pathfinder_anscer__action__MultiMapNavigate_FeedbackMessage__Sequence__copy(
  const pathfinder_anscer__action__MultiMapNavigate_FeedbackMessage__Sequence * input,
  pathfinder_anscer__action__MultiMapNavigate_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pathfinder_anscer__action__MultiMapNavigate_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pathfinder_anscer__action__MultiMapNavigate_FeedbackMessage * data =
      (pathfinder_anscer__action__MultiMapNavigate_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pathfinder_anscer__action__MultiMapNavigate_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pathfinder_anscer__action__MultiMapNavigate_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pathfinder_anscer__action__MultiMapNavigate_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
