// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from blickfeld_driver:srv/SetScanPattern.idl
// generated code does not contain a copyright notice
#include "blickfeld_driver/srv/detail/set_scan_pattern__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "blickfeld_driver/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "blickfeld_driver/srv/detail/set_scan_pattern__struct.h"
#include "blickfeld_driver/srv/detail/set_scan_pattern__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // frame_mode, pulse_type
#include "rosidl_runtime_c/string_functions.h"  // frame_mode, pulse_type

// forward declare type support functions


using _SetScanPattern_Request__ros_msg_type = blickfeld_driver__srv__SetScanPattern_Request;

static bool _SetScanPattern_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetScanPattern_Request__ros_msg_type * ros_message = static_cast<const _SetScanPattern_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: fov_horizontal
  {
    cdr << ros_message->fov_horizontal;
  }

  // Field name: fov_vertical
  {
    cdr << ros_message->fov_vertical;
  }

  // Field name: angle_spacing
  {
    cdr << ros_message->angle_spacing;
  }

  // Field name: scanlines_up
  {
    cdr << ros_message->scanlines_up;
  }

  // Field name: scanlines_down
  {
    cdr << ros_message->scanlines_down;
  }

  // Field name: frame_mode
  {
    const rosidl_runtime_c__String * str = &ros_message->frame_mode;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: pulse_type
  {
    const rosidl_runtime_c__String * str = &ros_message->pulse_type;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _SetScanPattern_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetScanPattern_Request__ros_msg_type * ros_message = static_cast<_SetScanPattern_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: fov_horizontal
  {
    cdr >> ros_message->fov_horizontal;
  }

  // Field name: fov_vertical
  {
    cdr >> ros_message->fov_vertical;
  }

  // Field name: angle_spacing
  {
    cdr >> ros_message->angle_spacing;
  }

  // Field name: scanlines_up
  {
    cdr >> ros_message->scanlines_up;
  }

  // Field name: scanlines_down
  {
    cdr >> ros_message->scanlines_down;
  }

  // Field name: frame_mode
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->frame_mode.data) {
      rosidl_runtime_c__String__init(&ros_message->frame_mode);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->frame_mode,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'frame_mode'\n");
      return false;
    }
  }

  // Field name: pulse_type
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->pulse_type.data) {
      rosidl_runtime_c__String__init(&ros_message->pulse_type);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->pulse_type,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'pulse_type'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_blickfeld_driver
size_t get_serialized_size_blickfeld_driver__srv__SetScanPattern_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetScanPattern_Request__ros_msg_type * ros_message = static_cast<const _SetScanPattern_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name fov_horizontal
  {
    size_t item_size = sizeof(ros_message->fov_horizontal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fov_vertical
  {
    size_t item_size = sizeof(ros_message->fov_vertical);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name angle_spacing
  {
    size_t item_size = sizeof(ros_message->angle_spacing);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name scanlines_up
  {
    size_t item_size = sizeof(ros_message->scanlines_up);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name scanlines_down
  {
    size_t item_size = sizeof(ros_message->scanlines_down);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name frame_mode
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->frame_mode.size + 1);
  // field.name pulse_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->pulse_type.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _SetScanPattern_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_blickfeld_driver__srv__SetScanPattern_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_blickfeld_driver
size_t max_serialized_size_blickfeld_driver__srv__SetScanPattern_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: fov_horizontal
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: fov_vertical
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: angle_spacing
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: scanlines_up
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: scanlines_down
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: frame_mode
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: pulse_type
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _SetScanPattern_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_blickfeld_driver__srv__SetScanPattern_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SetScanPattern_Request = {
  "blickfeld_driver::srv",
  "SetScanPattern_Request",
  _SetScanPattern_Request__cdr_serialize,
  _SetScanPattern_Request__cdr_deserialize,
  _SetScanPattern_Request__get_serialized_size,
  _SetScanPattern_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetScanPattern_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetScanPattern_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, blickfeld_driver, srv, SetScanPattern_Request)() {
  return &_SetScanPattern_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "blickfeld_driver/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "blickfeld_driver/srv/detail/set_scan_pattern__struct.h"
// already included above
// #include "blickfeld_driver/srv/detail/set_scan_pattern__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "rosidl_runtime_c/string.h"  // message
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // message

// forward declare type support functions


using _SetScanPattern_Response__ros_msg_type = blickfeld_driver__srv__SetScanPattern_Response;

static bool _SetScanPattern_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetScanPattern_Response__ros_msg_type * ros_message = static_cast<const _SetScanPattern_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  // Field name: message
  {
    const rosidl_runtime_c__String * str = &ros_message->message;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _SetScanPattern_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetScanPattern_Response__ros_msg_type * ros_message = static_cast<_SetScanPattern_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  // Field name: message
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->message.data) {
      rosidl_runtime_c__String__init(&ros_message->message);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->message,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'message'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_blickfeld_driver
size_t get_serialized_size_blickfeld_driver__srv__SetScanPattern_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetScanPattern_Response__ros_msg_type * ros_message = static_cast<const _SetScanPattern_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->message.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _SetScanPattern_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_blickfeld_driver__srv__SetScanPattern_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_blickfeld_driver
size_t max_serialized_size_blickfeld_driver__srv__SetScanPattern_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: message
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _SetScanPattern_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_blickfeld_driver__srv__SetScanPattern_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SetScanPattern_Response = {
  "blickfeld_driver::srv",
  "SetScanPattern_Response",
  _SetScanPattern_Response__cdr_serialize,
  _SetScanPattern_Response__cdr_deserialize,
  _SetScanPattern_Response__get_serialized_size,
  _SetScanPattern_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetScanPattern_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetScanPattern_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, blickfeld_driver, srv, SetScanPattern_Response)() {
  return &_SetScanPattern_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "blickfeld_driver/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "blickfeld_driver/srv/set_scan_pattern.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SetScanPattern__callbacks = {
  "blickfeld_driver::srv",
  "SetScanPattern",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, blickfeld_driver, srv, SetScanPattern_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, blickfeld_driver, srv, SetScanPattern_Response)(),
};

static rosidl_service_type_support_t SetScanPattern__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SetScanPattern__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, blickfeld_driver, srv, SetScanPattern)() {
  return &SetScanPattern__handle;
}

#if defined(__cplusplus)
}
#endif
