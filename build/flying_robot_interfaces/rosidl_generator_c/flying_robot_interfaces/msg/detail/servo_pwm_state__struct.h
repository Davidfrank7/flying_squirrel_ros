// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from flying_robot_interfaces:msg/ServoPWMState.idl
// generated code does not contain a copyright notice

#ifndef FLYING_ROBOT_INTERFACES__MSG__DETAIL__SERVO_PWM_STATE__STRUCT_H_
#define FLYING_ROBOT_INTERFACES__MSG__DETAIL__SERVO_PWM_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'id'
// Member 'pwm'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ServoPWMState in the package flying_robot_interfaces.
typedef struct flying_robot_interfaces__msg__ServoPWMState
{
  rosidl_runtime_c__int32__Sequence id;
  rosidl_runtime_c__int32__Sequence pwm;
} flying_robot_interfaces__msg__ServoPWMState;

// Struct for a sequence of flying_robot_interfaces__msg__ServoPWMState.
typedef struct flying_robot_interfaces__msg__ServoPWMState__Sequence
{
  flying_robot_interfaces__msg__ServoPWMState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} flying_robot_interfaces__msg__ServoPWMState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FLYING_ROBOT_INTERFACES__MSG__DETAIL__SERVO_PWM_STATE__STRUCT_H_
