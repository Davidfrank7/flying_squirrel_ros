// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from flying_robot_interfaces:msg/ServoPWMState.idl
// generated code does not contain a copyright notice
#include "flying_robot_interfaces/msg/detail/servo_pwm_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "flying_robot_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "flying_robot_interfaces/msg/detail/servo_pwm_state__struct.h"
#include "flying_robot_interfaces/msg/detail/servo_pwm_state__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // id, pwm
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // id, pwm

// forward declare type support functions


using _ServoPWMState__ros_msg_type = flying_robot_interfaces__msg__ServoPWMState;

static bool _ServoPWMState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ServoPWMState__ros_msg_type * ros_message = static_cast<const _ServoPWMState__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    size_t size = ros_message->id.size;
    auto array_ptr = ros_message->id.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: pwm
  {
    size_t size = ros_message->pwm.size;
    auto array_ptr = ros_message->pwm.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _ServoPWMState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ServoPWMState__ros_msg_type * ros_message = static_cast<_ServoPWMState__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->id.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->id);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->id, size)) {
      fprintf(stderr, "failed to create array for field 'id'");
      return false;
    }
    auto array_ptr = ros_message->id.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: pwm
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->pwm.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->pwm);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->pwm, size)) {
      fprintf(stderr, "failed to create array for field 'pwm'");
      return false;
    }
    auto array_ptr = ros_message->pwm.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_flying_robot_interfaces
size_t get_serialized_size_flying_robot_interfaces__msg__ServoPWMState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ServoPWMState__ros_msg_type * ros_message = static_cast<const _ServoPWMState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name id
  {
    size_t array_size = ros_message->id.size;
    auto array_ptr = ros_message->id.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pwm
  {
    size_t array_size = ros_message->pwm.size;
    auto array_ptr = ros_message->pwm.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ServoPWMState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_flying_robot_interfaces__msg__ServoPWMState(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_flying_robot_interfaces
size_t max_serialized_size_flying_robot_interfaces__msg__ServoPWMState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: id
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pwm
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = flying_robot_interfaces__msg__ServoPWMState;
    is_plain =
      (
      offsetof(DataType, pwm) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ServoPWMState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_flying_robot_interfaces__msg__ServoPWMState(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ServoPWMState = {
  "flying_robot_interfaces::msg",
  "ServoPWMState",
  _ServoPWMState__cdr_serialize,
  _ServoPWMState__cdr_deserialize,
  _ServoPWMState__get_serialized_size,
  _ServoPWMState__max_serialized_size
};

static rosidl_message_type_support_t _ServoPWMState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ServoPWMState,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, flying_robot_interfaces, msg, ServoPWMState)() {
  return &_ServoPWMState__type_support;
}

#if defined(__cplusplus)
}
#endif
