// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from blickfeld_driver:srv/SetScanPattern.idl
// generated code does not contain a copyright notice

#ifndef BLICKFELD_DRIVER__SRV__DETAIL__SET_SCAN_PATTERN__STRUCT_HPP_
#define BLICKFELD_DRIVER__SRV__DETAIL__SET_SCAN_PATTERN__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__blickfeld_driver__srv__SetScanPattern_Request __attribute__((deprecated))
#else
# define DEPRECATED__blickfeld_driver__srv__SetScanPattern_Request __declspec(deprecated)
#endif

namespace blickfeld_driver
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetScanPattern_Request_
{
  using Type = SetScanPattern_Request_<ContainerAllocator>;

  explicit SetScanPattern_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fov_horizontal = 0.0f;
      this->fov_vertical = 0.0f;
      this->angle_spacing = 0.0f;
      this->scanlines_up = 0;
      this->scanlines_down = 0;
      this->frame_mode = "";
      this->pulse_type = "";
    }
  }

  explicit SetScanPattern_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : frame_mode(_alloc),
    pulse_type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fov_horizontal = 0.0f;
      this->fov_vertical = 0.0f;
      this->angle_spacing = 0.0f;
      this->scanlines_up = 0;
      this->scanlines_down = 0;
      this->frame_mode = "";
      this->pulse_type = "";
    }
  }

  // field types and members
  using _fov_horizontal_type =
    float;
  _fov_horizontal_type fov_horizontal;
  using _fov_vertical_type =
    float;
  _fov_vertical_type fov_vertical;
  using _angle_spacing_type =
    float;
  _angle_spacing_type angle_spacing;
  using _scanlines_up_type =
    uint16_t;
  _scanlines_up_type scanlines_up;
  using _scanlines_down_type =
    uint16_t;
  _scanlines_down_type scanlines_down;
  using _frame_mode_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _frame_mode_type frame_mode;
  using _pulse_type_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _pulse_type_type pulse_type;

  // setters for named parameter idiom
  Type & set__fov_horizontal(
    const float & _arg)
  {
    this->fov_horizontal = _arg;
    return *this;
  }
  Type & set__fov_vertical(
    const float & _arg)
  {
    this->fov_vertical = _arg;
    return *this;
  }
  Type & set__angle_spacing(
    const float & _arg)
  {
    this->angle_spacing = _arg;
    return *this;
  }
  Type & set__scanlines_up(
    const uint16_t & _arg)
  {
    this->scanlines_up = _arg;
    return *this;
  }
  Type & set__scanlines_down(
    const uint16_t & _arg)
  {
    this->scanlines_down = _arg;
    return *this;
  }
  Type & set__frame_mode(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->frame_mode = _arg;
    return *this;
  }
  Type & set__pulse_type(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->pulse_type = _arg;
    return *this;
  }

  // constant declarations
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> COMBINE_UP_DOWN;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> ONLY_UP;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> ONLY_DOWN;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> SEPARATE;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> EQUI_HORIZONTAL_ANGLE;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> INTERLEAVE;

  // pointer types
  using RawPtr =
    blickfeld_driver::srv::SetScanPattern_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const blickfeld_driver::srv::SetScanPattern_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<blickfeld_driver::srv::SetScanPattern_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<blickfeld_driver::srv::SetScanPattern_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      blickfeld_driver::srv::SetScanPattern_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<blickfeld_driver::srv::SetScanPattern_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      blickfeld_driver::srv::SetScanPattern_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<blickfeld_driver::srv::SetScanPattern_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<blickfeld_driver::srv::SetScanPattern_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<blickfeld_driver::srv::SetScanPattern_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__blickfeld_driver__srv__SetScanPattern_Request
    std::shared_ptr<blickfeld_driver::srv::SetScanPattern_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__blickfeld_driver__srv__SetScanPattern_Request
    std::shared_ptr<blickfeld_driver::srv::SetScanPattern_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetScanPattern_Request_ & other) const
  {
    if (this->fov_horizontal != other.fov_horizontal) {
      return false;
    }
    if (this->fov_vertical != other.fov_vertical) {
      return false;
    }
    if (this->angle_spacing != other.angle_spacing) {
      return false;
    }
    if (this->scanlines_up != other.scanlines_up) {
      return false;
    }
    if (this->scanlines_down != other.scanlines_down) {
      return false;
    }
    if (this->frame_mode != other.frame_mode) {
      return false;
    }
    if (this->pulse_type != other.pulse_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetScanPattern_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetScanPattern_Request_

// alias to use template instance with default allocator
using SetScanPattern_Request =
  blickfeld_driver::srv::SetScanPattern_Request_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>
SetScanPattern_Request_<ContainerAllocator>::COMBINE_UP_DOWN = "COMBINE_UP_DOWN";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>
SetScanPattern_Request_<ContainerAllocator>::ONLY_UP = "ONLY_UP";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>
SetScanPattern_Request_<ContainerAllocator>::ONLY_DOWN = "ONLY_DOWN";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>
SetScanPattern_Request_<ContainerAllocator>::SEPARATE = "SEPARATE";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>
SetScanPattern_Request_<ContainerAllocator>::EQUI_HORIZONTAL_ANGLE = "EQUI_HORIZONTAL_ANGLE";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>
SetScanPattern_Request_<ContainerAllocator>::INTERLEAVE = "INTERLEAVE";

}  // namespace srv

}  // namespace blickfeld_driver


#ifndef _WIN32
# define DEPRECATED__blickfeld_driver__srv__SetScanPattern_Response __attribute__((deprecated))
#else
# define DEPRECATED__blickfeld_driver__srv__SetScanPattern_Response __declspec(deprecated)
#endif

namespace blickfeld_driver
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetScanPattern_Response_
{
  using Type = SetScanPattern_Response_<ContainerAllocator>;

  explicit SetScanPattern_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit SetScanPattern_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    blickfeld_driver::srv::SetScanPattern_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const blickfeld_driver::srv::SetScanPattern_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<blickfeld_driver::srv::SetScanPattern_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<blickfeld_driver::srv::SetScanPattern_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      blickfeld_driver::srv::SetScanPattern_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<blickfeld_driver::srv::SetScanPattern_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      blickfeld_driver::srv::SetScanPattern_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<blickfeld_driver::srv::SetScanPattern_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<blickfeld_driver::srv::SetScanPattern_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<blickfeld_driver::srv::SetScanPattern_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__blickfeld_driver__srv__SetScanPattern_Response
    std::shared_ptr<blickfeld_driver::srv::SetScanPattern_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__blickfeld_driver__srv__SetScanPattern_Response
    std::shared_ptr<blickfeld_driver::srv::SetScanPattern_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetScanPattern_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetScanPattern_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetScanPattern_Response_

// alias to use template instance with default allocator
using SetScanPattern_Response =
  blickfeld_driver::srv::SetScanPattern_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace blickfeld_driver

namespace blickfeld_driver
{

namespace srv
{

struct SetScanPattern
{
  using Request = blickfeld_driver::srv::SetScanPattern_Request;
  using Response = blickfeld_driver::srv::SetScanPattern_Response;
};

}  // namespace srv

}  // namespace blickfeld_driver

#endif  // BLICKFELD_DRIVER__SRV__DETAIL__SET_SCAN_PATTERN__STRUCT_HPP_
