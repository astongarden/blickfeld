// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from blickfeld_driver:srv/ImuStaticTransformation.idl
// generated code does not contain a copyright notice

#ifndef BLICKFELD_DRIVER__SRV__DETAIL__IMU_STATIC_TRANSFORMATION__STRUCT_H_
#define BLICKFELD_DRIVER__SRV__DETAIL__IMU_STATIC_TRANSFORMATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/ImuStaticTransformation in the package blickfeld_driver.
typedef struct blickfeld_driver__srv__ImuStaticTransformation_Request
{
  uint8_t structure_needs_at_least_one_member;
} blickfeld_driver__srv__ImuStaticTransformation_Request;

// Struct for a sequence of blickfeld_driver__srv__ImuStaticTransformation_Request.
typedef struct blickfeld_driver__srv__ImuStaticTransformation_Request__Sequence
{
  blickfeld_driver__srv__ImuStaticTransformation_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} blickfeld_driver__srv__ImuStaticTransformation_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'imu_transformation'
#include "geometry_msgs/msg/detail/transform_stamped__struct.h"

// Struct defined in srv/ImuStaticTransformation in the package blickfeld_driver.
typedef struct blickfeld_driver__srv__ImuStaticTransformation_Response
{
  geometry_msgs__msg__TransformStamped imu_transformation;
} blickfeld_driver__srv__ImuStaticTransformation_Response;

// Struct for a sequence of blickfeld_driver__srv__ImuStaticTransformation_Response.
typedef struct blickfeld_driver__srv__ImuStaticTransformation_Response__Sequence
{
  blickfeld_driver__srv__ImuStaticTransformation_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} blickfeld_driver__srv__ImuStaticTransformation_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BLICKFELD_DRIVER__SRV__DETAIL__IMU_STATIC_TRANSFORMATION__STRUCT_H_
