// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from submarine_interfaces:msg/SubmarineState.idl
// generated code does not contain a copyright notice

#ifndef SUBMARINE_INTERFACES__MSG__DETAIL__SUBMARINE_STATE__STRUCT_H_
#define SUBMARINE_INTERFACES__MSG__DETAIL__SUBMARINE_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'facing_direction'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/SubmarineState in the package submarine_interfaces.
typedef struct submarine_interfaces__msg__SubmarineState
{
  double x;
  double y;
  rosidl_runtime_c__String facing_direction;
} submarine_interfaces__msg__SubmarineState;

// Struct for a sequence of submarine_interfaces__msg__SubmarineState.
typedef struct submarine_interfaces__msg__SubmarineState__Sequence
{
  submarine_interfaces__msg__SubmarineState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} submarine_interfaces__msg__SubmarineState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SUBMARINE_INTERFACES__MSG__DETAIL__SUBMARINE_STATE__STRUCT_H_
