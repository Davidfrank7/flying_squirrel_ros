// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from flying_robot_interfaces:msg/ServoPWMState.idl
// generated code does not contain a copyright notice

#ifndef FLYING_ROBOT_INTERFACES__MSG__DETAIL__SERVO_PWM_STATE__STRUCT_HPP_
#define FLYING_ROBOT_INTERFACES__MSG__DETAIL__SERVO_PWM_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__flying_robot_interfaces__msg__ServoPWMState __attribute__((deprecated))
#else
# define DEPRECATED__flying_robot_interfaces__msg__ServoPWMState __declspec(deprecated)
#endif

namespace flying_robot_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ServoPWMState_
{
  using Type = ServoPWMState_<ContainerAllocator>;

  explicit ServoPWMState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ServoPWMState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _id_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _id_type id;
  using _pwm_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _pwm_type pwm;

  // setters for named parameter idiom
  Type & set__id(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__pwm(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->pwm = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    flying_robot_interfaces::msg::ServoPWMState_<ContainerAllocator> *;
  using ConstRawPtr =
    const flying_robot_interfaces::msg::ServoPWMState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<flying_robot_interfaces::msg::ServoPWMState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<flying_robot_interfaces::msg::ServoPWMState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      flying_robot_interfaces::msg::ServoPWMState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<flying_robot_interfaces::msg::ServoPWMState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      flying_robot_interfaces::msg::ServoPWMState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<flying_robot_interfaces::msg::ServoPWMState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<flying_robot_interfaces::msg::ServoPWMState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<flying_robot_interfaces::msg::ServoPWMState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__flying_robot_interfaces__msg__ServoPWMState
    std::shared_ptr<flying_robot_interfaces::msg::ServoPWMState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__flying_robot_interfaces__msg__ServoPWMState
    std::shared_ptr<flying_robot_interfaces::msg::ServoPWMState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ServoPWMState_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->pwm != other.pwm) {
      return false;
    }
    return true;
  }
  bool operator!=(const ServoPWMState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ServoPWMState_

// alias to use template instance with default allocator
using ServoPWMState =
  flying_robot_interfaces::msg::ServoPWMState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace flying_robot_interfaces

#endif  // FLYING_ROBOT_INTERFACES__MSG__DETAIL__SERVO_PWM_STATE__STRUCT_HPP_
