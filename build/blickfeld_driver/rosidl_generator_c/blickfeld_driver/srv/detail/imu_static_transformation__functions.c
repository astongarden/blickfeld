// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from blickfeld_driver:srv/ImuStaticTransformation.idl
// generated code does not contain a copyright notice
#include "blickfeld_driver/srv/detail/imu_static_transformation__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
blickfeld_driver__srv__ImuStaticTransformation_Request__init(blickfeld_driver__srv__ImuStaticTransformation_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
blickfeld_driver__srv__ImuStaticTransformation_Request__fini(blickfeld_driver__srv__ImuStaticTransformation_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
blickfeld_driver__srv__ImuStaticTransformation_Request__are_equal(const blickfeld_driver__srv__ImuStaticTransformation_Request * lhs, const blickfeld_driver__srv__ImuStaticTransformation_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
blickfeld_driver__srv__ImuStaticTransformation_Request__copy(
  const blickfeld_driver__srv__ImuStaticTransformation_Request * input,
  blickfeld_driver__srv__ImuStaticTransformation_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

blickfeld_driver__srv__ImuStaticTransformation_Request *
blickfeld_driver__srv__ImuStaticTransformation_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  blickfeld_driver__srv__ImuStaticTransformation_Request * msg = (blickfeld_driver__srv__ImuStaticTransformation_Request *)allocator.allocate(sizeof(blickfeld_driver__srv__ImuStaticTransformation_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(blickfeld_driver__srv__ImuStaticTransformation_Request));
  bool success = blickfeld_driver__srv__ImuStaticTransformation_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
blickfeld_driver__srv__ImuStaticTransformation_Request__destroy(blickfeld_driver__srv__ImuStaticTransformation_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    blickfeld_driver__srv__ImuStaticTransformation_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
blickfeld_driver__srv__ImuStaticTransformation_Request__Sequence__init(blickfeld_driver__srv__ImuStaticTransformation_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  blickfeld_driver__srv__ImuStaticTransformation_Request * data = NULL;

  if (size) {
    data = (blickfeld_driver__srv__ImuStaticTransformation_Request *)allocator.zero_allocate(size, sizeof(blickfeld_driver__srv__ImuStaticTransformation_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = blickfeld_driver__srv__ImuStaticTransformation_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        blickfeld_driver__srv__ImuStaticTransformation_Request__fini(&data[i - 1]);
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
blickfeld_driver__srv__ImuStaticTransformation_Request__Sequence__fini(blickfeld_driver__srv__ImuStaticTransformation_Request__Sequence * array)
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
      blickfeld_driver__srv__ImuStaticTransformation_Request__fini(&array->data[i]);
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

blickfeld_driver__srv__ImuStaticTransformation_Request__Sequence *
blickfeld_driver__srv__ImuStaticTransformation_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  blickfeld_driver__srv__ImuStaticTransformation_Request__Sequence * array = (blickfeld_driver__srv__ImuStaticTransformation_Request__Sequence *)allocator.allocate(sizeof(blickfeld_driver__srv__ImuStaticTransformation_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = blickfeld_driver__srv__ImuStaticTransformation_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
blickfeld_driver__srv__ImuStaticTransformation_Request__Sequence__destroy(blickfeld_driver__srv__ImuStaticTransformation_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    blickfeld_driver__srv__ImuStaticTransformation_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
blickfeld_driver__srv__ImuStaticTransformation_Request__Sequence__are_equal(const blickfeld_driver__srv__ImuStaticTransformation_Request__Sequence * lhs, const blickfeld_driver__srv__ImuStaticTransformation_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!blickfeld_driver__srv__ImuStaticTransformation_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
blickfeld_driver__srv__ImuStaticTransformation_Request__Sequence__copy(
  const blickfeld_driver__srv__ImuStaticTransformation_Request__Sequence * input,
  blickfeld_driver__srv__ImuStaticTransformation_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(blickfeld_driver__srv__ImuStaticTransformation_Request);
    blickfeld_driver__srv__ImuStaticTransformation_Request * data =
      (blickfeld_driver__srv__ImuStaticTransformation_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!blickfeld_driver__srv__ImuStaticTransformation_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          blickfeld_driver__srv__ImuStaticTransformation_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!blickfeld_driver__srv__ImuStaticTransformation_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `imu_transformation`
#include "geometry_msgs/msg/detail/transform_stamped__functions.h"

bool
blickfeld_driver__srv__ImuStaticTransformation_Response__init(blickfeld_driver__srv__ImuStaticTransformation_Response * msg)
{
  if (!msg) {
    return false;
  }
  // imu_transformation
  if (!geometry_msgs__msg__TransformStamped__init(&msg->imu_transformation)) {
    blickfeld_driver__srv__ImuStaticTransformation_Response__fini(msg);
    return false;
  }
  return true;
}

void
blickfeld_driver__srv__ImuStaticTransformation_Response__fini(blickfeld_driver__srv__ImuStaticTransformation_Response * msg)
{
  if (!msg) {
    return;
  }
  // imu_transformation
  geometry_msgs__msg__TransformStamped__fini(&msg->imu_transformation);
}

bool
blickfeld_driver__srv__ImuStaticTransformation_Response__are_equal(const blickfeld_driver__srv__ImuStaticTransformation_Response * lhs, const blickfeld_driver__srv__ImuStaticTransformation_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // imu_transformation
  if (!geometry_msgs__msg__TransformStamped__are_equal(
      &(lhs->imu_transformation), &(rhs->imu_transformation)))
  {
    return false;
  }
  return true;
}

bool
blickfeld_driver__srv__ImuStaticTransformation_Response__copy(
  const blickfeld_driver__srv__ImuStaticTransformation_Response * input,
  blickfeld_driver__srv__ImuStaticTransformation_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // imu_transformation
  if (!geometry_msgs__msg__TransformStamped__copy(
      &(input->imu_transformation), &(output->imu_transformation)))
  {
    return false;
  }
  return true;
}

blickfeld_driver__srv__ImuStaticTransformation_Response *
blickfeld_driver__srv__ImuStaticTransformation_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  blickfeld_driver__srv__ImuStaticTransformation_Response * msg = (blickfeld_driver__srv__ImuStaticTransformation_Response *)allocator.allocate(sizeof(blickfeld_driver__srv__ImuStaticTransformation_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(blickfeld_driver__srv__ImuStaticTransformation_Response));
  bool success = blickfeld_driver__srv__ImuStaticTransformation_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
blickfeld_driver__srv__ImuStaticTransformation_Response__destroy(blickfeld_driver__srv__ImuStaticTransformation_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    blickfeld_driver__srv__ImuStaticTransformation_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
blickfeld_driver__srv__ImuStaticTransformation_Response__Sequence__init(blickfeld_driver__srv__ImuStaticTransformation_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  blickfeld_driver__srv__ImuStaticTransformation_Response * data = NULL;

  if (size) {
    data = (blickfeld_driver__srv__ImuStaticTransformation_Response *)allocator.zero_allocate(size, sizeof(blickfeld_driver__srv__ImuStaticTransformation_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = blickfeld_driver__srv__ImuStaticTransformation_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        blickfeld_driver__srv__ImuStaticTransformation_Response__fini(&data[i - 1]);
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
blickfeld_driver__srv__ImuStaticTransformation_Response__Sequence__fini(blickfeld_driver__srv__ImuStaticTransformation_Response__Sequence * array)
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
      blickfeld_driver__srv__ImuStaticTransformation_Response__fini(&array->data[i]);
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

blickfeld_driver__srv__ImuStaticTransformation_Response__Sequence *
blickfeld_driver__srv__ImuStaticTransformation_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  blickfeld_driver__srv__ImuStaticTransformation_Response__Sequence * array = (blickfeld_driver__srv__ImuStaticTransformation_Response__Sequence *)allocator.allocate(sizeof(blickfeld_driver__srv__ImuStaticTransformation_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = blickfeld_driver__srv__ImuStaticTransformation_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
blickfeld_driver__srv__ImuStaticTransformation_Response__Sequence__destroy(blickfeld_driver__srv__ImuStaticTransformation_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    blickfeld_driver__srv__ImuStaticTransformation_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
blickfeld_driver__srv__ImuStaticTransformation_Response__Sequence__are_equal(const blickfeld_driver__srv__ImuStaticTransformation_Response__Sequence * lhs, const blickfeld_driver__srv__ImuStaticTransformation_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!blickfeld_driver__srv__ImuStaticTransformation_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
blickfeld_driver__srv__ImuStaticTransformation_Response__Sequence__copy(
  const blickfeld_driver__srv__ImuStaticTransformation_Response__Sequence * input,
  blickfeld_driver__srv__ImuStaticTransformation_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(blickfeld_driver__srv__ImuStaticTransformation_Response);
    blickfeld_driver__srv__ImuStaticTransformation_Response * data =
      (blickfeld_driver__srv__ImuStaticTransformation_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!blickfeld_driver__srv__ImuStaticTransformation_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          blickfeld_driver__srv__ImuStaticTransformation_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!blickfeld_driver__srv__ImuStaticTransformation_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
