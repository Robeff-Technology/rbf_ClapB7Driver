// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rbf_clap_b7_msgs:msg/ClapData.idl
// generated code does not contain a copyright notice

#ifndef RBF_CLAP_B7_MSGS__MSG__DETAIL__CLAP_DATA__BUILDER_HPP_
#define RBF_CLAP_B7_MSGS__MSG__DETAIL__CLAP_DATA__BUILDER_HPP_

#include "rbf_clap_b7_msgs/msg/detail/clap_data__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace rbf_clap_b7_msgs
{

namespace msg
{

namespace builder
{

class Init_ClapData_remain_char_4
{
public:
  explicit Init_ClapData_remain_char_4(::rbf_clap_b7_msgs::msg::ClapData & msg)
  : msg_(msg)
  {}
  ::rbf_clap_b7_msgs::msg::ClapData remain_char_4(::rbf_clap_b7_msgs::msg::ClapData::_remain_char_4_type arg)
  {
    msg_.remain_char_4 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rbf_clap_b7_msgs::msg::ClapData msg_;
};

class Init_ClapData_remain_char_3
{
public:
  explicit Init_ClapData_remain_char_3(::rbf_clap_b7_msgs::msg::ClapData & msg)
  : msg_(msg)
  {}
  Init_ClapData_remain_char_4 remain_char_3(::rbf_clap_b7_msgs::msg::ClapData::_remain_char_3_type arg)
  {
    msg_.remain_char_3 = std::move(arg);
    return Init_ClapData_remain_char_4(msg_);
  }

private:
  ::rbf_clap_b7_msgs::msg::ClapData msg_;
};

class Init_ClapData_remain_char_2
{
public:
  explicit Init_ClapData_remain_char_2(::rbf_clap_b7_msgs::msg::ClapData & msg)
  : msg_(msg)
  {}
  Init_ClapData_remain_char_3 remain_char_2(::rbf_clap_b7_msgs::msg::ClapData::_remain_char_2_type arg)
  {
    msg_.remain_char_2 = std::move(arg);
    return Init_ClapData_remain_char_3(msg_);
  }

private:
  ::rbf_clap_b7_msgs::msg::ClapData msg_;
};

class Init_ClapData_remain_char_1
{
public:
  explicit Init_ClapData_remain_char_1(::rbf_clap_b7_msgs::msg::ClapData & msg)
  : msg_(msg)
  {}
  Init_ClapData_remain_char_2 remain_char_1(::rbf_clap_b7_msgs::msg::ClapData::_remain_char_1_type arg)
  {
    msg_.remain_char_1 = std::move(arg);
    return Init_ClapData_remain_char_2(msg_);
  }

private:
  ::rbf_clap_b7_msgs::msg::ClapData msg_;
};

class Init_ClapData_remain_double
{
public:
  explicit Init_ClapData_remain_double(::rbf_clap_b7_msgs::msg::ClapData & msg)
  : msg_(msg)
  {}
  Init_ClapData_remain_char_1 remain_double(::rbf_clap_b7_msgs::msg::ClapData::_remain_double_type arg)
  {
    msg_.remain_double = std::move(arg);
    return Init_ClapData_remain_char_1(msg_);
  }

private:
  ::rbf_clap_b7_msgs::msg::ClapData msg_;
};

class Init_ClapData_remain_float_2
{
public:
  explicit Init_ClapData_remain_float_2(::rbf_clap_b7_msgs::msg::ClapData & msg)
  : msg_(msg)
  {}
  Init_ClapData_remain_double remain_float_2(::rbf_clap_b7_msgs::msg::ClapData::_remain_float_2_type arg)
  {
    msg_.remain_float_2 = std::move(arg);
    return Init_ClapData_remain_double(msg_);
  }

private:
  ::rbf_clap_b7_msgs::msg::ClapData msg_;
};

class Init_ClapData_remain_float_1
{
public:
  explicit Init_ClapData_remain_float_1(::rbf_clap_b7_msgs::msg::ClapData & msg)
  : msg_(msg)
  {}
  Init_ClapData_remain_float_2 remain_float_1(::rbf_clap_b7_msgs::msg::ClapData::_remain_float_1_type arg)
  {
    msg_.remain_float_1 = std::move(arg);
    return Init_ClapData_remain_float_2(msg_);
  }

private:
  ::rbf_clap_b7_msgs::msg::ClapData msg_;
};

class Init_ClapData_gdop
{
public:
  explicit Init_ClapData_gdop(::rbf_clap_b7_msgs::msg::ClapData & msg)
  : msg_(msg)
  {}
  Init_ClapData_remain_float_1 gdop(::rbf_clap_b7_msgs::msg::ClapData::_gdop_type arg)
  {
    msg_.gdop = std::move(arg);
    return Init_ClapData_remain_float_1(msg_);
  }

private:
  ::rbf_clap_b7_msgs::msg::ClapData msg_;
};

class Init_ClapData_rtk_delay
{
public:
  explicit Init_ClapData_rtk_delay(::rbf_clap_b7_msgs::msg::ClapData & msg)
  : msg_(msg)
  {}
  Init_ClapData_gdop rtk_delay(::rbf_clap_b7_msgs::msg::ClapData::_rtk_delay_type arg)
  {
    msg_.rtk_delay = std::move(arg);
    return Init_ClapData_gdop(msg_);
  }

private:
  ::rbf_clap_b7_msgs::msg::ClapData msg_;
};

class Init_ClapData_gal_sat_num
{
public:
  explicit Init_ClapData_gal_sat_num(::rbf_clap_b7_msgs::msg::ClapData & msg)
  : msg_(msg)
  {}
  Init_ClapData_rtk_delay gal_sat_num(::rbf_clap_b7_msgs::msg::ClapData::_gal_sat_num_type arg)
  {
    msg_.gal_sat_num = std::move(arg);
    return Init_ClapData_rtk_delay(msg_);
  }

private:
  ::rbf_clap_b7_msgs::msg::ClapData msg_;
};

class Init_ClapData_glo_sat_num
{
public:
  explicit Init_ClapData_glo_sat_num(::rbf_clap_b7_msgs::msg::ClapData & msg)
  : msg_(msg)
  {}
  Init_ClapData_gal_sat_num glo_sat_num(::rbf_clap_b7_msgs::msg::ClapData::_glo_sat_num_type arg)
  {
    msg_.glo_sat_num = std::move(arg);
    return Init_ClapData_gal_sat_num(msg_);
  }

private:
  ::rbf_clap_b7_msgs::msg::ClapData msg_;
};

class Init_ClapData_bd_sat_num
{
public:
  explicit Init_ClapData_bd_sat_num(::rbf_clap_b7_msgs::msg::ClapData & msg)
  : msg_(msg)
  {}
  Init_ClapData_glo_sat_num bd_sat_num(::rbf_clap_b7_msgs::msg::ClapData::_bd_sat_num_type arg)
  {
    msg_.bd_sat_num = std::move(arg);
    return Init_ClapData_glo_sat_num(msg_);
  }

private:
  ::rbf_clap_b7_msgs::msg::ClapData msg_;
};

class Init_ClapData_gps_sat_num
{
public:
  explicit Init_ClapData_gps_sat_num(::rbf_clap_b7_msgs::msg::ClapData & msg)
  : msg_(msg)
  {}
  Init_ClapData_bd_sat_num gps_sat_num(::rbf_clap_b7_msgs::msg::ClapData::_gps_sat_num_type arg)
  {
    msg_.gps_sat_num = std::move(arg);
    return Init_ClapData_bd_sat_num(msg_);
  }

private:
  ::rbf_clap_b7_msgs::msg::ClapData msg_;
};

class Init_ClapData_x_gyro_output
{
public:
  explicit Init_ClapData_x_gyro_output(::rbf_clap_b7_msgs::msg::ClapData & msg)
  : msg_(msg)
  {}
  Init_ClapData_gps_sat_num x_gyro_output(::rbf_clap_b7_msgs::msg::ClapData::_x_gyro_output_type arg)
  {
    msg_.x_gyro_output = std::move(arg);
    return Init_ClapData_gps_sat_num(msg_);
  }

private:
  ::rbf_clap_b7_msgs::msg::ClapData msg_;
};

class Init_ClapData_y_gyro_output
{
public:
  explicit Init_ClapData_y_gyro_output(::rbf_clap_b7_msgs::msg::ClapData & msg)
  : msg_(msg)
  {}
  Init_ClapData_x_gyro_output y_gyro_output(::rbf_clap_b7_msgs::msg::ClapData::_y_gyro_output_type arg)
  {
    msg_.y_gyro_output = std::move(arg);
    return Init_ClapData_x_gyro_output(msg_);
  }

private:
  ::rbf_clap_b7_msgs::msg::ClapData msg_;
};

class Init_ClapData_z_gyro_output
{
public:
  explicit Init_ClapData_z_gyro_output(::rbf_clap_b7_msgs::msg::ClapData & msg)
  : msg_(msg)
  {}
  Init_ClapData_y_gyro_output z_gyro_output(::rbf_clap_b7_msgs::msg::ClapData::_z_gyro_output_type arg)
  {
    msg_.z_gyro_output = std::move(arg);
    return Init_ClapData_y_gyro_output(msg_);
  }

private:
  ::rbf_clap_b7_msgs::msg::ClapData msg_;
};

class Init_ClapData_x_accel_output
{
public:
  explicit Init_ClapData_x_accel_output(::rbf_clap_b7_msgs::msg::ClapData & msg)
  : msg_(msg)
  {}
  Init_ClapData_z_gyro_output x_accel_output(::rbf_clap_b7_msgs::msg::ClapData::_x_accel_output_type arg)
  {
    msg_.x_accel_output = std::move(arg);
    return Init_ClapData_z_gyro_output(msg_);
  }

private:
  ::rbf_clap_b7_msgs::msg::ClapData msg_;
};

class Init_ClapData_y_accel_output
{
public:
  explicit Init_ClapData_y_accel_output(::rbf_clap_b7_msgs::msg::ClapData & msg)
  : msg_(msg)
  {}
  Init_ClapData_x_accel_output y_accel_output(::rbf_clap_b7_msgs::msg::ClapData::_y_accel_output_type arg)
  {
    msg_.y_accel_output = std::move(arg);
    return Init_ClapData_x_accel_output(msg_);
  }

private:
  ::rbf_clap_b7_msgs::msg::ClapData msg_;
};

class Init_ClapData_z_accel_output
{
public:
  explicit Init_ClapData_z_accel_output(::rbf_clap_b7_msgs::msg::ClapData & msg)
  : msg_(msg)
  {}
  Init_ClapData_y_accel_output z_accel_output(::rbf_clap_b7_msgs::msg::ClapData::_z_accel_output_type arg)
  {
    msg_.z_accel_output = std::move(arg);
    return Init_ClapData_y_accel_output(msg_);
  }

private:
  ::rbf_clap_b7_msgs::msg::ClapData msg_;
};

class Init_ClapData_imu_status
{
public:
  explicit Init_ClapData_imu_status(::rbf_clap_b7_msgs::msg::ClapData & msg)
  : msg_(msg)
  {}
  Init_ClapData_z_accel_output imu_status(::rbf_clap_b7_msgs::msg::ClapData::_imu_status_type arg)
  {
    msg_.imu_status = std::move(arg);
    return Init_ClapData_z_accel_output(msg_);
  }

private:
  ::rbf_clap_b7_msgs::msg::ClapData msg_;
};

class Init_ClapData_imu_type
{
public:
  explicit Init_ClapData_imu_type(::rbf_clap_b7_msgs::msg::ClapData & msg)
  : msg_(msg)
  {}
  Init_ClapData_imu_status imu_type(::rbf_clap_b7_msgs::msg::ClapData::_imu_type_type arg)
  {
    msg_.imu_type = std::move(arg);
    return Init_ClapData_imu_status(msg_);
  }

private:
  ::rbf_clap_b7_msgs::msg::ClapData msg_;
};

class Init_ClapData_imu_error
{
public:
  explicit Init_ClapData_imu_error(::rbf_clap_b7_msgs::msg::ClapData & msg)
  : msg_(msg)
  {}
  Init_ClapData_imu_type imu_error(::rbf_clap_b7_msgs::msg::ClapData::_imu_error_type arg)
  {
    msg_.imu_error = std::move(arg);
    return Init_ClapData_imu_type(msg_);
  }

private:
  ::rbf_clap_b7_msgs::msg::ClapData msg_;
};

class Init_ClapData_time_since_update
{
public:
  explicit Init_ClapData_time_since_update(::rbf_clap_b7_msgs::msg::ClapData & msg)
  : msg_(msg)
  {}
  Init_ClapData_imu_error time_since_update(::rbf_clap_b7_msgs::msg::ClapData::_time_since_update_type arg)
  {
    msg_.time_since_update = std::move(arg);
    return Init_ClapData_imu_error(msg_);
  }

private:
  ::rbf_clap_b7_msgs::msg::ClapData msg_;
};

class Init_ClapData_extended_solution_stat
{
public:
  explicit Init_ClapData_extended_solution_stat(::rbf_clap_b7_msgs::msg::ClapData & msg)
  : msg_(msg)
  {}
  Init_ClapData_time_since_update extended_solution_stat(::rbf_clap_b7_msgs::msg::ClapData::_extended_solution_stat_type arg)
  {
    msg_.extended_solution_stat = std::move(arg);
    return Init_ClapData_time_since_update(msg_);
  }

private:
  ::rbf_clap_b7_msgs::msg::ClapData msg_;
};

class Init_ClapData_std_dev_azimuth
{
public:
  explicit Init_ClapData_std_dev_azimuth(::rbf_clap_b7_msgs::msg::ClapData & msg)
  : msg_(msg)
  {}
  Init_ClapData_extended_solution_stat std_dev_azimuth(::rbf_clap_b7_msgs::msg::ClapData::_std_dev_azimuth_type arg)
  {
    msg_.std_dev_azimuth = std::move(arg);
    return Init_ClapData_extended_solution_stat(msg_);
  }

private:
  ::rbf_clap_b7_msgs::msg::ClapData msg_;
};

class Init_ClapData_std_dev_pitch
{
public:
  explicit Init_ClapData_std_dev_pitch(::rbf_clap_b7_msgs::msg::ClapData & msg)
  : msg_(msg)
  {}
  Init_ClapData_std_dev_azimuth std_dev_pitch(::rbf_clap_b7_msgs::msg::ClapData::_std_dev_pitch_type arg)
  {
    msg_.std_dev_pitch = std::move(arg);
    return Init_ClapData_std_dev_azimuth(msg_);
  }

private:
  ::rbf_clap_b7_msgs::msg::ClapData msg_;
};

class Init_ClapData_std_dev_roll
{
public:
  explicit Init_ClapData_std_dev_roll(::rbf_clap_b7_msgs::msg::ClapData & msg)
  : msg_(msg)
  {}
  Init_ClapData_std_dev_pitch std_dev_roll(::rbf_clap_b7_msgs::msg::ClapData::_std_dev_roll_type arg)
  {
    msg_.std_dev_roll = std::move(arg);
    return Init_ClapData_std_dev_pitch(msg_);
  }

private:
  ::rbf_clap_b7_msgs::msg::ClapData msg_;
};

class Init_ClapData_std_dev_up_velocity
{
public:
  explicit Init_ClapData_std_dev_up_velocity(::rbf_clap_b7_msgs::msg::ClapData & msg)
  : msg_(msg)
  {}
  Init_ClapData_std_dev_roll std_dev_up_velocity(::rbf_clap_b7_msgs::msg::ClapData::_std_dev_up_velocity_type arg)
  {
    msg_.std_dev_up_velocity = std::move(arg);
    return Init_ClapData_std_dev_roll(msg_);
  }

private:
  ::rbf_clap_b7_msgs::msg::ClapData msg_;
};

class Init_ClapData_std_dev_east_velocity
{
public:
  explicit Init_ClapData_std_dev_east_velocity(::rbf_clap_b7_msgs::msg::ClapData & msg)
  : msg_(msg)
  {}
  Init_ClapData_std_dev_up_velocity std_dev_east_velocity(::rbf_clap_b7_msgs::msg::ClapData::_std_dev_east_velocity_type arg)
  {
    msg_.std_dev_east_velocity = std::move(arg);
    return Init_ClapData_std_dev_up_velocity(msg_);
  }

private:
  ::rbf_clap_b7_msgs::msg::ClapData msg_;
};

class Init_ClapData_std_dev_north_velocity
{
public:
  explicit Init_ClapData_std_dev_north_velocity(::rbf_clap_b7_msgs::msg::ClapData & msg)
  : msg_(msg)
  {}
  Init_ClapData_std_dev_east_velocity std_dev_north_velocity(::rbf_clap_b7_msgs::msg::ClapData::_std_dev_north_velocity_type arg)
  {
    msg_.std_dev_north_velocity = std::move(arg);
    return Init_ClapData_std_dev_east_velocity(msg_);
  }

private:
  ::rbf_clap_b7_msgs::msg::ClapData msg_;
};

class Init_ClapData_std_dev_height
{
public:
  explicit Init_ClapData_std_dev_height(::rbf_clap_b7_msgs::msg::ClapData & msg)
  : msg_(msg)
  {}
  Init_ClapData_std_dev_north_velocity std_dev_height(::rbf_clap_b7_msgs::msg::ClapData::_std_dev_height_type arg)
  {
    msg_.std_dev_height = std::move(arg);
    return Init_ClapData_std_dev_north_velocity(msg_);
  }

private:
  ::rbf_clap_b7_msgs::msg::ClapData msg_;
};

class Init_ClapData_std_dev_longitude
{
public:
  explicit Init_ClapData_std_dev_longitude(::rbf_clap_b7_msgs::msg::ClapData & msg)
  : msg_(msg)
  {}
  Init_ClapData_std_dev_height std_dev_longitude(::rbf_clap_b7_msgs::msg::ClapData::_std_dev_longitude_type arg)
  {
    msg_.std_dev_longitude = std::move(arg);
    return Init_ClapData_std_dev_height(msg_);
  }

private:
  ::rbf_clap_b7_msgs::msg::ClapData msg_;
};

class Init_ClapData_std_dev_latitude
{
public:
  explicit Init_ClapData_std_dev_latitude(::rbf_clap_b7_msgs::msg::ClapData & msg)
  : msg_(msg)
  {}
  Init_ClapData_std_dev_longitude std_dev_latitude(::rbf_clap_b7_msgs::msg::ClapData::_std_dev_latitude_type arg)
  {
    msg_.std_dev_latitude = std::move(arg);
    return Init_ClapData_std_dev_longitude(msg_);
  }

private:
  ::rbf_clap_b7_msgs::msg::ClapData msg_;
};

class Init_ClapData_azimuth
{
public:
  explicit Init_ClapData_azimuth(::rbf_clap_b7_msgs::msg::ClapData & msg)
  : msg_(msg)
  {}
  Init_ClapData_std_dev_latitude azimuth(::rbf_clap_b7_msgs::msg::ClapData::_azimuth_type arg)
  {
    msg_.azimuth = std::move(arg);
    return Init_ClapData_std_dev_latitude(msg_);
  }

private:
  ::rbf_clap_b7_msgs::msg::ClapData msg_;
};

class Init_ClapData_pitch
{
public:
  explicit Init_ClapData_pitch(::rbf_clap_b7_msgs::msg::ClapData & msg)
  : msg_(msg)
  {}
  Init_ClapData_azimuth pitch(::rbf_clap_b7_msgs::msg::ClapData::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_ClapData_azimuth(msg_);
  }

private:
  ::rbf_clap_b7_msgs::msg::ClapData msg_;
};

class Init_ClapData_roll
{
public:
  explicit Init_ClapData_roll(::rbf_clap_b7_msgs::msg::ClapData & msg)
  : msg_(msg)
  {}
  Init_ClapData_pitch roll(::rbf_clap_b7_msgs::msg::ClapData::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_ClapData_pitch(msg_);
  }

private:
  ::rbf_clap_b7_msgs::msg::ClapData msg_;
};

class Init_ClapData_up_velocity
{
public:
  explicit Init_ClapData_up_velocity(::rbf_clap_b7_msgs::msg::ClapData & msg)
  : msg_(msg)
  {}
  Init_ClapData_roll up_velocity(::rbf_clap_b7_msgs::msg::ClapData::_up_velocity_type arg)
  {
    msg_.up_velocity = std::move(arg);
    return Init_ClapData_roll(msg_);
  }

private:
  ::rbf_clap_b7_msgs::msg::ClapData msg_;
};

class Init_ClapData_east_velocity
{
public:
  explicit Init_ClapData_east_velocity(::rbf_clap_b7_msgs::msg::ClapData & msg)
  : msg_(msg)
  {}
  Init_ClapData_up_velocity east_velocity(::rbf_clap_b7_msgs::msg::ClapData::_east_velocity_type arg)
  {
    msg_.east_velocity = std::move(arg);
    return Init_ClapData_up_velocity(msg_);
  }

private:
  ::rbf_clap_b7_msgs::msg::ClapData msg_;
};

class Init_ClapData_north_velocity
{
public:
  explicit Init_ClapData_north_velocity(::rbf_clap_b7_msgs::msg::ClapData & msg)
  : msg_(msg)
  {}
  Init_ClapData_east_velocity north_velocity(::rbf_clap_b7_msgs::msg::ClapData::_north_velocity_type arg)
  {
    msg_.north_velocity = std::move(arg);
    return Init_ClapData_east_velocity(msg_);
  }

private:
  ::rbf_clap_b7_msgs::msg::ClapData msg_;
};

class Init_ClapData_undulation
{
public:
  explicit Init_ClapData_undulation(::rbf_clap_b7_msgs::msg::ClapData & msg)
  : msg_(msg)
  {}
  Init_ClapData_north_velocity undulation(::rbf_clap_b7_msgs::msg::ClapData::_undulation_type arg)
  {
    msg_.undulation = std::move(arg);
    return Init_ClapData_north_velocity(msg_);
  }

private:
  ::rbf_clap_b7_msgs::msg::ClapData msg_;
};

class Init_ClapData_height
{
public:
  explicit Init_ClapData_height(::rbf_clap_b7_msgs::msg::ClapData & msg)
  : msg_(msg)
  {}
  Init_ClapData_undulation height(::rbf_clap_b7_msgs::msg::ClapData::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_ClapData_undulation(msg_);
  }

private:
  ::rbf_clap_b7_msgs::msg::ClapData msg_;
};

class Init_ClapData_longitude
{
public:
  explicit Init_ClapData_longitude(::rbf_clap_b7_msgs::msg::ClapData & msg)
  : msg_(msg)
  {}
  Init_ClapData_height longitude(::rbf_clap_b7_msgs::msg::ClapData::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return Init_ClapData_height(msg_);
  }

private:
  ::rbf_clap_b7_msgs::msg::ClapData msg_;
};

class Init_ClapData_latitude
{
public:
  explicit Init_ClapData_latitude(::rbf_clap_b7_msgs::msg::ClapData & msg)
  : msg_(msg)
  {}
  Init_ClapData_longitude latitude(::rbf_clap_b7_msgs::msg::ClapData::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return Init_ClapData_longitude(msg_);
  }

private:
  ::rbf_clap_b7_msgs::msg::ClapData msg_;
};

class Init_ClapData_pos_type
{
public:
  explicit Init_ClapData_pos_type(::rbf_clap_b7_msgs::msg::ClapData & msg)
  : msg_(msg)
  {}
  Init_ClapData_latitude pos_type(::rbf_clap_b7_msgs::msg::ClapData::_pos_type_type arg)
  {
    msg_.pos_type = std::move(arg);
    return Init_ClapData_latitude(msg_);
  }

private:
  ::rbf_clap_b7_msgs::msg::ClapData msg_;
};

class Init_ClapData_ins_status
{
public:
  Init_ClapData_ins_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ClapData_pos_type ins_status(::rbf_clap_b7_msgs::msg::ClapData::_ins_status_type arg)
  {
    msg_.ins_status = std::move(arg);
    return Init_ClapData_pos_type(msg_);
  }

private:
  ::rbf_clap_b7_msgs::msg::ClapData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rbf_clap_b7_msgs::msg::ClapData>()
{
  return rbf_clap_b7_msgs::msg::builder::Init_ClapData_ins_status();
}

}  // namespace rbf_clap_b7_msgs

#endif  // RBF_CLAP_B7_MSGS__MSG__DETAIL__CLAP_DATA__BUILDER_HPP_
