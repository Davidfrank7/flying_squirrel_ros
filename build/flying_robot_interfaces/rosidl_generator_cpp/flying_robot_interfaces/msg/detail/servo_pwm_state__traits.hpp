// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from flying_robot_interfaces:msg/ServoPWMState.idl
// generated code does not contain a copyright notice

#ifndef FLYING_ROBOT_INTERFACES__MSG__DETAIL__SERVO_PWM_STATE__TRAITS_HPP_
#define FLYING_ROBOT_INTERFACES__MSG__DETAIL__SERVO_PWM_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "flying_robot_interfaces/msg/detail/servo_pwm_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace flying_robot_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ServoPWMState & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    if (msg.id.size() == 0) {
      out << "id: []";
    } else {
      out << "id: [";
      size_t pending_items = msg.id.size();
      for (auto item : msg.id) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: pwm
  {
    if (msg.pwm.size() == 0) {
      out << "pwm: []";
    } else {
      out << "pwm: [";
      size_t pending_items = msg.pwm.size();
      for (auto item : msg.pwm) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ServoPWMState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.id.size() == 0) {
      out << "id: []\n";
    } else {
      out << "id:\n";
      for (auto item : msg.id) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: pwm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pwm.size() == 0) {
      out << "pwm: []\n";
    } else {
      out << "pwm:\n";
      for (auto item : msg.pwm) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ServoPWMState & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace flying_robot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use flying_robot_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const flying_robot_interfaces::msg::ServoPWMState & msg,
  std::ostream & out, size_t indentation = 0)
{
  flying_robot_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use flying_robot_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const flying_robot_interfaces::msg::ServoPWMState & msg)
{
  return flying_robot_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<flying_robot_interfaces::msg::ServoPWMState>()
{
  return "flying_robot_interfaces::msg::ServoPWMState";
}

template<>
inline const char * name<flying_robot_interfaces::msg::ServoPWMState>()
{
  return "flying_robot_interfaces/msg/ServoPWMState";
}

template<>
struct has_fixed_size<flying_robot_interfaces::msg::ServoPWMState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<flying_robot_interfaces::msg::ServoPWMState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<flying_robot_interfaces::msg::ServoPWMState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FLYING_ROBOT_INTERFACES__MSG__DETAIL__SERVO_PWM_STATE__TRAITS_HPP_
