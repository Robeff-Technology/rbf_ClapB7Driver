// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from rbf_clap_b7_msgs:msg/ClapData.idl
// generated code does not contain a copyright notice
#include "rbf_clap_b7_msgs/msg/detail/clap_data__rosidl_typesupport_fastrtps_cpp.hpp"
#include "rbf_clap_b7_msgs/msg/detail/clap_data__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

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
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: ins_status
  cdr << ros_message.ins_status;
  // Member: pos_type
  cdr << ros_message.pos_type;
  // Member: latitude
  cdr << ros_message.latitude;
  // Member: longitude
  cdr << ros_message.longitude;
  // Member: height
  cdr << ros_message.height;
  // Member: undulation
  cdr << ros_message.undulation;
  // Member: north_velocity
  cdr << ros_message.north_velocity;
  // Member: east_velocity
  cdr << ros_message.east_velocity;
  // Member: up_velocity
  cdr << ros_message.up_velocity;
  // Member: roll
  cdr << ros_message.roll;
  // Member: pitch
  cdr << ros_message.pitch;
  // Member: azimuth
  cdr << ros_message.azimuth;
  // Member: std_dev_latitude
  cdr << ros_message.std_dev_latitude;
  // Member: std_dev_longitude
  cdr << ros_message.std_dev_longitude;
  // Member: std_dev_height
  cdr << ros_message.std_dev_height;
  // Member: std_dev_north_velocity
  cdr << ros_message.std_dev_north_velocity;
  // Member: std_dev_east_velocity
  cdr << ros_message.std_dev_east_velocity;
  // Member: std_dev_up_velocity
  cdr << ros_message.std_dev_up_velocity;
  // Member: std_dev_roll
  cdr << ros_message.std_dev_roll;
  // Member: std_dev_pitch
  cdr << ros_message.std_dev_pitch;
  // Member: std_dev_azimuth
  cdr << ros_message.std_dev_azimuth;
  // Member: extended_solution_stat
  cdr << ros_message.extended_solution_stat;
  // Member: time_since_update
  cdr << ros_message.time_since_update;
  // Member: imu_error
  cdr << ros_message.imu_error;
  // Member: imu_type
  cdr << ros_message.imu_type;
  // Member: imu_status
  cdr << ros_message.imu_status;
  // Member: z_accel_output
  cdr << ros_message.z_accel_output;
  // Member: y_accel_output
  cdr << ros_message.y_accel_output;
  // Member: x_accel_output
  cdr << ros_message.x_accel_output;
  // Member: z_gyro_output
  cdr << ros_message.z_gyro_output;
  // Member: y_gyro_output
  cdr << ros_message.y_gyro_output;
  // Member: x_gyro_output
  cdr << ros_message.x_gyro_output;
  // Member: gps_sat_num
  cdr << ros_message.gps_sat_num;
  // Member: bd_sat_num
  cdr << ros_message.bd_sat_num;
  // Member: glo_sat_num
  cdr << ros_message.glo_sat_num;
  // Member: gal_sat_num
  cdr << ros_message.gal_sat_num;
  // Member: rtk_delay
  cdr << ros_message.rtk_delay;
  // Member: gdop
  cdr << ros_message.gdop;
  // Member: remain_float_1
  cdr << ros_message.remain_float_1;
  // Member: remain_float_2
  cdr << ros_message.remain_float_2;
  // Member: remain_double
  cdr << ros_message.remain_double;
  // Member: remain_char_1
  cdr << ros_message.remain_char_1;
  // Member: remain_char_2
  cdr << ros_message.remain_char_2;
  // Member: remain_char_3
  cdr << ros_message.remain_char_3;
  // Member: remain_char_4
  cdr << ros_message.remain_char_4;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rbf_clap_b7_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rbf_clap_b7_msgs::msg::ClapData & ros_message)
{
  // Member: ins_status
  cdr >> ros_message.ins_status;

  // Member: pos_type
  cdr >> ros_message.pos_type;

  // Member: latitude
  cdr >> ros_message.latitude;

  // Member: longitude
  cdr >> ros_message.longitude;

  // Member: height
  cdr >> ros_message.height;

  // Member: undulation
  cdr >> ros_message.undulation;

  // Member: north_velocity
  cdr >> ros_message.north_velocity;

  // Member: east_velocity
  cdr >> ros_message.east_velocity;

  // Member: up_velocity
  cdr >> ros_message.up_velocity;

  // Member: roll
  cdr >> ros_message.roll;

  // Member: pitch
  cdr >> ros_message.pitch;

  // Member: azimuth
  cdr >> ros_message.azimuth;

  // Member: std_dev_latitude
  cdr >> ros_message.std_dev_latitude;

  // Member: std_dev_longitude
  cdr >> ros_message.std_dev_longitude;

  // Member: std_dev_height
  cdr >> ros_message.std_dev_height;

  // Member: std_dev_north_velocity
  cdr >> ros_message.std_dev_north_velocity;

  // Member: std_dev_east_velocity
  cdr >> ros_message.std_dev_east_velocity;

  // Member: std_dev_up_velocity
  cdr >> ros_message.std_dev_up_velocity;

  // Member: std_dev_roll
  cdr >> ros_message.std_dev_roll;

  // Member: std_dev_pitch
  cdr >> ros_message.std_dev_pitch;

  // Member: std_dev_azimuth
  cdr >> ros_message.std_dev_azimuth;

  // Member: extended_solution_stat
  cdr >> ros_message.extended_solution_stat;

  // Member: time_since_update
  cdr >> ros_message.time_since_update;

  // Member: imu_error
  cdr >> ros_message.imu_error;

  // Member: imu_type
  cdr >> ros_message.imu_type;

  // Member: imu_status
  cdr >> ros_message.imu_status;

  // Member: z_accel_output
  cdr >> ros_message.z_accel_output;

  // Member: y_accel_output
  cdr >> ros_message.y_accel_output;

  // Member: x_accel_output
  cdr >> ros_message.x_accel_output;

  // Member: z_gyro_output
  cdr >> ros_message.z_gyro_output;

  // Member: y_gyro_output
  cdr >> ros_message.y_gyro_output;

  // Member: x_gyro_output
  cdr >> ros_message.x_gyro_output;

  // Member: gps_sat_num
  cdr >> ros_message.gps_sat_num;

  // Member: bd_sat_num
  cdr >> ros_message.bd_sat_num;

  // Member: glo_sat_num
  cdr >> ros_message.glo_sat_num;

  // Member: gal_sat_num
  cdr >> ros_message.gal_sat_num;

  // Member: rtk_delay
  cdr >> ros_message.rtk_delay;

  // Member: gdop
  cdr >> ros_message.gdop;

  // Member: remain_float_1
  cdr >> ros_message.remain_float_1;

  // Member: remain_float_2
  cdr >> ros_message.remain_float_2;

  // Member: remain_double
  cdr >> ros_message.remain_double;

  // Member: remain_char_1
  cdr >> ros_message.remain_char_1;

  // Member: remain_char_2
  cdr >> ros_message.remain_char_2;

  // Member: remain_char_3
  cdr >> ros_message.remain_char_3;

  // Member: remain_char_4
  cdr >> ros_message.remain_char_4;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rbf_clap_b7_msgs
get_serialized_size(
  const rbf_clap_b7_msgs::msg::ClapData & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: ins_status
  {
    size_t item_size = sizeof(ros_message.ins_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pos_type
  {
    size_t item_size = sizeof(ros_message.pos_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: latitude
  {
    size_t item_size = sizeof(ros_message.latitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: longitude
  {
    size_t item_size = sizeof(ros_message.longitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: height
  {
    size_t item_size = sizeof(ros_message.height);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: undulation
  {
    size_t item_size = sizeof(ros_message.undulation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: north_velocity
  {
    size_t item_size = sizeof(ros_message.north_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: east_velocity
  {
    size_t item_size = sizeof(ros_message.east_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: up_velocity
  {
    size_t item_size = sizeof(ros_message.up_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: roll
  {
    size_t item_size = sizeof(ros_message.roll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pitch
  {
    size_t item_size = sizeof(ros_message.pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: azimuth
  {
    size_t item_size = sizeof(ros_message.azimuth);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: std_dev_latitude
  {
    size_t item_size = sizeof(ros_message.std_dev_latitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: std_dev_longitude
  {
    size_t item_size = sizeof(ros_message.std_dev_longitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: std_dev_height
  {
    size_t item_size = sizeof(ros_message.std_dev_height);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: std_dev_north_velocity
  {
    size_t item_size = sizeof(ros_message.std_dev_north_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: std_dev_east_velocity
  {
    size_t item_size = sizeof(ros_message.std_dev_east_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: std_dev_up_velocity
  {
    size_t item_size = sizeof(ros_message.std_dev_up_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: std_dev_roll
  {
    size_t item_size = sizeof(ros_message.std_dev_roll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: std_dev_pitch
  {
    size_t item_size = sizeof(ros_message.std_dev_pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: std_dev_azimuth
  {
    size_t item_size = sizeof(ros_message.std_dev_azimuth);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: extended_solution_stat
  {
    size_t item_size = sizeof(ros_message.extended_solution_stat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: time_since_update
  {
    size_t item_size = sizeof(ros_message.time_since_update);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: imu_error
  {
    size_t item_size = sizeof(ros_message.imu_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: imu_type
  {
    size_t item_size = sizeof(ros_message.imu_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: imu_status
  {
    size_t item_size = sizeof(ros_message.imu_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: z_accel_output
  {
    size_t item_size = sizeof(ros_message.z_accel_output);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: y_accel_output
  {
    size_t item_size = sizeof(ros_message.y_accel_output);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: x_accel_output
  {
    size_t item_size = sizeof(ros_message.x_accel_output);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: z_gyro_output
  {
    size_t item_size = sizeof(ros_message.z_gyro_output);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: y_gyro_output
  {
    size_t item_size = sizeof(ros_message.y_gyro_output);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: x_gyro_output
  {
    size_t item_size = sizeof(ros_message.x_gyro_output);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gps_sat_num
  {
    size_t item_size = sizeof(ros_message.gps_sat_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bd_sat_num
  {
    size_t item_size = sizeof(ros_message.bd_sat_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: glo_sat_num
  {
    size_t item_size = sizeof(ros_message.glo_sat_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gal_sat_num
  {
    size_t item_size = sizeof(ros_message.gal_sat_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rtk_delay
  {
    size_t item_size = sizeof(ros_message.rtk_delay);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gdop
  {
    size_t item_size = sizeof(ros_message.gdop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: remain_float_1
  {
    size_t item_size = sizeof(ros_message.remain_float_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: remain_float_2
  {
    size_t item_size = sizeof(ros_message.remain_float_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: remain_double
  {
    size_t item_size = sizeof(ros_message.remain_double);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: remain_char_1
  {
    size_t item_size = sizeof(ros_message.remain_char_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: remain_char_2
  {
    size_t item_size = sizeof(ros_message.remain_char_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: remain_char_3
  {
    size_t item_size = sizeof(ros_message.remain_char_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: remain_char_4
  {
    size_t item_size = sizeof(ros_message.remain_char_4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rbf_clap_b7_msgs
max_serialized_size_ClapData(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: ins_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pos_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: latitude
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: longitude
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: height
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: undulation
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: north_velocity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: east_velocity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: up_velocity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: roll
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: pitch
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: azimuth
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: std_dev_latitude
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: std_dev_longitude
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: std_dev_height
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: std_dev_north_velocity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: std_dev_east_velocity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: std_dev_up_velocity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: std_dev_roll
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: std_dev_pitch
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: std_dev_azimuth
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: extended_solution_stat
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: time_since_update
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: imu_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: imu_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: imu_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: z_accel_output
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: y_accel_output
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: x_accel_output
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: z_gyro_output
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: y_gyro_output
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: x_gyro_output
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gps_sat_num
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: bd_sat_num
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: glo_sat_num
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gal_sat_num
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rtk_delay
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gdop
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: remain_float_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: remain_float_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: remain_double
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: remain_char_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: remain_char_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: remain_char_3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: remain_char_4
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _ClapData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const rbf_clap_b7_msgs::msg::ClapData *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ClapData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rbf_clap_b7_msgs::msg::ClapData *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ClapData__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rbf_clap_b7_msgs::msg::ClapData *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ClapData__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ClapData(full_bounded, 0);
}

static message_type_support_callbacks_t _ClapData__callbacks = {
  "rbf_clap_b7_msgs::msg",
  "ClapData",
  _ClapData__cdr_serialize,
  _ClapData__cdr_deserialize,
  _ClapData__get_serialized_size,
  _ClapData__max_serialized_size
};

static rosidl_message_type_support_t _ClapData__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ClapData__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace rbf_clap_b7_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_rbf_clap_b7_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<rbf_clap_b7_msgs::msg::ClapData>()
{
  return &rbf_clap_b7_msgs::msg::typesupport_fastrtps_cpp::_ClapData__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rbf_clap_b7_msgs, msg, ClapData)() {
  return &rbf_clap_b7_msgs::msg::typesupport_fastrtps_cpp::_ClapData__handle;
}

#ifdef __cplusplus
}
#endif
