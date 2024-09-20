// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from flying_robot_interfaces:msg/ServoPWMState.idl
// generated code does not contain a copyright notice

#ifndef FLYING_ROBOT_INTERFACES__MSG__DETAIL__SERVO_PWM_STATE__BUILDER_HPP_
#define FLYING_ROBOT_INTERFACES__MSG__DETAIL__SERVO_PWM_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "flying_robot_interfaces/msg/detail/servo_pwm_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace flying_robot_interfaces
{

namespace msg
{

namespace builder
{

class Init_ServoPWMState_pwm
{
public:
  explicit Init_ServoPWMState_pwm(::flying_robot_interfaces::msg::ServoPWMState & msg)
  : msg_(msg)
  {}
  ::flying_robot_interfaces::msg::ServoPWMState pwm(::flying_robot_interfaces::msg::ServoPWMState::_pwm_type arg)
  {
    msg_.pwm = std::move(arg);
    return std::move(msg_);
  }

private:
  ::flying_robot_interfaces::msg::ServoPWMState msg_;
};

class Init_ServoPWMState_id
{
public:
  Init_ServoPWMState_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ServoPWMState_pwm id(::flying_robot_interfaces::msg::ServoPWMState::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_ServoPWMState_pwm(msg_);
  }

private:
  ::flying_robot_interfaces::msg::ServoPWMState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::flying_robot_interfaces::msg::ServoPWMState>()
{
  return flying_robot_interfaces::msg::builder::Init_ServoPWMState_id();
}

}  // namespace flying_robot_interfaces

#endif  // FLYING_ROBOT_INTERFACES__MSG__DETAIL__SERVO_PWM_STATE__BUILDER_HPP_
