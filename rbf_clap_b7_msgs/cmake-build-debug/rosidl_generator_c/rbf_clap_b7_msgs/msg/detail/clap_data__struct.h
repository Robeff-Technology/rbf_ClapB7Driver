// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rbf_clap_b7_msgs:msg/ClapData.idl
// generated code does not contain a copyright notice

#ifndef RBF_CLAP_B7_MSGS__MSG__DETAIL__CLAP_DATA__STRUCT_H_
#define RBF_CLAP_B7_MSGS__MSG__DETAIL__CLAP_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/ClapData in the package rbf_clap_b7_msgs.
typedef struct rbf_clap_b7_msgs__msg__ClapData
{
  uint32_t ins_status;
  uint32_t pos_type;
  double latitude;
  double longitude;
  double height;
  float undulation;
  double north_velocity;
  double east_velocity;
  double up_velocity;
  double roll;
  double pitch;
  double azimuth;
  float std_dev_latitude;
  float std_dev_longitude;
  float std_dev_height;
  float std_dev_north_velocity;
  float std_dev_east_velocity;
  float std_dev_up_velocity;
  float std_dev_roll;
  float std_dev_pitch;
  float std_dev_azimuth;
  uint32_t extended_solution_stat;
  uint16_t time_since_update;
  uint8_t imu_error;
  uint8_t imu_type;
  uint32_t imu_status;
  int32_t z_accel_output;
  int32_t y_accel_output;
  int32_t x_accel_output;
  int32_t z_gyro_output;
  int32_t y_gyro_output;
  int32_t x_gyro_output;
  uint8_t gps_sat_num;
  uint8_t bd_sat_num;
  uint8_t glo_sat_num;
  uint8_t gal_sat_num;
  float rtk_delay;
  float gdop;
  float remain_float_1;
  float remain_float_2;
  double remain_double;
  uint8_t remain_char_1;
  uint8_t remain_char_2;
  uint8_t remain_char_3;
  uint8_t remain_char_4;
} rbf_clap_b7_msgs__msg__ClapData;

// Struct for a sequence of rbf_clap_b7_msgs__msg__ClapData.
typedef struct rbf_clap_b7_msgs__msg__ClapData__Sequence
{
  rbf_clap_b7_msgs__msg__ClapData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rbf_clap_b7_msgs__msg__ClapData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RBF_CLAP_B7_MSGS__MSG__DETAIL__CLAP_DATA__STRUCT_H_
