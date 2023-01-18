// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rbf_clap_b7_msgs:msg/ClapData.idl
// generated code does not contain a copyright notice

#ifndef RBF_CLAP_B7_MSGS__MSG__DETAIL__CLAP_DATA__TRAITS_HPP_
#define RBF_CLAP_B7_MSGS__MSG__DETAIL__CLAP_DATA__TRAITS_HPP_

#include "rbf_clap_b7_msgs/msg/detail/clap_data__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const rbf_clap_b7_msgs::msg::ClapData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ins_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ins_status: ";
    value_to_yaml(msg.ins_status, out);
    out << "\n";
  }

  // member: pos_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_type: ";
    value_to_yaml(msg.pos_type, out);
    out << "\n";
  }

  // member: latitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latitude: ";
    value_to_yaml(msg.latitude, out);
    out << "\n";
  }

  // member: longitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitude: ";
    value_to_yaml(msg.longitude, out);
    out << "\n";
  }

  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height: ";
    value_to_yaml(msg.height, out);
    out << "\n";
  }

  // member: undulation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "undulation: ";
    value_to_yaml(msg.undulation, out);
    out << "\n";
  }

  // member: north_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "north_velocity: ";
    value_to_yaml(msg.north_velocity, out);
    out << "\n";
  }

  // member: east_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "east_velocity: ";
    value_to_yaml(msg.east_velocity, out);
    out << "\n";
  }

  // member: up_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "up_velocity: ";
    value_to_yaml(msg.up_velocity, out);
    out << "\n";
  }

  // member: roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll: ";
    value_to_yaml(msg.roll, out);
    out << "\n";
  }

  // member: pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch: ";
    value_to_yaml(msg.pitch, out);
    out << "\n";
  }

  // member: azimuth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "azimuth: ";
    value_to_yaml(msg.azimuth, out);
    out << "\n";
  }

  // member: std_dev_latitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "std_dev_latitude: ";
    value_to_yaml(msg.std_dev_latitude, out);
    out << "\n";
  }

  // member: std_dev_longitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "std_dev_longitude: ";
    value_to_yaml(msg.std_dev_longitude, out);
    out << "\n";
  }

  // member: std_dev_height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "std_dev_height: ";
    value_to_yaml(msg.std_dev_height, out);
    out << "\n";
  }

  // member: std_dev_north_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "std_dev_north_velocity: ";
    value_to_yaml(msg.std_dev_north_velocity, out);
    out << "\n";
  }

  // member: std_dev_east_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "std_dev_east_velocity: ";
    value_to_yaml(msg.std_dev_east_velocity, out);
    out << "\n";
  }

  // member: std_dev_up_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "std_dev_up_velocity: ";
    value_to_yaml(msg.std_dev_up_velocity, out);
    out << "\n";
  }

  // member: std_dev_roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "std_dev_roll: ";
    value_to_yaml(msg.std_dev_roll, out);
    out << "\n";
  }

  // member: std_dev_pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "std_dev_pitch: ";
    value_to_yaml(msg.std_dev_pitch, out);
    out << "\n";
  }

  // member: std_dev_azimuth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "std_dev_azimuth: ";
    value_to_yaml(msg.std_dev_azimuth, out);
    out << "\n";
  }

  // member: extended_solution_stat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "extended_solution_stat: ";
    value_to_yaml(msg.extended_solution_stat, out);
    out << "\n";
  }

  // member: time_since_update
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_since_update: ";
    value_to_yaml(msg.time_since_update, out);
    out << "\n";
  }

  // member: imu_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_error: ";
    value_to_yaml(msg.imu_error, out);
    out << "\n";
  }

  // member: imu_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_type: ";
    value_to_yaml(msg.imu_type, out);
    out << "\n";
  }

  // member: imu_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_status: ";
    value_to_yaml(msg.imu_status, out);
    out << "\n";
  }

  // member: z_accel_output
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z_accel_output: ";
    value_to_yaml(msg.z_accel_output, out);
    out << "\n";
  }

  // member: y_accel_output
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_accel_output: ";
    value_to_yaml(msg.y_accel_output, out);
    out << "\n";
  }

  // member: x_accel_output
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_accel_output: ";
    value_to_yaml(msg.x_accel_output, out);
    out << "\n";
  }

  // member: z_gyro_output
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z_gyro_output: ";
    value_to_yaml(msg.z_gyro_output, out);
    out << "\n";
  }

  // member: y_gyro_output
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_gyro_output: ";
    value_to_yaml(msg.y_gyro_output, out);
    out << "\n";
  }

  // member: x_gyro_output
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_gyro_output: ";
    value_to_yaml(msg.x_gyro_output, out);
    out << "\n";
  }

  // member: gps_sat_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_sat_num: ";
    value_to_yaml(msg.gps_sat_num, out);
    out << "\n";
  }

  // member: bd_sat_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bd_sat_num: ";
    value_to_yaml(msg.bd_sat_num, out);
    out << "\n";
  }

  // member: glo_sat_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "glo_sat_num: ";
    value_to_yaml(msg.glo_sat_num, out);
    out << "\n";
  }

  // member: gal_sat_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gal_sat_num: ";
    value_to_yaml(msg.gal_sat_num, out);
    out << "\n";
  }

  // member: rtk_delay
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rtk_delay: ";
    value_to_yaml(msg.rtk_delay, out);
    out << "\n";
  }

  // member: gdop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gdop: ";
    value_to_yaml(msg.gdop, out);
    out << "\n";
  }

  // member: remain_float_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "remain_float_1: ";
    value_to_yaml(msg.remain_float_1, out);
    out << "\n";
  }

  // member: remain_float_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "remain_float_2: ";
    value_to_yaml(msg.remain_float_2, out);
    out << "\n";
  }

  // member: remain_double
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "remain_double: ";
    value_to_yaml(msg.remain_double, out);
    out << "\n";
  }

  // member: remain_char_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "remain_char_1: ";
    value_to_yaml(msg.remain_char_1, out);
    out << "\n";
  }

  // member: remain_char_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "remain_char_2: ";
    value_to_yaml(msg.remain_char_2, out);
    out << "\n";
  }

  // member: remain_char_3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "remain_char_3: ";
    value_to_yaml(msg.remain_char_3, out);
    out << "\n";
  }

  // member: remain_char_4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "remain_char_4: ";
    value_to_yaml(msg.remain_char_4, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const rbf_clap_b7_msgs::msg::ClapData & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<rbf_clap_b7_msgs::msg::ClapData>()
{
  return "rbf_clap_b7_msgs::msg::ClapData";
}

template<>
inline const char * name<rbf_clap_b7_msgs::msg::ClapData>()
{
  return "rbf_clap_b7_msgs/msg/ClapData";
}

template<>
struct has_fixed_size<rbf_clap_b7_msgs::msg::ClapData>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rbf_clap_b7_msgs::msg::ClapData>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rbf_clap_b7_msgs::msg::ClapData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RBF_CLAP_B7_MSGS__MSG__DETAIL__CLAP_DATA__TRAITS_HPP_
