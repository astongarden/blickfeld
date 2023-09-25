// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from blickfeld_driver:srv/ImuStaticTransformation.idl
// generated code does not contain a copyright notice

#ifndef BLICKFELD_DRIVER__SRV__DETAIL__IMU_STATIC_TRANSFORMATION__TRAITS_HPP_
#define BLICKFELD_DRIVER__SRV__DETAIL__IMU_STATIC_TRANSFORMATION__TRAITS_HPP_

#include "blickfeld_driver/srv/detail/imu_static_transformation__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<blickfeld_driver::srv::ImuStaticTransformation_Request>()
{
  return "blickfeld_driver::srv::ImuStaticTransformation_Request";
}

template<>
inline const char * name<blickfeld_driver::srv::ImuStaticTransformation_Request>()
{
  return "blickfeld_driver/srv/ImuStaticTransformation_Request";
}

template<>
struct has_fixed_size<blickfeld_driver::srv::ImuStaticTransformation_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<blickfeld_driver::srv::ImuStaticTransformation_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<blickfeld_driver::srv::ImuStaticTransformation_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'imu_transformation'
#include "geometry_msgs/msg/detail/transform_stamped__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<blickfeld_driver::srv::ImuStaticTransformation_Response>()
{
  return "blickfeld_driver::srv::ImuStaticTransformation_Response";
}

template<>
inline const char * name<blickfeld_driver::srv::ImuStaticTransformation_Response>()
{
  return "blickfeld_driver/srv/ImuStaticTransformation_Response";
}

template<>
struct has_fixed_size<blickfeld_driver::srv::ImuStaticTransformation_Response>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::TransformStamped>::value> {};

template<>
struct has_bounded_size<blickfeld_driver::srv::ImuStaticTransformation_Response>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::TransformStamped>::value> {};

template<>
struct is_message<blickfeld_driver::srv::ImuStaticTransformation_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<blickfeld_driver::srv::ImuStaticTransformation>()
{
  return "blickfeld_driver::srv::ImuStaticTransformation";
}

template<>
inline const char * name<blickfeld_driver::srv::ImuStaticTransformation>()
{
  return "blickfeld_driver/srv/ImuStaticTransformation";
}

template<>
struct has_fixed_size<blickfeld_driver::srv::ImuStaticTransformation>
  : std::integral_constant<
    bool,
    has_fixed_size<blickfeld_driver::srv::ImuStaticTransformation_Request>::value &&
    has_fixed_size<blickfeld_driver::srv::ImuStaticTransformation_Response>::value
  >
{
};

template<>
struct has_bounded_size<blickfeld_driver::srv::ImuStaticTransformation>
  : std::integral_constant<
    bool,
    has_bounded_size<blickfeld_driver::srv::ImuStaticTransformation_Request>::value &&
    has_bounded_size<blickfeld_driver::srv::ImuStaticTransformation_Response>::value
  >
{
};

template<>
struct is_service<blickfeld_driver::srv::ImuStaticTransformation>
  : std::true_type
{
};

template<>
struct is_service_request<blickfeld_driver::srv::ImuStaticTransformation_Request>
  : std::true_type
{
};

template<>
struct is_service_response<blickfeld_driver::srv::ImuStaticTransformation_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // BLICKFELD_DRIVER__SRV__DETAIL__IMU_STATIC_TRANSFORMATION__TRAITS_HPP_
