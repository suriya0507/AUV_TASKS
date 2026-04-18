// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from submarine_interfaces:msg/SubmarineState.idl
// generated code does not contain a copyright notice

#ifndef SUBMARINE_INTERFACES__MSG__DETAIL__SUBMARINE_STATE__TRAITS_HPP_
#define SUBMARINE_INTERFACES__MSG__DETAIL__SUBMARINE_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "submarine_interfaces/msg/detail/submarine_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace submarine_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const SubmarineState & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: facing_direction
  {
    out << "facing_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.facing_direction, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SubmarineState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: facing_direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "facing_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.facing_direction, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SubmarineState & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace submarine_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use submarine_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const submarine_interfaces::msg::SubmarineState & msg,
  std::ostream & out, size_t indentation = 0)
{
  submarine_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use submarine_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const submarine_interfaces::msg::SubmarineState & msg)
{
  return submarine_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<submarine_interfaces::msg::SubmarineState>()
{
  return "submarine_interfaces::msg::SubmarineState";
}

template<>
inline const char * name<submarine_interfaces::msg::SubmarineState>()
{
  return "submarine_interfaces/msg/SubmarineState";
}

template<>
struct has_fixed_size<submarine_interfaces::msg::SubmarineState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<submarine_interfaces::msg::SubmarineState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<submarine_interfaces::msg::SubmarineState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SUBMARINE_INTERFACES__MSG__DETAIL__SUBMARINE_STATE__TRAITS_HPP_
