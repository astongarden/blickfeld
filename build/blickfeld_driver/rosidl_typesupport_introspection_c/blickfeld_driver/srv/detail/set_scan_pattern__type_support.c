// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from blickfeld_driver:srv/SetScanPattern.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "blickfeld_driver/srv/detail/set_scan_pattern__rosidl_typesupport_introspection_c.h"
#include "blickfeld_driver/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "blickfeld_driver/srv/detail/set_scan_pattern__functions.h"
#include "blickfeld_driver/srv/detail/set_scan_pattern__struct.h"


// Include directives for member types
// Member `frame_mode`
// Member `pulse_type`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SetScanPattern_Request__rosidl_typesupport_introspection_c__SetScanPattern_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  blickfeld_driver__srv__SetScanPattern_Request__init(message_memory);
}

void SetScanPattern_Request__rosidl_typesupport_introspection_c__SetScanPattern_Request_fini_function(void * message_memory)
{
  blickfeld_driver__srv__SetScanPattern_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SetScanPattern_Request__rosidl_typesupport_introspection_c__SetScanPattern_Request_message_member_array[7] = {
  {
    "fov_horizontal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(blickfeld_driver__srv__SetScanPattern_Request, fov_horizontal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fov_vertical",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(blickfeld_driver__srv__SetScanPattern_Request, fov_vertical),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angle_spacing",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(blickfeld_driver__srv__SetScanPattern_Request, angle_spacing),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "scanlines_up",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(blickfeld_driver__srv__SetScanPattern_Request, scanlines_up),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "scanlines_down",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(blickfeld_driver__srv__SetScanPattern_Request, scanlines_down),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "frame_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(blickfeld_driver__srv__SetScanPattern_Request, frame_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pulse_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(blickfeld_driver__srv__SetScanPattern_Request, pulse_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SetScanPattern_Request__rosidl_typesupport_introspection_c__SetScanPattern_Request_message_members = {
  "blickfeld_driver__srv",  // message namespace
  "SetScanPattern_Request",  // message name
  7,  // number of fields
  sizeof(blickfeld_driver__srv__SetScanPattern_Request),
  SetScanPattern_Request__rosidl_typesupport_introspection_c__SetScanPattern_Request_message_member_array,  // message members
  SetScanPattern_Request__rosidl_typesupport_introspection_c__SetScanPattern_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  SetScanPattern_Request__rosidl_typesupport_introspection_c__SetScanPattern_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SetScanPattern_Request__rosidl_typesupport_introspection_c__SetScanPattern_Request_message_type_support_handle = {
  0,
  &SetScanPattern_Request__rosidl_typesupport_introspection_c__SetScanPattern_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_blickfeld_driver
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, blickfeld_driver, srv, SetScanPattern_Request)() {
  if (!SetScanPattern_Request__rosidl_typesupport_introspection_c__SetScanPattern_Request_message_type_support_handle.typesupport_identifier) {
    SetScanPattern_Request__rosidl_typesupport_introspection_c__SetScanPattern_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SetScanPattern_Request__rosidl_typesupport_introspection_c__SetScanPattern_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "blickfeld_driver/srv/detail/set_scan_pattern__rosidl_typesupport_introspection_c.h"
// already included above
// #include "blickfeld_driver/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "blickfeld_driver/srv/detail/set_scan_pattern__functions.h"
// already included above
// #include "blickfeld_driver/srv/detail/set_scan_pattern__struct.h"


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SetScanPattern_Response__rosidl_typesupport_introspection_c__SetScanPattern_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  blickfeld_driver__srv__SetScanPattern_Response__init(message_memory);
}

void SetScanPattern_Response__rosidl_typesupport_introspection_c__SetScanPattern_Response_fini_function(void * message_memory)
{
  blickfeld_driver__srv__SetScanPattern_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SetScanPattern_Response__rosidl_typesupport_introspection_c__SetScanPattern_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(blickfeld_driver__srv__SetScanPattern_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(blickfeld_driver__srv__SetScanPattern_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SetScanPattern_Response__rosidl_typesupport_introspection_c__SetScanPattern_Response_message_members = {
  "blickfeld_driver__srv",  // message namespace
  "SetScanPattern_Response",  // message name
  2,  // number of fields
  sizeof(blickfeld_driver__srv__SetScanPattern_Response),
  SetScanPattern_Response__rosidl_typesupport_introspection_c__SetScanPattern_Response_message_member_array,  // message members
  SetScanPattern_Response__rosidl_typesupport_introspection_c__SetScanPattern_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  SetScanPattern_Response__rosidl_typesupport_introspection_c__SetScanPattern_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SetScanPattern_Response__rosidl_typesupport_introspection_c__SetScanPattern_Response_message_type_support_handle = {
  0,
  &SetScanPattern_Response__rosidl_typesupport_introspection_c__SetScanPattern_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_blickfeld_driver
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, blickfeld_driver, srv, SetScanPattern_Response)() {
  if (!SetScanPattern_Response__rosidl_typesupport_introspection_c__SetScanPattern_Response_message_type_support_handle.typesupport_identifier) {
    SetScanPattern_Response__rosidl_typesupport_introspection_c__SetScanPattern_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SetScanPattern_Response__rosidl_typesupport_introspection_c__SetScanPattern_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "blickfeld_driver/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "blickfeld_driver/srv/detail/set_scan_pattern__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers blickfeld_driver__srv__detail__set_scan_pattern__rosidl_typesupport_introspection_c__SetScanPattern_service_members = {
  "blickfeld_driver__srv",  // service namespace
  "SetScanPattern",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // blickfeld_driver__srv__detail__set_scan_pattern__rosidl_typesupport_introspection_c__SetScanPattern_Request_message_type_support_handle,
  NULL  // response message
  // blickfeld_driver__srv__detail__set_scan_pattern__rosidl_typesupport_introspection_c__SetScanPattern_Response_message_type_support_handle
};

static rosidl_service_type_support_t blickfeld_driver__srv__detail__set_scan_pattern__rosidl_typesupport_introspection_c__SetScanPattern_service_type_support_handle = {
  0,
  &blickfeld_driver__srv__detail__set_scan_pattern__rosidl_typesupport_introspection_c__SetScanPattern_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, blickfeld_driver, srv, SetScanPattern_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, blickfeld_driver, srv, SetScanPattern_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_blickfeld_driver
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, blickfeld_driver, srv, SetScanPattern)() {
  if (!blickfeld_driver__srv__detail__set_scan_pattern__rosidl_typesupport_introspection_c__SetScanPattern_service_type_support_handle.typesupport_identifier) {
    blickfeld_driver__srv__detail__set_scan_pattern__rosidl_typesupport_introspection_c__SetScanPattern_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)blickfeld_driver__srv__detail__set_scan_pattern__rosidl_typesupport_introspection_c__SetScanPattern_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, blickfeld_driver, srv, SetScanPattern_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, blickfeld_driver, srv, SetScanPattern_Response)()->data;
  }

  return &blickfeld_driver__srv__detail__set_scan_pattern__rosidl_typesupport_introspection_c__SetScanPattern_service_type_support_handle;
}
