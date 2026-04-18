// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from submarine_interfaces:msg/SubmarineState.idl
// generated code does not contain a copyright notice

#ifndef SUBMARINE_INTERFACES__MSG__DETAIL__SUBMARINE_STATE__BUILDER_HPP_
#define SUBMARINE_INTERFACES__MSG__DETAIL__SUBMARINE_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "submarine_interfaces/msg/detail/submarine_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace submarine_interfaces
{

namespace msg
{

namespace builder
{

class Init_SubmarineState_facing_direction
{
public:
  explicit Init_SubmarineState_facing_direction(::submarine_interfaces::msg::SubmarineState & msg)
  : msg_(msg)
  {}
  ::submarine_interfaces::msg::SubmarineState facing_direction(::submarine_interfaces::msg::SubmarineState::_facing_direction_type arg)
  {
    msg_.facing_direction = std::move(arg);
    return std::move(msg_);
  }

private:
  ::submarine_interfaces::msg::SubmarineState msg_;
};

class Init_SubmarineState_y
{
public:
  explicit Init_SubmarineState_y(::submarine_interfaces::msg::SubmarineState & msg)
  : msg_(msg)
  {}
  Init_SubmarineState_facing_direction y(::submarine_interfaces::msg::SubmarineState::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_SubmarineState_facing_direction(msg_);
  }

private:
  ::submarine_interfaces::msg::SubmarineState msg_;
};

class Init_SubmarineState_x
{
public:
  Init_SubmarineState_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SubmarineState_y x(::submarine_interfaces::msg::SubmarineState::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_SubmarineState_y(msg_);
  }

private:
  ::submarine_interfaces::msg::SubmarineState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::submarine_interfaces::msg::SubmarineState>()
{
  return submarine_interfaces::msg::builder::Init_SubmarineState_x();
}

}  // namespace submarine_interfaces

#endif  // SUBMARINE_INTERFACES__MSG__DETAIL__SUBMARINE_STATE__BUILDER_HPP_
