// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from flying_robot_interfaces:msg/ServoPWMState.idl
// generated code does not contain a copyright notice

#ifndef FLYING_ROBOT_INTERFACES__MSG__DETAIL__SERVO_PWM_STATE__FUNCTIONS_H_
#define FLYING_ROBOT_INTERFACES__MSG__DETAIL__SERVO_PWM_STATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "flying_robot_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "flying_robot_interfaces/msg/detail/servo_pwm_state__struct.h"

/// Initialize msg/ServoPWMState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * flying_robot_interfaces__msg__ServoPWMState
 * )) before or use
 * flying_robot_interfaces__msg__ServoPWMState__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_flying_robot_interfaces
bool
flying_robot_interfaces__msg__ServoPWMState__init(flying_robot_interfaces__msg__ServoPWMState * msg);

/// Finalize msg/ServoPWMState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_flying_robot_interfaces
void
flying_robot_interfaces__msg__ServoPWMState__fini(flying_robot_interfaces__msg__ServoPWMState * msg);

/// Create msg/ServoPWMState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * flying_robot_interfaces__msg__ServoPWMState__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_flying_robot_interfaces
flying_robot_interfaces__msg__ServoPWMState *
flying_robot_interfaces__msg__ServoPWMState__create();

/// Destroy msg/ServoPWMState message.
/**
 * It calls
 * flying_robot_interfaces__msg__ServoPWMState__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_flying_robot_interfaces
void
flying_robot_interfaces__msg__ServoPWMState__destroy(flying_robot_interfaces__msg__ServoPWMState * msg);

/// Check for msg/ServoPWMState message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_flying_robot_interfaces
bool
flying_robot_interfaces__msg__ServoPWMState__are_equal(const flying_robot_interfaces__msg__ServoPWMState * lhs, const flying_robot_interfaces__msg__ServoPWMState * rhs);

/// Copy a msg/ServoPWMState message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_flying_robot_interfaces
bool
flying_robot_interfaces__msg__ServoPWMState__copy(
  const flying_robot_interfaces__msg__ServoPWMState * input,
  flying_robot_interfaces__msg__ServoPWMState * output);

/// Initialize array of msg/ServoPWMState messages.
/**
 * It allocates the memory for the number of elements and calls
 * flying_robot_interfaces__msg__ServoPWMState__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_flying_robot_interfaces
bool
flying_robot_interfaces__msg__ServoPWMState__Sequence__init(flying_robot_interfaces__msg__ServoPWMState__Sequence * array, size_t size);

/// Finalize array of msg/ServoPWMState messages.
/**
 * It calls
 * flying_robot_interfaces__msg__ServoPWMState__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_flying_robot_interfaces
void
flying_robot_interfaces__msg__ServoPWMState__Sequence__fini(flying_robot_interfaces__msg__ServoPWMState__Sequence * array);

/// Create array of msg/ServoPWMState messages.
/**
 * It allocates the memory for the array and calls
 * flying_robot_interfaces__msg__ServoPWMState__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_flying_robot_interfaces
flying_robot_interfaces__msg__ServoPWMState__Sequence *
flying_robot_interfaces__msg__ServoPWMState__Sequence__create(size_t size);

/// Destroy array of msg/ServoPWMState messages.
/**
 * It calls
 * flying_robot_interfaces__msg__ServoPWMState__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_flying_robot_interfaces
void
flying_robot_interfaces__msg__ServoPWMState__Sequence__destroy(flying_robot_interfaces__msg__ServoPWMState__Sequence * array);

/// Check for msg/ServoPWMState message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_flying_robot_interfaces
bool
flying_robot_interfaces__msg__ServoPWMState__Sequence__are_equal(const flying_robot_interfaces__msg__ServoPWMState__Sequence * lhs, const flying_robot_interfaces__msg__ServoPWMState__Sequence * rhs);

/// Copy an array of msg/ServoPWMState messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_flying_robot_interfaces
bool
flying_robot_interfaces__msg__ServoPWMState__Sequence__copy(
  const flying_robot_interfaces__msg__ServoPWMState__Sequence * input,
  flying_robot_interfaces__msg__ServoPWMState__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // FLYING_ROBOT_INTERFACES__MSG__DETAIL__SERVO_PWM_STATE__FUNCTIONS_H_
