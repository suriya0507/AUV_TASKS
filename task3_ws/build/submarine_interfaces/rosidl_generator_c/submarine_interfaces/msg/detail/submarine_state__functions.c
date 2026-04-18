// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from submarine_interfaces:msg/SubmarineState.idl
// generated code does not contain a copyright notice
#include "submarine_interfaces/msg/detail/submarine_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `facing_direction`
#include "rosidl_runtime_c/string_functions.h"

bool
submarine_interfaces__msg__SubmarineState__init(submarine_interfaces__msg__SubmarineState * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // facing_direction
  if (!rosidl_runtime_c__String__init(&msg->facing_direction)) {
    submarine_interfaces__msg__SubmarineState__fini(msg);
    return false;
  }
  return true;
}

void
submarine_interfaces__msg__SubmarineState__fini(submarine_interfaces__msg__SubmarineState * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // facing_direction
  rosidl_runtime_c__String__fini(&msg->facing_direction);
}

bool
submarine_interfaces__msg__SubmarineState__are_equal(const submarine_interfaces__msg__SubmarineState * lhs, const submarine_interfaces__msg__SubmarineState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // facing_direction
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->facing_direction), &(rhs->facing_direction)))
  {
    return false;
  }
  return true;
}

bool
submarine_interfaces__msg__SubmarineState__copy(
  const submarine_interfaces__msg__SubmarineState * input,
  submarine_interfaces__msg__SubmarineState * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // facing_direction
  if (!rosidl_runtime_c__String__copy(
      &(input->facing_direction), &(output->facing_direction)))
  {
    return false;
  }
  return true;
}

submarine_interfaces__msg__SubmarineState *
submarine_interfaces__msg__SubmarineState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  submarine_interfaces__msg__SubmarineState * msg = (submarine_interfaces__msg__SubmarineState *)allocator.allocate(sizeof(submarine_interfaces__msg__SubmarineState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(submarine_interfaces__msg__SubmarineState));
  bool success = submarine_interfaces__msg__SubmarineState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
submarine_interfaces__msg__SubmarineState__destroy(submarine_interfaces__msg__SubmarineState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    submarine_interfaces__msg__SubmarineState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
submarine_interfaces__msg__SubmarineState__Sequence__init(submarine_interfaces__msg__SubmarineState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  submarine_interfaces__msg__SubmarineState * data = NULL;

  if (size) {
    data = (submarine_interfaces__msg__SubmarineState *)allocator.zero_allocate(size, sizeof(submarine_interfaces__msg__SubmarineState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = submarine_interfaces__msg__SubmarineState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        submarine_interfaces__msg__SubmarineState__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
submarine_interfaces__msg__SubmarineState__Sequence__fini(submarine_interfaces__msg__SubmarineState__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      submarine_interfaces__msg__SubmarineState__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

submarine_interfaces__msg__SubmarineState__Sequence *
submarine_interfaces__msg__SubmarineState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  submarine_interfaces__msg__SubmarineState__Sequence * array = (submarine_interfaces__msg__SubmarineState__Sequence *)allocator.allocate(sizeof(submarine_interfaces__msg__SubmarineState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = submarine_interfaces__msg__SubmarineState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
submarine_interfaces__msg__SubmarineState__Sequence__destroy(submarine_interfaces__msg__SubmarineState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    submarine_interfaces__msg__SubmarineState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
submarine_interfaces__msg__SubmarineState__Sequence__are_equal(const submarine_interfaces__msg__SubmarineState__Sequence * lhs, const submarine_interfaces__msg__SubmarineState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!submarine_interfaces__msg__SubmarineState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
submarine_interfaces__msg__SubmarineState__Sequence__copy(
  const submarine_interfaces__msg__SubmarineState__Sequence * input,
  submarine_interfaces__msg__SubmarineState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(submarine_interfaces__msg__SubmarineState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    submarine_interfaces__msg__SubmarineState * data =
      (submarine_interfaces__msg__SubmarineState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!submarine_interfaces__msg__SubmarineState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          submarine_interfaces__msg__SubmarineState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!submarine_interfaces__msg__SubmarineState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
