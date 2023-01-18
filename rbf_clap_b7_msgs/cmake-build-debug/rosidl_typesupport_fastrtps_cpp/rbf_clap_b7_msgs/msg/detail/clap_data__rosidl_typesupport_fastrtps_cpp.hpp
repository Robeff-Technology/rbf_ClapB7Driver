// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from rbf_clap_b7_msgs:msg/ClapData.idl
// generated code does not contain a copyright notice

#ifndef RBF_CLAP_B7_MSGS__MSG__DETAIL__CLAP_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define RBF_CLAP_B7_MSGS__MSG__DETAIL__CLAP_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "rbf_clap_b7_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "rbf_clap_b7_msgs/msg/detail/clap_data__struct.hpp"

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

#include "fastcdr/Cdr.h"

namespace rbf_clap_b7_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rbf_clap_b7_msgs
cdr_serialize(
  const rbf_clap_b7_msgs::msg::ClapData & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rbf_clap_b7_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rbf_clap_b7_msgs::msg::ClapData & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rbf_clap_b7_msgs
get_serialized_size(
  const rbf_clap_b7_msgs::msg::ClapData & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rbf_clap_b7_msgs
max_serialized_size_ClapData(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace rbf_clap_b7_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rbf_clap_b7_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rbf_clap_b7_msgs, msg, ClapData)();

#ifdef __cplusplus
}
#endif

#endif  // RBF_CLAP_B7_MSGS__MSG__DETAIL__CLAP_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
