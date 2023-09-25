// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from blickfeld_driver:srv/ImuStaticTransformation.idl
// generated code does not contain a copyright notice

#ifndef BLICKFELD_DRIVER__SRV__DETAIL__IMU_STATIC_TRANSFORMATION__BUILDER_HPP_
#define BLICKFELD_DRIVER__SRV__DETAIL__IMU_STATIC_TRANSFORMATION__BUILDER_HPP_

#include "blickfeld_driver/srv/detail/imu_static_transformation__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace blickfeld_driver
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::blickfeld_driver::srv::ImuStaticTransformation_Request>()
{
  return ::blickfeld_driver::srv::ImuStaticTransformation_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace blickfeld_driver


namespace blickfeld_driver
{

namespace srv
{

namespace builder
{

class Init_ImuStaticTransformation_Response_imu_transformation
{
public:
  Init_ImuStaticTransformation_Response_imu_transformation()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::blickfeld_driver::srv::ImuStaticTransformation_Response imu_transformation(::blickfeld_driver::srv::ImuStaticTransformation_Response::_imu_transformation_type arg)
  {
    msg_.imu_transformation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::blickfeld_driver::srv::ImuStaticTransformation_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::blickfeld_driver::srv::ImuStaticTransformation_Response>()
{
  return blickfeld_driver::srv::builder::Init_ImuStaticTransformation_Response_imu_transformation();
}

}  // namespace blickfeld_driver

#endif  // BLICKFELD_DRIVER__SRV__DETAIL__IMU_STATIC_TRANSFORMATION__BUILDER_HPP_
