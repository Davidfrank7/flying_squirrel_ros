// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from flying_robot_interfaces:msg/ServoPWMState.idl
// generated code does not contain a copyright notice
#include "flying_robot_interfaces/msg/detail/servo_pwm_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "flying_robot_interfaces/msg/detail/servo_pwm_state__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace flying_robot_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_flying_robot_interfaces
cdr_serialize(
  const flying_robot_interfaces::msg::ServoPWMState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: id
  {
    cdr << ros_message.id;
  }
  // Member: pwm
  {
    cdr << ros_message.pwm;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_flying_robot_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  flying_robot_interfaces::msg::ServoPWMState & ros_message)
{
  // Member: id
  {
    cdr >> ros_message.id;
  }

  // Member: pwm
  {
    cdr >> ros_message.pwm;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_flying_robot_interfaces
get_serialized_size(
  const flying_robot_interfaces::msg::ServoPWMState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: id
  {
    size_t array_size = ros_message.id.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.id[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pwm
  {
    size_t array_size = ros_message.pwm.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.pwm[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_flying_robot_interfaces
max_serialized_size_ServoPWMState(
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


  // Member: id
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

  // Member: pwm
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
    using DataType = flying_robot_interfaces::msg::ServoPWMState;
    is_plain =
      (
      offsetof(DataType, pwm) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ServoPWMState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const flying_robot_interfaces::msg::ServoPWMState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ServoPWMState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<flying_robot_interfaces::msg::ServoPWMState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ServoPWMState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const flying_robot_interfaces::msg::ServoPWMState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ServoPWMState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ServoPWMState(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ServoPWMState__callbacks = {
  "flying_robot_interfaces::msg",
  "ServoPWMState",
  _ServoPWMState__cdr_serialize,
  _ServoPWMState__cdr_deserialize,
  _ServoPWMState__get_serialized_size,
  _ServoPWMState__max_serialized_size
};

static rosidl_message_type_support_t _ServoPWMState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ServoPWMState__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace flying_robot_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_flying_robot_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<flying_robot_interfaces::msg::ServoPWMState>()
{
  return &flying_robot_interfaces::msg::typesupport_fastrtps_cpp::_ServoPWMState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, flying_robot_interfaces, msg, ServoPWMState)() {
  return &flying_robot_interfaces::msg::typesupport_fastrtps_cpp::_ServoPWMState__handle;
}

#ifdef __cplusplus
}
#endif
