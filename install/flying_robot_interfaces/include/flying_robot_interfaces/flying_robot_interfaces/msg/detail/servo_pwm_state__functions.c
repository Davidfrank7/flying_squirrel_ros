// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from flying_robot_interfaces:msg/ServoPWMState.idl
// generated code does not contain a copyright notice
#include "flying_robot_interfaces/msg/detail/servo_pwm_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `id`
// Member `pwm`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
flying_robot_interfaces__msg__ServoPWMState__init(flying_robot_interfaces__msg__ServoPWMState * msg)
{
  if (!msg) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->id, 0)) {
    flying_robot_interfaces__msg__ServoPWMState__fini(msg);
    return false;
  }
  // pwm
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->pwm, 0)) {
    flying_robot_interfaces__msg__ServoPWMState__fini(msg);
    return false;
  }
  return true;
}

void
flying_robot_interfaces__msg__ServoPWMState__fini(flying_robot_interfaces__msg__ServoPWMState * msg)
{
  if (!msg) {
    return;
  }
  // id
  rosidl_runtime_c__int32__Sequence__fini(&msg->id);
  // pwm
  rosidl_runtime_c__int32__Sequence__fini(&msg->pwm);
}

bool
flying_robot_interfaces__msg__ServoPWMState__are_equal(const flying_robot_interfaces__msg__ServoPWMState * lhs, const flying_robot_interfaces__msg__ServoPWMState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // pwm
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->pwm), &(rhs->pwm)))
  {
    return false;
  }
  return true;
}

bool
flying_robot_interfaces__msg__ServoPWMState__copy(
  const flying_robot_interfaces__msg__ServoPWMState * input,
  flying_robot_interfaces__msg__ServoPWMState * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // pwm
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->pwm), &(output->pwm)))
  {
    return false;
  }
  return true;
}

flying_robot_interfaces__msg__ServoPWMState *
flying_robot_interfaces__msg__ServoPWMState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flying_robot_interfaces__msg__ServoPWMState * msg = (flying_robot_interfaces__msg__ServoPWMState *)allocator.allocate(sizeof(flying_robot_interfaces__msg__ServoPWMState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(flying_robot_interfaces__msg__ServoPWMState));
  bool success = flying_robot_interfaces__msg__ServoPWMState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
flying_robot_interfaces__msg__ServoPWMState__destroy(flying_robot_interfaces__msg__ServoPWMState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    flying_robot_interfaces__msg__ServoPWMState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
flying_robot_interfaces__msg__ServoPWMState__Sequence__init(flying_robot_interfaces__msg__ServoPWMState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flying_robot_interfaces__msg__ServoPWMState * data = NULL;

  if (size) {
    data = (flying_robot_interfaces__msg__ServoPWMState *)allocator.zero_allocate(size, sizeof(flying_robot_interfaces__msg__ServoPWMState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = flying_robot_interfaces__msg__ServoPWMState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        flying_robot_interfaces__msg__ServoPWMState__fini(&data[i - 1]);
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
flying_robot_interfaces__msg__ServoPWMState__Sequence__fini(flying_robot_interfaces__msg__ServoPWMState__Sequence * array)
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
      flying_robot_interfaces__msg__ServoPWMState__fini(&array->data[i]);
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

flying_robot_interfaces__msg__ServoPWMState__Sequence *
flying_robot_interfaces__msg__ServoPWMState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flying_robot_interfaces__msg__ServoPWMState__Sequence * array = (flying_robot_interfaces__msg__ServoPWMState__Sequence *)allocator.allocate(sizeof(flying_robot_interfaces__msg__ServoPWMState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = flying_robot_interfaces__msg__ServoPWMState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
flying_robot_interfaces__msg__ServoPWMState__Sequence__destroy(flying_robot_interfaces__msg__ServoPWMState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    flying_robot_interfaces__msg__ServoPWMState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
flying_robot_interfaces__msg__ServoPWMState__Sequence__are_equal(const flying_robot_interfaces__msg__ServoPWMState__Sequence * lhs, const flying_robot_interfaces__msg__ServoPWMState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!flying_robot_interfaces__msg__ServoPWMState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
flying_robot_interfaces__msg__ServoPWMState__Sequence__copy(
  const flying_robot_interfaces__msg__ServoPWMState__Sequence * input,
  flying_robot_interfaces__msg__ServoPWMState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(flying_robot_interfaces__msg__ServoPWMState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    flying_robot_interfaces__msg__ServoPWMState * data =
      (flying_robot_interfaces__msg__ServoPWMState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!flying_robot_interfaces__msg__ServoPWMState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          flying_robot_interfaces__msg__ServoPWMState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!flying_robot_interfaces__msg__ServoPWMState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
