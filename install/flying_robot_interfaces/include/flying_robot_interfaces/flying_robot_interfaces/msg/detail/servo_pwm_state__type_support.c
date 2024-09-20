// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from flying_robot_interfaces:msg/ServoPWMState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "flying_robot_interfaces/msg/detail/servo_pwm_state__rosidl_typesupport_introspection_c.h"
#include "flying_robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "flying_robot_interfaces/msg/detail/servo_pwm_state__functions.h"
#include "flying_robot_interfaces/msg/detail/servo_pwm_state__struct.h"


// Include directives for member types
// Member `id`
// Member `pwm`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void flying_robot_interfaces__msg__ServoPWMState__rosidl_typesupport_introspection_c__ServoPWMState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  flying_robot_interfaces__msg__ServoPWMState__init(message_memory);
}

void flying_robot_interfaces__msg__ServoPWMState__rosidl_typesupport_introspection_c__ServoPWMState_fini_function(void * message_memory)
{
  flying_robot_interfaces__msg__ServoPWMState__fini(message_memory);
}

size_t flying_robot_interfaces__msg__ServoPWMState__rosidl_typesupport_introspection_c__size_function__ServoPWMState__id(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * flying_robot_interfaces__msg__ServoPWMState__rosidl_typesupport_introspection_c__get_const_function__ServoPWMState__id(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * flying_robot_interfaces__msg__ServoPWMState__rosidl_typesupport_introspection_c__get_function__ServoPWMState__id(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void flying_robot_interfaces__msg__ServoPWMState__rosidl_typesupport_introspection_c__fetch_function__ServoPWMState__id(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    flying_robot_interfaces__msg__ServoPWMState__rosidl_typesupport_introspection_c__get_const_function__ServoPWMState__id(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void flying_robot_interfaces__msg__ServoPWMState__rosidl_typesupport_introspection_c__assign_function__ServoPWMState__id(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    flying_robot_interfaces__msg__ServoPWMState__rosidl_typesupport_introspection_c__get_function__ServoPWMState__id(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool flying_robot_interfaces__msg__ServoPWMState__rosidl_typesupport_introspection_c__resize_function__ServoPWMState__id(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t flying_robot_interfaces__msg__ServoPWMState__rosidl_typesupport_introspection_c__size_function__ServoPWMState__pwm(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * flying_robot_interfaces__msg__ServoPWMState__rosidl_typesupport_introspection_c__get_const_function__ServoPWMState__pwm(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * flying_robot_interfaces__msg__ServoPWMState__rosidl_typesupport_introspection_c__get_function__ServoPWMState__pwm(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void flying_robot_interfaces__msg__ServoPWMState__rosidl_typesupport_introspection_c__fetch_function__ServoPWMState__pwm(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    flying_robot_interfaces__msg__ServoPWMState__rosidl_typesupport_introspection_c__get_const_function__ServoPWMState__pwm(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void flying_robot_interfaces__msg__ServoPWMState__rosidl_typesupport_introspection_c__assign_function__ServoPWMState__pwm(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    flying_robot_interfaces__msg__ServoPWMState__rosidl_typesupport_introspection_c__get_function__ServoPWMState__pwm(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool flying_robot_interfaces__msg__ServoPWMState__rosidl_typesupport_introspection_c__resize_function__ServoPWMState__pwm(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember flying_robot_interfaces__msg__ServoPWMState__rosidl_typesupport_introspection_c__ServoPWMState_message_member_array[2] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flying_robot_interfaces__msg__ServoPWMState, id),  // bytes offset in struct
    NULL,  // default value
    flying_robot_interfaces__msg__ServoPWMState__rosidl_typesupport_introspection_c__size_function__ServoPWMState__id,  // size() function pointer
    flying_robot_interfaces__msg__ServoPWMState__rosidl_typesupport_introspection_c__get_const_function__ServoPWMState__id,  // get_const(index) function pointer
    flying_robot_interfaces__msg__ServoPWMState__rosidl_typesupport_introspection_c__get_function__ServoPWMState__id,  // get(index) function pointer
    flying_robot_interfaces__msg__ServoPWMState__rosidl_typesupport_introspection_c__fetch_function__ServoPWMState__id,  // fetch(index, &value) function pointer
    flying_robot_interfaces__msg__ServoPWMState__rosidl_typesupport_introspection_c__assign_function__ServoPWMState__id,  // assign(index, value) function pointer
    flying_robot_interfaces__msg__ServoPWMState__rosidl_typesupport_introspection_c__resize_function__ServoPWMState__id  // resize(index) function pointer
  },
  {
    "pwm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flying_robot_interfaces__msg__ServoPWMState, pwm),  // bytes offset in struct
    NULL,  // default value
    flying_robot_interfaces__msg__ServoPWMState__rosidl_typesupport_introspection_c__size_function__ServoPWMState__pwm,  // size() function pointer
    flying_robot_interfaces__msg__ServoPWMState__rosidl_typesupport_introspection_c__get_const_function__ServoPWMState__pwm,  // get_const(index) function pointer
    flying_robot_interfaces__msg__ServoPWMState__rosidl_typesupport_introspection_c__get_function__ServoPWMState__pwm,  // get(index) function pointer
    flying_robot_interfaces__msg__ServoPWMState__rosidl_typesupport_introspection_c__fetch_function__ServoPWMState__pwm,  // fetch(index, &value) function pointer
    flying_robot_interfaces__msg__ServoPWMState__rosidl_typesupport_introspection_c__assign_function__ServoPWMState__pwm,  // assign(index, value) function pointer
    flying_robot_interfaces__msg__ServoPWMState__rosidl_typesupport_introspection_c__resize_function__ServoPWMState__pwm  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers flying_robot_interfaces__msg__ServoPWMState__rosidl_typesupport_introspection_c__ServoPWMState_message_members = {
  "flying_robot_interfaces__msg",  // message namespace
  "ServoPWMState",  // message name
  2,  // number of fields
  sizeof(flying_robot_interfaces__msg__ServoPWMState),
  flying_robot_interfaces__msg__ServoPWMState__rosidl_typesupport_introspection_c__ServoPWMState_message_member_array,  // message members
  flying_robot_interfaces__msg__ServoPWMState__rosidl_typesupport_introspection_c__ServoPWMState_init_function,  // function to initialize message memory (memory has to be allocated)
  flying_robot_interfaces__msg__ServoPWMState__rosidl_typesupport_introspection_c__ServoPWMState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t flying_robot_interfaces__msg__ServoPWMState__rosidl_typesupport_introspection_c__ServoPWMState_message_type_support_handle = {
  0,
  &flying_robot_interfaces__msg__ServoPWMState__rosidl_typesupport_introspection_c__ServoPWMState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_flying_robot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, flying_robot_interfaces, msg, ServoPWMState)() {
  if (!flying_robot_interfaces__msg__ServoPWMState__rosidl_typesupport_introspection_c__ServoPWMState_message_type_support_handle.typesupport_identifier) {
    flying_robot_interfaces__msg__ServoPWMState__rosidl_typesupport_introspection_c__ServoPWMState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &flying_robot_interfaces__msg__ServoPWMState__rosidl_typesupport_introspection_c__ServoPWMState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
