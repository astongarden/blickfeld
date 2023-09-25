// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from blickfeld_driver:srv/ImuStaticTransformation.idl
// generated code does not contain a copyright notice

#ifndef BLICKFELD_DRIVER__SRV__DETAIL__IMU_STATIC_TRANSFORMATION__STRUCT_HPP_
#define BLICKFELD_DRIVER__SRV__DETAIL__IMU_STATIC_TRANSFORMATION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__blickfeld_driver__srv__ImuStaticTransformation_Request __attribute__((deprecated))
#else
# define DEPRECATED__blickfeld_driver__srv__ImuStaticTransformation_Request __declspec(deprecated)
#endif

namespace blickfeld_driver
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ImuStaticTransformation_Request_
{
  using Type = ImuStaticTransformation_Request_<ContainerAllocator>;

  explicit ImuStaticTransformation_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit ImuStaticTransformation_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    blickfeld_driver::srv::ImuStaticTransformation_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const blickfeld_driver::srv::ImuStaticTransformation_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<blickfeld_driver::srv::ImuStaticTransformation_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<blickfeld_driver::srv::ImuStaticTransformation_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      blickfeld_driver::srv::ImuStaticTransformation_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<blickfeld_driver::srv::ImuStaticTransformation_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      blickfeld_driver::srv::ImuStaticTransformation_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<blickfeld_driver::srv::ImuStaticTransformation_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<blickfeld_driver::srv::ImuStaticTransformation_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<blickfeld_driver::srv::ImuStaticTransformation_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__blickfeld_driver__srv__ImuStaticTransformation_Request
    std::shared_ptr<blickfeld_driver::srv::ImuStaticTransformation_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__blickfeld_driver__srv__ImuStaticTransformation_Request
    std::shared_ptr<blickfeld_driver::srv::ImuStaticTransformation_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ImuStaticTransformation_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const ImuStaticTransformation_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ImuStaticTransformation_Request_

// alias to use template instance with default allocator
using ImuStaticTransformation_Request =
  blickfeld_driver::srv::ImuStaticTransformation_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace blickfeld_driver


// Include directives for member types
// Member 'imu_transformation'
#include "geometry_msgs/msg/detail/transform_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__blickfeld_driver__srv__ImuStaticTransformation_Response __attribute__((deprecated))
#else
# define DEPRECATED__blickfeld_driver__srv__ImuStaticTransformation_Response __declspec(deprecated)
#endif

namespace blickfeld_driver
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ImuStaticTransformation_Response_
{
  using Type = ImuStaticTransformation_Response_<ContainerAllocator>;

  explicit ImuStaticTransformation_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : imu_transformation(_init)
  {
    (void)_init;
  }

  explicit ImuStaticTransformation_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : imu_transformation(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _imu_transformation_type =
    geometry_msgs::msg::TransformStamped_<ContainerAllocator>;
  _imu_transformation_type imu_transformation;

  // setters for named parameter idiom
  Type & set__imu_transformation(
    const geometry_msgs::msg::TransformStamped_<ContainerAllocator> & _arg)
  {
    this->imu_transformation = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    blickfeld_driver::srv::ImuStaticTransformation_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const blickfeld_driver::srv::ImuStaticTransformation_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<blickfeld_driver::srv::ImuStaticTransformation_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<blickfeld_driver::srv::ImuStaticTransformation_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      blickfeld_driver::srv::ImuStaticTransformation_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<blickfeld_driver::srv::ImuStaticTransformation_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      blickfeld_driver::srv::ImuStaticTransformation_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<blickfeld_driver::srv::ImuStaticTransformation_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<blickfeld_driver::srv::ImuStaticTransformation_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<blickfeld_driver::srv::ImuStaticTransformation_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__blickfeld_driver__srv__ImuStaticTransformation_Response
    std::shared_ptr<blickfeld_driver::srv::ImuStaticTransformation_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__blickfeld_driver__srv__ImuStaticTransformation_Response
    std::shared_ptr<blickfeld_driver::srv::ImuStaticTransformation_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ImuStaticTransformation_Response_ & other) const
  {
    if (this->imu_transformation != other.imu_transformation) {
      return false;
    }
    return true;
  }
  bool operator!=(const ImuStaticTransformation_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ImuStaticTransformation_Response_

// alias to use template instance with default allocator
using ImuStaticTransformation_Response =
  blickfeld_driver::srv::ImuStaticTransformation_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace blickfeld_driver

namespace blickfeld_driver
{

namespace srv
{

struct ImuStaticTransformation
{
  using Request = blickfeld_driver::srv::ImuStaticTransformation_Request;
  using Response = blickfeld_driver::srv::ImuStaticTransformation_Response;
};

}  // namespace srv

}  // namespace blickfeld_driver

#endif  // BLICKFELD_DRIVER__SRV__DETAIL__IMU_STATIC_TRANSFORMATION__STRUCT_HPP_
