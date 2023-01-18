// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rbf_clap_b7_msgs:msg/ClapData.idl
// generated code does not contain a copyright notice
#include "rbf_clap_b7_msgs/msg/detail/clap_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rbf_clap_b7_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rbf_clap_b7_msgs/msg/detail/clap_data__struct.h"
#include "rbf_clap_b7_msgs/msg/detail/clap_data__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _ClapData__ros_msg_type = rbf_clap_b7_msgs__msg__ClapData;

static bool _ClapData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ClapData__ros_msg_type * ros_message = static_cast<const _ClapData__ros_msg_type *>(untyped_ros_message);
  // Field name: ins_status
  {
    cdr << ros_message->ins_status;
  }

  // Field name: pos_type
  {
    cdr << ros_message->pos_type;
  }

  // Field name: latitude
  {
    cdr << ros_message->latitude;
  }

  // Field name: longitude
  {
    cdr << ros_message->longitude;
  }

  // Field name: height
  {
    cdr << ros_message->height;
  }

  // Field name: undulation
  {
    cdr << ros_message->undulation;
  }

  // Field name: north_velocity
  {
    cdr << ros_message->north_velocity;
  }

  // Field name: east_velocity
  {
    cdr << ros_message->east_velocity;
  }

  // Field name: up_velocity
  {
    cdr << ros_message->up_velocity;
  }

  // Field name: roll
  {
    cdr << ros_message->roll;
  }

  // Field name: pitch
  {
    cdr << ros_message->pitch;
  }

  // Field name: azimuth
  {
    cdr << ros_message->azimuth;
  }

  // Field name: std_dev_latitude
  {
    cdr << ros_message->std_dev_latitude;
  }

  // Field name: std_dev_longitude
  {
    cdr << ros_message->std_dev_longitude;
  }

  // Field name: std_dev_height
  {
    cdr << ros_message->std_dev_height;
  }

  // Field name: std_dev_north_velocity
  {
    cdr << ros_message->std_dev_north_velocity;
  }

  // Field name: std_dev_east_velocity
  {
    cdr << ros_message->std_dev_east_velocity;
  }

  // Field name: std_dev_up_velocity
  {
    cdr << ros_message->std_dev_up_velocity;
  }

  // Field name: std_dev_roll
  {
    cdr << ros_message->std_dev_roll;
  }

  // Field name: std_dev_pitch
  {
    cdr << ros_message->std_dev_pitch;
  }

  // Field name: std_dev_azimuth
  {
    cdr << ros_message->std_dev_azimuth;
  }

  // Field name: extended_solution_stat
  {
    cdr << ros_message->extended_solution_stat;
  }

  // Field name: time_since_update
  {
    cdr << ros_message->time_since_update;
  }

  // Field name: imu_error
  {
    cdr << ros_message->imu_error;
  }

  // Field name: imu_type
  {
    cdr << ros_message->imu_type;
  }

  // Field name: imu_status
  {
    cdr << ros_message->imu_status;
  }

  // Field name: z_accel_output
  {
    cdr << ros_message->z_accel_output;
  }

  // Field name: y_accel_output
  {
    cdr << ros_message->y_accel_output;
  }

  // Field name: x_accel_output
  {
    cdr << ros_message->x_accel_output;
  }

  // Field name: z_gyro_output
  {
    cdr << ros_message->z_gyro_output;
  }

  // Field name: y_gyro_output
  {
    cdr << ros_message->y_gyro_output;
  }

  // Field name: x_gyro_output
  {
    cdr << ros_message->x_gyro_output;
  }

  // Field name: gps_sat_num
  {
    cdr << ros_message->gps_sat_num;
  }

  // Field name: bd_sat_num
  {
    cdr << ros_message->bd_sat_num;
  }

  // Field name: glo_sat_num
  {
    cdr << ros_message->glo_sat_num;
  }

  // Field name: gal_sat_num
  {
    cdr << ros_message->gal_sat_num;
  }

  // Field name: rtk_delay
  {
    cdr << ros_message->rtk_delay;
  }

  // Field name: gdop
  {
    cdr << ros_message->gdop;
  }

  // Field name: remain_float_1
  {
    cdr << ros_message->remain_float_1;
  }

  // Field name: remain_float_2
  {
    cdr << ros_message->remain_float_2;
  }

  // Field name: remain_double
  {
    cdr << ros_message->remain_double;
  }

  // Field name: remain_char_1
  {
    cdr << ros_message->remain_char_1;
  }

  // Field name: remain_char_2
  {
    cdr << ros_message->remain_char_2;
  }

  // Field name: remain_char_3
  {
    cdr << ros_message->remain_char_3;
  }

  // Field name: remain_char_4
  {
    cdr << ros_message->remain_char_4;
  }

  return true;
}

static bool _ClapData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ClapData__ros_msg_type * ros_message = static_cast<_ClapData__ros_msg_type *>(untyped_ros_message);
  // Field name: ins_status
  {
    cdr >> ros_message->ins_status;
  }

  // Field name: pos_type
  {
    cdr >> ros_message->pos_type;
  }

  // Field name: latitude
  {
    cdr >> ros_message->latitude;
  }

  // Field name: longitude
  {
    cdr >> ros_message->longitude;
  }

  // Field name: height
  {
    cdr >> ros_message->height;
  }

  // Field name: undulation
  {
    cdr >> ros_message->undulation;
  }

  // Field name: north_velocity
  {
    cdr >> ros_message->north_velocity;
  }

  // Field name: east_velocity
  {
    cdr >> ros_message->east_velocity;
  }

  // Field name: up_velocity
  {
    cdr >> ros_message->up_velocity;
  }

  // Field name: roll
  {
    cdr >> ros_message->roll;
  }

  // Field name: pitch
  {
    cdr >> ros_message->pitch;
  }

  // Field name: azimuth
  {
    cdr >> ros_message->azimuth;
  }

  // Field name: std_dev_latitude
  {
    cdr >> ros_message->std_dev_latitude;
  }

  // Field name: std_dev_longitude
  {
    cdr >> ros_message->std_dev_longitude;
  }

  // Field name: std_dev_height
  {
    cdr >> ros_message->std_dev_height;
  }

  // Field name: std_dev_north_velocity
  {
    cdr >> ros_message->std_dev_north_velocity;
  }

  // Field name: std_dev_east_velocity
  {
    cdr >> ros_message->std_dev_east_velocity;
  }

  // Field name: std_dev_up_velocity
  {
    cdr >> ros_message->std_dev_up_velocity;
  }

  // Field name: std_dev_roll
  {
    cdr >> ros_message->std_dev_roll;
  }

  // Field name: std_dev_pitch
  {
    cdr >> ros_message->std_dev_pitch;
  }

  // Field name: std_dev_azimuth
  {
    cdr >> ros_message->std_dev_azimuth;
  }

  // Field name: extended_solution_stat
  {
    cdr >> ros_message->extended_solution_stat;
  }

  // Field name: time_since_update
  {
    cdr >> ros_message->time_since_update;
  }

  // Field name: imu_error
  {
    cdr >> ros_message->imu_error;
  }

  // Field name: imu_type
  {
    cdr >> ros_message->imu_type;
  }

  // Field name: imu_status
  {
    cdr >> ros_message->imu_status;
  }

  // Field name: z_accel_output
  {
    cdr >> ros_message->z_accel_output;
  }

  // Field name: y_accel_output
  {
    cdr >> ros_message->y_accel_output;
  }

  // Field name: x_accel_output
  {
    cdr >> ros_message->x_accel_output;
  }

  // Field name: z_gyro_output
  {
    cdr >> ros_message->z_gyro_output;
  }

  // Field name: y_gyro_output
  {
    cdr >> ros_message->y_gyro_output;
  }

  // Field name: x_gyro_output
  {
    cdr >> ros_message->x_gyro_output;
  }

  // Field name: gps_sat_num
  {
    cdr >> ros_message->gps_sat_num;
  }

  // Field name: bd_sat_num
  {
    cdr >> ros_message->bd_sat_num;
  }

  // Field name: glo_sat_num
  {
    cdr >> ros_message->glo_sat_num;
  }

  // Field name: gal_sat_num
  {
    cdr >> ros_message->gal_sat_num;
  }

  // Field name: rtk_delay
  {
    cdr >> ros_message->rtk_delay;
  }

  // Field name: gdop
  {
    cdr >> ros_message->gdop;
  }

  // Field name: remain_float_1
  {
    cdr >> ros_message->remain_float_1;
  }

  // Field name: remain_float_2
  {
    cdr >> ros_message->remain_float_2;
  }

  // Field name: remain_double
  {
    cdr >> ros_message->remain_double;
  }

  // Field name: remain_char_1
  {
    cdr >> ros_message->remain_char_1;
  }

  // Field name: remain_char_2
  {
    cdr >> ros_message->remain_char_2;
  }

  // Field name: remain_char_3
  {
    cdr >> ros_message->remain_char_3;
  }

  // Field name: remain_char_4
  {
    cdr >> ros_message->remain_char_4;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rbf_clap_b7_msgs
size_t get_serialized_size_rbf_clap_b7_msgs__msg__ClapData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ClapData__ros_msg_type * ros_message = static_cast<const _ClapData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name ins_status
  {
    size_t item_size = sizeof(ros_message->ins_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pos_type
  {
    size_t item_size = sizeof(ros_message->pos_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name latitude
  {
    size_t item_size = sizeof(ros_message->latitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name longitude
  {
    size_t item_size = sizeof(ros_message->longitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name height
  {
    size_t item_size = sizeof(ros_message->height);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name undulation
  {
    size_t item_size = sizeof(ros_message->undulation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name north_velocity
  {
    size_t item_size = sizeof(ros_message->north_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name east_velocity
  {
    size_t item_size = sizeof(ros_message->east_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name up_velocity
  {
    size_t item_size = sizeof(ros_message->up_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name roll
  {
    size_t item_size = sizeof(ros_message->roll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pitch
  {
    size_t item_size = sizeof(ros_message->pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name azimuth
  {
    size_t item_size = sizeof(ros_message->azimuth);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name std_dev_latitude
  {
    size_t item_size = sizeof(ros_message->std_dev_latitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name std_dev_longitude
  {
    size_t item_size = sizeof(ros_message->std_dev_longitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name std_dev_height
  {
    size_t item_size = sizeof(ros_message->std_dev_height);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name std_dev_north_velocity
  {
    size_t item_size = sizeof(ros_message->std_dev_north_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name std_dev_east_velocity
  {
    size_t item_size = sizeof(ros_message->std_dev_east_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name std_dev_up_velocity
  {
    size_t item_size = sizeof(ros_message->std_dev_up_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name std_dev_roll
  {
    size_t item_size = sizeof(ros_message->std_dev_roll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name std_dev_pitch
  {
    size_t item_size = sizeof(ros_message->std_dev_pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name std_dev_azimuth
  {
    size_t item_size = sizeof(ros_message->std_dev_azimuth);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name extended_solution_stat
  {
    size_t item_size = sizeof(ros_message->extended_solution_stat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name time_since_update
  {
    size_t item_size = sizeof(ros_message->time_since_update);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name imu_error
  {
    size_t item_size = sizeof(ros_message->imu_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name imu_type
  {
    size_t item_size = sizeof(ros_message->imu_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name imu_status
  {
    size_t item_size = sizeof(ros_message->imu_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name z_accel_output
  {
    size_t item_size = sizeof(ros_message->z_accel_output);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y_accel_output
  {
    size_t item_size = sizeof(ros_message->y_accel_output);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name x_accel_output
  {
    size_t item_size = sizeof(ros_message->x_accel_output);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name z_gyro_output
  {
    size_t item_size = sizeof(ros_message->z_gyro_output);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y_gyro_output
  {
    size_t item_size = sizeof(ros_message->y_gyro_output);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name x_gyro_output
  {
    size_t item_size = sizeof(ros_message->x_gyro_output);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gps_sat_num
  {
    size_t item_size = sizeof(ros_message->gps_sat_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bd_sat_num
  {
    size_t item_size = sizeof(ros_message->bd_sat_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name glo_sat_num
  {
    size_t item_size = sizeof(ros_message->glo_sat_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gal_sat_num
  {
    size_t item_size = sizeof(ros_message->gal_sat_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rtk_delay
  {
    size_t item_size = sizeof(ros_message->rtk_delay);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gdop
  {
    size_t item_size = sizeof(ros_message->gdop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name remain_float_1
  {
    size_t item_size = sizeof(ros_message->remain_float_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name remain_float_2
  {
    size_t item_size = sizeof(ros_message->remain_float_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name remain_double
  {
    size_t item_size = sizeof(ros_message->remain_double);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name remain_char_1
  {
    size_t item_size = sizeof(ros_message->remain_char_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name remain_char_2
  {
    size_t item_size = sizeof(ros_message->remain_char_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name remain_char_3
  {
    size_t item_size = sizeof(ros_message->remain_char_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name remain_char_4
  {
    size_t item_size = sizeof(ros_message->remain_char_4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ClapData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rbf_clap_b7_msgs__msg__ClapData(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rbf_clap_b7_msgs
size_t max_serialized_size_rbf_clap_b7_msgs__msg__ClapData(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: ins_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pos_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: latitude
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: longitude
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: height
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: undulation
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: north_velocity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: east_velocity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: up_velocity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: roll
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: pitch
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: azimuth
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: std_dev_latitude
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: std_dev_longitude
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: std_dev_height
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: std_dev_north_velocity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: std_dev_east_velocity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: std_dev_up_velocity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: std_dev_roll
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: std_dev_pitch
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: std_dev_azimuth
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: extended_solution_stat
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: time_since_update
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: imu_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: imu_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: imu_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: z_accel_output
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: y_accel_output
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: x_accel_output
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: z_gyro_output
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: y_gyro_output
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: x_gyro_output
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gps_sat_num
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: bd_sat_num
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: glo_sat_num
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gal_sat_num
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rtk_delay
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gdop
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: remain_float_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: remain_float_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: remain_double
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: remain_char_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: remain_char_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: remain_char_3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: remain_char_4
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _ClapData__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_rbf_clap_b7_msgs__msg__ClapData(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ClapData = {
  "rbf_clap_b7_msgs::msg",
  "ClapData",
  _ClapData__cdr_serialize,
  _ClapData__cdr_deserialize,
  _ClapData__get_serialized_size,
  _ClapData__max_serialized_size
};

static rosidl_message_type_support_t _ClapData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ClapData,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rbf_clap_b7_msgs, msg, ClapData)() {
  return &_ClapData__type_support;
}

#if defined(__cplusplus)
}
#endif
