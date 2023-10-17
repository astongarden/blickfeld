// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from blickfeld_driver:srv/SetScanPattern.idl
// generated code does not contain a copyright notice

#ifndef BLICKFELD_DRIVER__SRV__DETAIL__SET_SCAN_PATTERN__BUILDER_HPP_
#define BLICKFELD_DRIVER__SRV__DETAIL__SET_SCAN_PATTERN__BUILDER_HPP_

#include "blickfeld_driver/srv/detail/set_scan_pattern__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace blickfeld_driver
{

namespace srv
{

namespace builder
{

class Init_SetScanPattern_Request_pulse_type
{
public:
  explicit Init_SetScanPattern_Request_pulse_type(::blickfeld_driver::srv::SetScanPattern_Request & msg)
  : msg_(msg)
  {}
  ::blickfeld_driver::srv::SetScanPattern_Request pulse_type(::blickfeld_driver::srv::SetScanPattern_Request::_pulse_type_type arg)
  {
    msg_.pulse_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::blickfeld_driver::srv::SetScanPattern_Request msg_;
};

class Init_SetScanPattern_Request_frame_mode
{
public:
  explicit Init_SetScanPattern_Request_frame_mode(::blickfeld_driver::srv::SetScanPattern_Request & msg)
  : msg_(msg)
  {}
  Init_SetScanPattern_Request_pulse_type frame_mode(::blickfeld_driver::srv::SetScanPattern_Request::_frame_mode_type arg)
  {
    msg_.frame_mode = std::move(arg);
    return Init_SetScanPattern_Request_pulse_type(msg_);
  }

private:
  ::blickfeld_driver::srv::SetScanPattern_Request msg_;
};

class Init_SetScanPattern_Request_scanlines_down
{
public:
  explicit Init_SetScanPattern_Request_scanlines_down(::blickfeld_driver::srv::SetScanPattern_Request & msg)
  : msg_(msg)
  {}
  Init_SetScanPattern_Request_frame_mode scanlines_down(::blickfeld_driver::srv::SetScanPattern_Request::_scanlines_down_type arg)
  {
    msg_.scanlines_down = std::move(arg);
    return Init_SetScanPattern_Request_frame_mode(msg_);
  }

private:
  ::blickfeld_driver::srv::SetScanPattern_Request msg_;
};

class Init_SetScanPattern_Request_scanlines_up
{
public:
  explicit Init_SetScanPattern_Request_scanlines_up(::blickfeld_driver::srv::SetScanPattern_Request & msg)
  : msg_(msg)
  {}
  Init_SetScanPattern_Request_scanlines_down scanlines_up(::blickfeld_driver::srv::SetScanPattern_Request::_scanlines_up_type arg)
  {
    msg_.scanlines_up = std::move(arg);
    return Init_SetScanPattern_Request_scanlines_down(msg_);
  }

private:
  ::blickfeld_driver::srv::SetScanPattern_Request msg_;
};

class Init_SetScanPattern_Request_angle_spacing
{
public:
  explicit Init_SetScanPattern_Request_angle_spacing(::blickfeld_driver::srv::SetScanPattern_Request & msg)
  : msg_(msg)
  {}
  Init_SetScanPattern_Request_scanlines_up angle_spacing(::blickfeld_driver::srv::SetScanPattern_Request::_angle_spacing_type arg)
  {
    msg_.angle_spacing = std::move(arg);
    return Init_SetScanPattern_Request_scanlines_up(msg_);
  }

private:
  ::blickfeld_driver::srv::SetScanPattern_Request msg_;
};

class Init_SetScanPattern_Request_fov_vertical
{
public:
  explicit Init_SetScanPattern_Request_fov_vertical(::blickfeld_driver::srv::SetScanPattern_Request & msg)
  : msg_(msg)
  {}
  Init_SetScanPattern_Request_angle_spacing fov_vertical(::blickfeld_driver::srv::SetScanPattern_Request::_fov_vertical_type arg)
  {
    msg_.fov_vertical = std::move(arg);
    return Init_SetScanPattern_Request_angle_spacing(msg_);
  }

private:
  ::blickfeld_driver::srv::SetScanPattern_Request msg_;
};

class Init_SetScanPattern_Request_fov_horizontal
{
public:
  Init_SetScanPattern_Request_fov_horizontal()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetScanPattern_Request_fov_vertical fov_horizontal(::blickfeld_driver::srv::SetScanPattern_Request::_fov_horizontal_type arg)
  {
    msg_.fov_horizontal = std::move(arg);
    return Init_SetScanPattern_Request_fov_vertical(msg_);
  }

private:
  ::blickfeld_driver::srv::SetScanPattern_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::blickfeld_driver::srv::SetScanPattern_Request>()
{
  return blickfeld_driver::srv::builder::Init_SetScanPattern_Request_fov_horizontal();
}

}  // namespace blickfeld_driver


namespace blickfeld_driver
{

namespace srv
{

namespace builder
{

class Init_SetScanPattern_Response_message
{
public:
  explicit Init_SetScanPattern_Response_message(::blickfeld_driver::srv::SetScanPattern_Response & msg)
  : msg_(msg)
  {}
  ::blickfeld_driver::srv::SetScanPattern_Response message(::blickfeld_driver::srv::SetScanPattern_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::blickfeld_driver::srv::SetScanPattern_Response msg_;
};

class Init_SetScanPattern_Response_success
{
public:
  Init_SetScanPattern_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetScanPattern_Response_message success(::blickfeld_driver::srv::SetScanPattern_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetScanPattern_Response_message(msg_);
  }

private:
  ::blickfeld_driver::srv::SetScanPattern_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::blickfeld_driver::srv::SetScanPattern_Response>()
{
  return blickfeld_driver::srv::builder::Init_SetScanPattern_Response_success();
}

}  // namespace blickfeld_driver

#endif  // BLICKFELD_DRIVER__SRV__DETAIL__SET_SCAN_PATTERN__BUILDER_HPP_
