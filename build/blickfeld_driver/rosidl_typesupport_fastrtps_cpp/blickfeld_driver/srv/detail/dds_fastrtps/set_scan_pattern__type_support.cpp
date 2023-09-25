// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from blickfeld_driver:srv/SetScanPattern.idl
// generated code does not contain a copyright notice
#include "blickfeld_driver/srv/detail/set_scan_pattern__rosidl_typesupport_fastrtps_cpp.hpp"
#include "blickfeld_driver/srv/detail/set_scan_pattern__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace blickfeld_driver
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_blickfeld_driver
cdr_serialize(
  const blickfeld_driver::srv::SetScanPattern_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: fov_horizontal
  cdr << ros_message.fov_horizontal;
  // Member: fov_vertical
  cdr << ros_message.fov_vertical;
  // Member: angle_spacing
  cdr << ros_message.angle_spacing;
  // Member: scanlines_up
  cdr << ros_message.scanlines_up;
  // Member: scanlines_down
  cdr << ros_message.scanlines_down;
  // Member: frame_mode
  cdr << ros_message.frame_mode;
  // Member: pulse_type
  cdr << ros_message.pulse_type;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_blickfeld_driver
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  blickfeld_driver::srv::SetScanPattern_Request & ros_message)
{
  // Member: fov_horizontal
  cdr >> ros_message.fov_horizontal;

  // Member: fov_vertical
  cdr >> ros_message.fov_vertical;

  // Member: angle_spacing
  cdr >> ros_message.angle_spacing;

  // Member: scanlines_up
  cdr >> ros_message.scanlines_up;

  // Member: scanlines_down
  cdr >> ros_message.scanlines_down;

  // Member: frame_mode
  cdr >> ros_message.frame_mode;

  // Member: pulse_type
  cdr >> ros_message.pulse_type;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_blickfeld_driver
get_serialized_size(
  const blickfeld_driver::srv::SetScanPattern_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: fov_horizontal
  {
    size_t item_size = sizeof(ros_message.fov_horizontal);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fov_vertical
  {
    size_t item_size = sizeof(ros_message.fov_vertical);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: angle_spacing
  {
    size_t item_size = sizeof(ros_message.angle_spacing);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: scanlines_up
  {
    size_t item_size = sizeof(ros_message.scanlines_up);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: scanlines_down
  {
    size_t item_size = sizeof(ros_message.scanlines_down);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: frame_mode
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.frame_mode.size() + 1);
  // Member: pulse_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.pulse_type.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_blickfeld_driver
max_serialized_size_SetScanPattern_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: fov_horizontal
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: fov_vertical
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: angle_spacing
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: scanlines_up
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: scanlines_down
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: frame_mode
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: pulse_type
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

static bool _SetScanPattern_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const blickfeld_driver::srv::SetScanPattern_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SetScanPattern_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<blickfeld_driver::srv::SetScanPattern_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SetScanPattern_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const blickfeld_driver::srv::SetScanPattern_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SetScanPattern_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_SetScanPattern_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _SetScanPattern_Request__callbacks = {
  "blickfeld_driver::srv",
  "SetScanPattern_Request",
  _SetScanPattern_Request__cdr_serialize,
  _SetScanPattern_Request__cdr_deserialize,
  _SetScanPattern_Request__get_serialized_size,
  _SetScanPattern_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetScanPattern_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SetScanPattern_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace blickfeld_driver

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_blickfeld_driver
const rosidl_message_type_support_t *
get_message_type_support_handle<blickfeld_driver::srv::SetScanPattern_Request>()
{
  return &blickfeld_driver::srv::typesupport_fastrtps_cpp::_SetScanPattern_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, blickfeld_driver, srv, SetScanPattern_Request)() {
  return &blickfeld_driver::srv::typesupport_fastrtps_cpp::_SetScanPattern_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace blickfeld_driver
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_blickfeld_driver
cdr_serialize(
  const blickfeld_driver::srv::SetScanPattern_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: success
  cdr << (ros_message.success ? true : false);
  // Member: message
  cdr << ros_message.message;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_blickfeld_driver
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  blickfeld_driver::srv::SetScanPattern_Response & ros_message)
{
  // Member: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.success = tmp ? true : false;
  }

  // Member: message
  cdr >> ros_message.message;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_blickfeld_driver
get_serialized_size(
  const blickfeld_driver::srv::SetScanPattern_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: success
  {
    size_t item_size = sizeof(ros_message.success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.message.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_blickfeld_driver
max_serialized_size_SetScanPattern_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: message
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

static bool _SetScanPattern_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const blickfeld_driver::srv::SetScanPattern_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SetScanPattern_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<blickfeld_driver::srv::SetScanPattern_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SetScanPattern_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const blickfeld_driver::srv::SetScanPattern_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SetScanPattern_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_SetScanPattern_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _SetScanPattern_Response__callbacks = {
  "blickfeld_driver::srv",
  "SetScanPattern_Response",
  _SetScanPattern_Response__cdr_serialize,
  _SetScanPattern_Response__cdr_deserialize,
  _SetScanPattern_Response__get_serialized_size,
  _SetScanPattern_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetScanPattern_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SetScanPattern_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace blickfeld_driver

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_blickfeld_driver
const rosidl_message_type_support_t *
get_message_type_support_handle<blickfeld_driver::srv::SetScanPattern_Response>()
{
  return &blickfeld_driver::srv::typesupport_fastrtps_cpp::_SetScanPattern_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, blickfeld_driver, srv, SetScanPattern_Response)() {
  return &blickfeld_driver::srv::typesupport_fastrtps_cpp::_SetScanPattern_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace blickfeld_driver
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _SetScanPattern__callbacks = {
  "blickfeld_driver::srv",
  "SetScanPattern",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, blickfeld_driver, srv, SetScanPattern_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, blickfeld_driver, srv, SetScanPattern_Response)(),
};

static rosidl_service_type_support_t _SetScanPattern__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SetScanPattern__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace blickfeld_driver

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_blickfeld_driver
const rosidl_service_type_support_t *
get_service_type_support_handle<blickfeld_driver::srv::SetScanPattern>()
{
  return &blickfeld_driver::srv::typesupport_fastrtps_cpp::_SetScanPattern__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, blickfeld_driver, srv, SetScanPattern)() {
  return &blickfeld_driver::srv::typesupport_fastrtps_cpp::_SetScanPattern__handle;
}

#ifdef __cplusplus
}
#endif
