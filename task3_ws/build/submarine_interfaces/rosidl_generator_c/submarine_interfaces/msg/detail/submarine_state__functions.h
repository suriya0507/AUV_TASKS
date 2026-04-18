// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from submarine_interfaces:msg/SubmarineState.idl
// generated code does not contain a copyright notice

#ifndef SUBMARINE_INTERFACES__MSG__DETAIL__SUBMARINE_STATE__FUNCTIONS_H_
#define SUBMARINE_INTERFACES__MSG__DETAIL__SUBMARINE_STATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "submarine_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "submarine_interfaces/msg/detail/submarine_state__struct.h"

/// Initialize msg/SubmarineState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * submarine_interfaces__msg__SubmarineState
 * )) before or use
 * submarine_interfaces__msg__SubmarineState__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_submarine_interfaces
bool
submarine_interfaces__msg__SubmarineState__init(submarine_interfaces__msg__SubmarineState * msg);

/// Finalize msg/SubmarineState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_submarine_interfaces
void
submarine_interfaces__msg__SubmarineState__fini(submarine_interfaces__msg__SubmarineState * msg);

/// Create msg/SubmarineState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * submarine_interfaces__msg__SubmarineState__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_submarine_interfaces
submarine_interfaces__msg__SubmarineState *
submarine_interfaces__msg__SubmarineState__create();

/// Destroy msg/SubmarineState message.
/**
 * It calls
 * submarine_interfaces__msg__SubmarineState__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_submarine_interfaces
void
submarine_interfaces__msg__SubmarineState__destroy(submarine_interfaces__msg__SubmarineState * msg);

/// Check for msg/SubmarineState message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_submarine_interfaces
bool
submarine_interfaces__msg__SubmarineState__are_equal(const submarine_interfaces__msg__SubmarineState * lhs, const submarine_interfaces__msg__SubmarineState * rhs);

/// Copy a msg/SubmarineState message.
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
ROSIDL_GENERATOR_C_PUBLIC_submarine_interfaces
bool
submarine_interfaces__msg__SubmarineState__copy(
  const submarine_interfaces__msg__SubmarineState * input,
  submarine_interfaces__msg__SubmarineState * output);

/// Initialize array of msg/SubmarineState messages.
/**
 * It allocates the memory for the number of elements and calls
 * submarine_interfaces__msg__SubmarineState__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_submarine_interfaces
bool
submarine_interfaces__msg__SubmarineState__Sequence__init(submarine_interfaces__msg__SubmarineState__Sequence * array, size_t size);

/// Finalize array of msg/SubmarineState messages.
/**
 * It calls
 * submarine_interfaces__msg__SubmarineState__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_submarine_interfaces
void
submarine_interfaces__msg__SubmarineState__Sequence__fini(submarine_interfaces__msg__SubmarineState__Sequence * array);

/// Create array of msg/SubmarineState messages.
/**
 * It allocates the memory for the array and calls
 * submarine_interfaces__msg__SubmarineState__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_submarine_interfaces
submarine_interfaces__msg__SubmarineState__Sequence *
submarine_interfaces__msg__SubmarineState__Sequence__create(size_t size);

/// Destroy array of msg/SubmarineState messages.
/**
 * It calls
 * submarine_interfaces__msg__SubmarineState__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_submarine_interfaces
void
submarine_interfaces__msg__SubmarineState__Sequence__destroy(submarine_interfaces__msg__SubmarineState__Sequence * array);

/// Check for msg/SubmarineState message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_submarine_interfaces
bool
submarine_interfaces__msg__SubmarineState__Sequence__are_equal(const submarine_interfaces__msg__SubmarineState__Sequence * lhs, const submarine_interfaces__msg__SubmarineState__Sequence * rhs);

/// Copy an array of msg/SubmarineState messages.
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
ROSIDL_GENERATOR_C_PUBLIC_submarine_interfaces
bool
submarine_interfaces__msg__SubmarineState__Sequence__copy(
  const submarine_interfaces__msg__SubmarineState__Sequence * input,
  submarine_interfaces__msg__SubmarineState__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SUBMARINE_INTERFACES__MSG__DETAIL__SUBMARINE_STATE__FUNCTIONS_H_
