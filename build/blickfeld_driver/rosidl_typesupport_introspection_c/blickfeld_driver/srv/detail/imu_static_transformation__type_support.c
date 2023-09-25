// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from blickfeld_driver:srv/ImuStaticTransformation.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "blickfeld_driver/srv/detail/imu_static_transformation__rosidl_typesupport_introspection_c.h"
#include "blickfeld_driver/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "blickfeld_driver/srv/detail/imu_static_transformation__functions.h"
#include "blickfeld_driver/srv/detail/imu_static_transformation__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ImuStaticTransformation_Request__rosidl_typesupport_introspection_c__ImuStaticTransformation_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  blickfeld_driver__srv__ImuStaticTransformation_Request__init(message_memory);
}

void ImuStaticTransformation_Request__rosidl_typesupport_introspection_c__ImuStaticTransformation_Request_fini_function(void * message_memory)
{
  blickfeld_driver__srv__ImuStaticTransformation_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ImuStaticTransformation_Request__rosidl_typesupport_introspection_c__ImuStaticTransformation_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(blickfeld_driver__srv__ImuStaticTransformation_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ImuStaticTransformation_Request__rosidl_typesupport_introspection_c__ImuStaticTransformation_Request_message_members = {
  "blickfeld_driver__srv",  // message namespace
  "ImuStaticTransformation_Request",  // message name
  1,  // number of fields
  sizeof(blickfeld_driver__srv__ImuStaticTransformation_Request),
  ImuStaticTransformation_Request__rosidl_typesupport_introspection_c__ImuStaticTransformation_Request_message_member_array,  // message members
  ImuStaticTransformation_Request__rosidl_typesupport_introspection_c__ImuStaticTransformation_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ImuStaticTransformation_Request__rosidl_typesupport_introspection_c__ImuStaticTransformation_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ImuStaticTransformation_Request__rosidl_typesupport_introspection_c__ImuStaticTransformation_Request_message_type_support_handle = {
  0,
  &ImuStaticTransformation_Request__rosidl_typesupport_introspection_c__ImuStaticTransformation_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_blickfeld_driver
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, blickfeld_driver, srv, ImuStaticTransformation_Request)() {
  if (!ImuStaticTransformation_Request__rosidl_typesupport_introspection_c__ImuStaticTransformation_Request_message_type_support_handle.typesupport_identifier) {
    ImuStaticTransformation_Request__rosidl_typesupport_introspection_c__ImuStaticTransformation_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ImuStaticTransformation_Request__rosidl_typesupport_introspection_c__ImuStaticTransformation_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "blickfeld_driver/srv/detail/imu_static_transformation__rosidl_typesupport_introspection_c.h"
// already included above
// #include "blickfeld_driver/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "blickfeld_driver/srv/detail/imu_static_transformation__functions.h"
// already included above
// #include "blickfeld_driver/srv/detail/imu_static_transformation__struct.h"


// Include directives for member types
// Member `imu_transformation`
#include "geometry_msgs/msg/transform_stamped.h"
// Member `imu_transformation`
#include "geometry_msgs/msg/detail/transform_stamped__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ImuStaticTransformation_Response__rosidl_typesupport_introspection_c__ImuStaticTransformation_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  blickfeld_driver__srv__ImuStaticTransformation_Response__init(message_memory);
}

void ImuStaticTransformation_Response__rosidl_typesupport_introspection_c__ImuStaticTransformation_Response_fini_function(void * message_memory)
{
  blickfeld_driver__srv__ImuStaticTransformation_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ImuStaticTransformation_Response__rosidl_typesupport_introspection_c__ImuStaticTransformation_Response_message_member_array[1] = {
  {
    "imu_transformation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(blickfeld_driver__srv__ImuStaticTransformation_Response, imu_transformation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ImuStaticTransformation_Response__rosidl_typesupport_introspection_c__ImuStaticTransformation_Response_message_members = {
  "blickfeld_driver__srv",  // message namespace
  "ImuStaticTransformation_Response",  // message name
  1,  // number of fields
  sizeof(blickfeld_driver__srv__ImuStaticTransformation_Response),
  ImuStaticTransformation_Response__rosidl_typesupport_introspection_c__ImuStaticTransformation_Response_message_member_array,  // message members
  ImuStaticTransformation_Response__rosidl_typesupport_introspection_c__ImuStaticTransformation_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ImuStaticTransformation_Response__rosidl_typesupport_introspection_c__ImuStaticTransformation_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ImuStaticTransformation_Response__rosidl_typesupport_introspection_c__ImuStaticTransformation_Response_message_type_support_handle = {
  0,
  &ImuStaticTransformation_Response__rosidl_typesupport_introspection_c__ImuStaticTransformation_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_blickfeld_driver
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, blickfeld_driver, srv, ImuStaticTransformation_Response)() {
  ImuStaticTransformation_Response__rosidl_typesupport_introspection_c__ImuStaticTransformation_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, TransformStamped)();
  if (!ImuStaticTransformation_Response__rosidl_typesupport_introspection_c__ImuStaticTransformation_Response_message_type_support_handle.typesupport_identifier) {
    ImuStaticTransformation_Response__rosidl_typesupport_introspection_c__ImuStaticTransformation_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ImuStaticTransformation_Response__rosidl_typesupport_introspection_c__ImuStaticTransformation_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "blickfeld_driver/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "blickfeld_driver/srv/detail/imu_static_transformation__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers blickfeld_driver__srv__detail__imu_static_transformation__rosidl_typesupport_introspection_c__ImuStaticTransformation_service_members = {
  "blickfeld_driver__srv",  // service namespace
  "ImuStaticTransformation",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // blickfeld_driver__srv__detail__imu_static_transformation__rosidl_typesupport_introspection_c__ImuStaticTransformation_Request_message_type_support_handle,
  NULL  // response message
  // blickfeld_driver__srv__detail__imu_static_transformation__rosidl_typesupport_introspection_c__ImuStaticTransformation_Response_message_type_support_handle
};

static rosidl_service_type_support_t blickfeld_driver__srv__detail__imu_static_transformation__rosidl_typesupport_introspection_c__ImuStaticTransformation_service_type_support_handle = {
  0,
  &blickfeld_driver__srv__detail__imu_static_transformation__rosidl_typesupport_introspection_c__ImuStaticTransformation_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, blickfeld_driver, srv, ImuStaticTransformation_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, blickfeld_driver, srv, ImuStaticTransformation_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_blickfeld_driver
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, blickfeld_driver, srv, ImuStaticTransformation)() {
  if (!blickfeld_driver__srv__detail__imu_static_transformation__rosidl_typesupport_introspection_c__ImuStaticTransformation_service_type_support_handle.typesupport_identifier) {
    blickfeld_driver__srv__detail__imu_static_transformation__rosidl_typesupport_introspection_c__ImuStaticTransformation_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)blickfeld_driver__srv__detail__imu_static_transformation__rosidl_typesupport_introspection_c__ImuStaticTransformation_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, blickfeld_driver, srv, ImuStaticTransformation_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, blickfeld_driver, srv, ImuStaticTransformation_Response)()->data;
  }

  return &blickfeld_driver__srv__detail__imu_static_transformation__rosidl_typesupport_introspection_c__ImuStaticTransformation_service_type_support_handle;
}
