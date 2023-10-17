// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from blickfeld_driver:srv/SetScanPattern.idl
// generated code does not contain a copyright notice

#ifndef BLICKFELD_DRIVER__SRV__DETAIL__SET_SCAN_PATTERN__STRUCT_H_
#define BLICKFELD_DRIVER__SRV__DETAIL__SET_SCAN_PATTERN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'COMBINE_UP_DOWN'.
static const char * const blickfeld_driver__srv__SetScanPattern_Request__COMBINE_UP_DOWN = "COMBINE_UP_DOWN";

/// Constant 'ONLY_UP'.
static const char * const blickfeld_driver__srv__SetScanPattern_Request__ONLY_UP = "ONLY_UP";

/// Constant 'ONLY_DOWN'.
static const char * const blickfeld_driver__srv__SetScanPattern_Request__ONLY_DOWN = "ONLY_DOWN";

/// Constant 'SEPARATE'.
static const char * const blickfeld_driver__srv__SetScanPattern_Request__SEPARATE = "SEPARATE";

/// Constant 'EQUI_HORIZONTAL_ANGLE'.
static const char * const blickfeld_driver__srv__SetScanPattern_Request__EQUI_HORIZONTAL_ANGLE = "EQUI_HORIZONTAL_ANGLE";

/// Constant 'INTERLEAVE'.
static const char * const blickfeld_driver__srv__SetScanPattern_Request__INTERLEAVE = "INTERLEAVE";

// Include directives for member types
// Member 'frame_mode'
// Member 'pulse_type'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/SetScanPattern in the package blickfeld_driver.
typedef struct blickfeld_driver__srv__SetScanPattern_Request
{
  float fov_horizontal;
  float fov_vertical;
  float angle_spacing;
  uint16_t scanlines_up;
  uint16_t scanlines_down;
  rosidl_runtime_c__String frame_mode;
  rosidl_runtime_c__String pulse_type;
} blickfeld_driver__srv__SetScanPattern_Request;

// Struct for a sequence of blickfeld_driver__srv__SetScanPattern_Request.
typedef struct blickfeld_driver__srv__SetScanPattern_Request__Sequence
{
  blickfeld_driver__srv__SetScanPattern_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} blickfeld_driver__srv__SetScanPattern_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in srv/SetScanPattern in the package blickfeld_driver.
typedef struct blickfeld_driver__srv__SetScanPattern_Response
{
  bool success;
  rosidl_runtime_c__String message;
} blickfeld_driver__srv__SetScanPattern_Response;

// Struct for a sequence of blickfeld_driver__srv__SetScanPattern_Response.
typedef struct blickfeld_driver__srv__SetScanPattern_Response__Sequence
{
  blickfeld_driver__srv__SetScanPattern_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} blickfeld_driver__srv__SetScanPattern_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BLICKFELD_DRIVER__SRV__DETAIL__SET_SCAN_PATTERN__STRUCT_H_
