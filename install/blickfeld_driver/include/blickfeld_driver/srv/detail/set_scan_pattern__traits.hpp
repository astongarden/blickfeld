// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from blickfeld_driver:srv/SetScanPattern.idl
// generated code does not contain a copyright notice

#ifndef BLICKFELD_DRIVER__SRV__DETAIL__SET_SCAN_PATTERN__TRAITS_HPP_
#define BLICKFELD_DRIVER__SRV__DETAIL__SET_SCAN_PATTERN__TRAITS_HPP_

#include "blickfeld_driver/srv/detail/set_scan_pattern__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<blickfeld_driver::srv::SetScanPattern_Request>()
{
  return "blickfeld_driver::srv::SetScanPattern_Request";
}

template<>
inline const char * name<blickfeld_driver::srv::SetScanPattern_Request>()
{
  return "blickfeld_driver/srv/SetScanPattern_Request";
}

template<>
struct has_fixed_size<blickfeld_driver::srv::SetScanPattern_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<blickfeld_driver::srv::SetScanPattern_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<blickfeld_driver::srv::SetScanPattern_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<blickfeld_driver::srv::SetScanPattern_Response>()
{
  return "blickfeld_driver::srv::SetScanPattern_Response";
}

template<>
inline const char * name<blickfeld_driver::srv::SetScanPattern_Response>()
{
  return "blickfeld_driver/srv/SetScanPattern_Response";
}

template<>
struct has_fixed_size<blickfeld_driver::srv::SetScanPattern_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<blickfeld_driver::srv::SetScanPattern_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<blickfeld_driver::srv::SetScanPattern_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<blickfeld_driver::srv::SetScanPattern>()
{
  return "blickfeld_driver::srv::SetScanPattern";
}

template<>
inline const char * name<blickfeld_driver::srv::SetScanPattern>()
{
  return "blickfeld_driver/srv/SetScanPattern";
}

template<>
struct has_fixed_size<blickfeld_driver::srv::SetScanPattern>
  : std::integral_constant<
    bool,
    has_fixed_size<blickfeld_driver::srv::SetScanPattern_Request>::value &&
    has_fixed_size<blickfeld_driver::srv::SetScanPattern_Response>::value
  >
{
};

template<>
struct has_bounded_size<blickfeld_driver::srv::SetScanPattern>
  : std::integral_constant<
    bool,
    has_bounded_size<blickfeld_driver::srv::SetScanPattern_Request>::value &&
    has_bounded_size<blickfeld_driver::srv::SetScanPattern_Response>::value
  >
{
};

template<>
struct is_service<blickfeld_driver::srv::SetScanPattern>
  : std::true_type
{
};

template<>
struct is_service_request<blickfeld_driver::srv::SetScanPattern_Request>
  : std::true_type
{
};

template<>
struct is_service_response<blickfeld_driver::srv::SetScanPattern_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // BLICKFELD_DRIVER__SRV__DETAIL__SET_SCAN_PATTERN__TRAITS_HPP_
