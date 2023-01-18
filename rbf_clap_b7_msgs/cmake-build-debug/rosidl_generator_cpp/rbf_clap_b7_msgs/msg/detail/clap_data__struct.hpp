// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rbf_clap_b7_msgs:msg/ClapData.idl
// generated code does not contain a copyright notice

#ifndef RBF_CLAP_B7_MSGS__MSG__DETAIL__CLAP_DATA__STRUCT_HPP_
#define RBF_CLAP_B7_MSGS__MSG__DETAIL__CLAP_DATA__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__rbf_clap_b7_msgs__msg__ClapData __attribute__((deprecated))
#else
# define DEPRECATED__rbf_clap_b7_msgs__msg__ClapData __declspec(deprecated)
#endif

namespace rbf_clap_b7_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ClapData_
{
  using Type = ClapData_<ContainerAllocator>;

  explicit ClapData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ins_status = 0ul;
      this->pos_type = 0ul;
      this->latitude = 0.0;
      this->longitude = 0.0;
      this->height = 0.0;
      this->undulation = 0.0f;
      this->north_velocity = 0.0;
      this->east_velocity = 0.0;
      this->up_velocity = 0.0;
      this->roll = 0.0;
      this->pitch = 0.0;
      this->azimuth = 0.0;
      this->std_dev_latitude = 0.0f;
      this->std_dev_longitude = 0.0f;
      this->std_dev_height = 0.0f;
      this->std_dev_north_velocity = 0.0f;
      this->std_dev_east_velocity = 0.0f;
      this->std_dev_up_velocity = 0.0f;
      this->std_dev_roll = 0.0f;
      this->std_dev_pitch = 0.0f;
      this->std_dev_azimuth = 0.0f;
      this->extended_solution_stat = 0ul;
      this->time_since_update = 0;
      this->imu_error = 0;
      this->imu_type = 0;
      this->imu_status = 0ul;
      this->z_accel_output = 0l;
      this->y_accel_output = 0l;
      this->x_accel_output = 0l;
      this->z_gyro_output = 0l;
      this->y_gyro_output = 0l;
      this->x_gyro_output = 0l;
      this->gps_sat_num = 0;
      this->bd_sat_num = 0;
      this->glo_sat_num = 0;
      this->gal_sat_num = 0;
      this->rtk_delay = 0.0f;
      this->gdop = 0.0f;
      this->remain_float_1 = 0.0f;
      this->remain_float_2 = 0.0f;
      this->remain_double = 0.0;
      this->remain_char_1 = 0;
      this->remain_char_2 = 0;
      this->remain_char_3 = 0;
      this->remain_char_4 = 0;
    }
  }

  explicit ClapData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ins_status = 0ul;
      this->pos_type = 0ul;
      this->latitude = 0.0;
      this->longitude = 0.0;
      this->height = 0.0;
      this->undulation = 0.0f;
      this->north_velocity = 0.0;
      this->east_velocity = 0.0;
      this->up_velocity = 0.0;
      this->roll = 0.0;
      this->pitch = 0.0;
      this->azimuth = 0.0;
      this->std_dev_latitude = 0.0f;
      this->std_dev_longitude = 0.0f;
      this->std_dev_height = 0.0f;
      this->std_dev_north_velocity = 0.0f;
      this->std_dev_east_velocity = 0.0f;
      this->std_dev_up_velocity = 0.0f;
      this->std_dev_roll = 0.0f;
      this->std_dev_pitch = 0.0f;
      this->std_dev_azimuth = 0.0f;
      this->extended_solution_stat = 0ul;
      this->time_since_update = 0;
      this->imu_error = 0;
      this->imu_type = 0;
      this->imu_status = 0ul;
      this->z_accel_output = 0l;
      this->y_accel_output = 0l;
      this->x_accel_output = 0l;
      this->z_gyro_output = 0l;
      this->y_gyro_output = 0l;
      this->x_gyro_output = 0l;
      this->gps_sat_num = 0;
      this->bd_sat_num = 0;
      this->glo_sat_num = 0;
      this->gal_sat_num = 0;
      this->rtk_delay = 0.0f;
      this->gdop = 0.0f;
      this->remain_float_1 = 0.0f;
      this->remain_float_2 = 0.0f;
      this->remain_double = 0.0;
      this->remain_char_1 = 0;
      this->remain_char_2 = 0;
      this->remain_char_3 = 0;
      this->remain_char_4 = 0;
    }
  }

  // field types and members
  using _ins_status_type =
    uint32_t;
  _ins_status_type ins_status;
  using _pos_type_type =
    uint32_t;
  _pos_type_type pos_type;
  using _latitude_type =
    double;
  _latitude_type latitude;
  using _longitude_type =
    double;
  _longitude_type longitude;
  using _height_type =
    double;
  _height_type height;
  using _undulation_type =
    float;
  _undulation_type undulation;
  using _north_velocity_type =
    double;
  _north_velocity_type north_velocity;
  using _east_velocity_type =
    double;
  _east_velocity_type east_velocity;
  using _up_velocity_type =
    double;
  _up_velocity_type up_velocity;
  using _roll_type =
    double;
  _roll_type roll;
  using _pitch_type =
    double;
  _pitch_type pitch;
  using _azimuth_type =
    double;
  _azimuth_type azimuth;
  using _std_dev_latitude_type =
    float;
  _std_dev_latitude_type std_dev_latitude;
  using _std_dev_longitude_type =
    float;
  _std_dev_longitude_type std_dev_longitude;
  using _std_dev_height_type =
    float;
  _std_dev_height_type std_dev_height;
  using _std_dev_north_velocity_type =
    float;
  _std_dev_north_velocity_type std_dev_north_velocity;
  using _std_dev_east_velocity_type =
    float;
  _std_dev_east_velocity_type std_dev_east_velocity;
  using _std_dev_up_velocity_type =
    float;
  _std_dev_up_velocity_type std_dev_up_velocity;
  using _std_dev_roll_type =
    float;
  _std_dev_roll_type std_dev_roll;
  using _std_dev_pitch_type =
    float;
  _std_dev_pitch_type std_dev_pitch;
  using _std_dev_azimuth_type =
    float;
  _std_dev_azimuth_type std_dev_azimuth;
  using _extended_solution_stat_type =
    uint32_t;
  _extended_solution_stat_type extended_solution_stat;
  using _time_since_update_type =
    uint16_t;
  _time_since_update_type time_since_update;
  using _imu_error_type =
    uint8_t;
  _imu_error_type imu_error;
  using _imu_type_type =
    uint8_t;
  _imu_type_type imu_type;
  using _imu_status_type =
    uint32_t;
  _imu_status_type imu_status;
  using _z_accel_output_type =
    int32_t;
  _z_accel_output_type z_accel_output;
  using _y_accel_output_type =
    int32_t;
  _y_accel_output_type y_accel_output;
  using _x_accel_output_type =
    int32_t;
  _x_accel_output_type x_accel_output;
  using _z_gyro_output_type =
    int32_t;
  _z_gyro_output_type z_gyro_output;
  using _y_gyro_output_type =
    int32_t;
  _y_gyro_output_type y_gyro_output;
  using _x_gyro_output_type =
    int32_t;
  _x_gyro_output_type x_gyro_output;
  using _gps_sat_num_type =
    uint8_t;
  _gps_sat_num_type gps_sat_num;
  using _bd_sat_num_type =
    uint8_t;
  _bd_sat_num_type bd_sat_num;
  using _glo_sat_num_type =
    uint8_t;
  _glo_sat_num_type glo_sat_num;
  using _gal_sat_num_type =
    uint8_t;
  _gal_sat_num_type gal_sat_num;
  using _rtk_delay_type =
    float;
  _rtk_delay_type rtk_delay;
  using _gdop_type =
    float;
  _gdop_type gdop;
  using _remain_float_1_type =
    float;
  _remain_float_1_type remain_float_1;
  using _remain_float_2_type =
    float;
  _remain_float_2_type remain_float_2;
  using _remain_double_type =
    double;
  _remain_double_type remain_double;
  using _remain_char_1_type =
    uint8_t;
  _remain_char_1_type remain_char_1;
  using _remain_char_2_type =
    uint8_t;
  _remain_char_2_type remain_char_2;
  using _remain_char_3_type =
    uint8_t;
  _remain_char_3_type remain_char_3;
  using _remain_char_4_type =
    uint8_t;
  _remain_char_4_type remain_char_4;

  // setters for named parameter idiom
  Type & set__ins_status(
    const uint32_t & _arg)
  {
    this->ins_status = _arg;
    return *this;
  }
  Type & set__pos_type(
    const uint32_t & _arg)
  {
    this->pos_type = _arg;
    return *this;
  }
  Type & set__latitude(
    const double & _arg)
  {
    this->latitude = _arg;
    return *this;
  }
  Type & set__longitude(
    const double & _arg)
  {
    this->longitude = _arg;
    return *this;
  }
  Type & set__height(
    const double & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__undulation(
    const float & _arg)
  {
    this->undulation = _arg;
    return *this;
  }
  Type & set__north_velocity(
    const double & _arg)
  {
    this->north_velocity = _arg;
    return *this;
  }
  Type & set__east_velocity(
    const double & _arg)
  {
    this->east_velocity = _arg;
    return *this;
  }
  Type & set__up_velocity(
    const double & _arg)
  {
    this->up_velocity = _arg;
    return *this;
  }
  Type & set__roll(
    const double & _arg)
  {
    this->roll = _arg;
    return *this;
  }
  Type & set__pitch(
    const double & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__azimuth(
    const double & _arg)
  {
    this->azimuth = _arg;
    return *this;
  }
  Type & set__std_dev_latitude(
    const float & _arg)
  {
    this->std_dev_latitude = _arg;
    return *this;
  }
  Type & set__std_dev_longitude(
    const float & _arg)
  {
    this->std_dev_longitude = _arg;
    return *this;
  }
  Type & set__std_dev_height(
    const float & _arg)
  {
    this->std_dev_height = _arg;
    return *this;
  }
  Type & set__std_dev_north_velocity(
    const float & _arg)
  {
    this->std_dev_north_velocity = _arg;
    return *this;
  }
  Type & set__std_dev_east_velocity(
    const float & _arg)
  {
    this->std_dev_east_velocity = _arg;
    return *this;
  }
  Type & set__std_dev_up_velocity(
    const float & _arg)
  {
    this->std_dev_up_velocity = _arg;
    return *this;
  }
  Type & set__std_dev_roll(
    const float & _arg)
  {
    this->std_dev_roll = _arg;
    return *this;
  }
  Type & set__std_dev_pitch(
    const float & _arg)
  {
    this->std_dev_pitch = _arg;
    return *this;
  }
  Type & set__std_dev_azimuth(
    const float & _arg)
  {
    this->std_dev_azimuth = _arg;
    return *this;
  }
  Type & set__extended_solution_stat(
    const uint32_t & _arg)
  {
    this->extended_solution_stat = _arg;
    return *this;
  }
  Type & set__time_since_update(
    const uint16_t & _arg)
  {
    this->time_since_update = _arg;
    return *this;
  }
  Type & set__imu_error(
    const uint8_t & _arg)
  {
    this->imu_error = _arg;
    return *this;
  }
  Type & set__imu_type(
    const uint8_t & _arg)
  {
    this->imu_type = _arg;
    return *this;
  }
  Type & set__imu_status(
    const uint32_t & _arg)
  {
    this->imu_status = _arg;
    return *this;
  }
  Type & set__z_accel_output(
    const int32_t & _arg)
  {
    this->z_accel_output = _arg;
    return *this;
  }
  Type & set__y_accel_output(
    const int32_t & _arg)
  {
    this->y_accel_output = _arg;
    return *this;
  }
  Type & set__x_accel_output(
    const int32_t & _arg)
  {
    this->x_accel_output = _arg;
    return *this;
  }
  Type & set__z_gyro_output(
    const int32_t & _arg)
  {
    this->z_gyro_output = _arg;
    return *this;
  }
  Type & set__y_gyro_output(
    const int32_t & _arg)
  {
    this->y_gyro_output = _arg;
    return *this;
  }
  Type & set__x_gyro_output(
    const int32_t & _arg)
  {
    this->x_gyro_output = _arg;
    return *this;
  }
  Type & set__gps_sat_num(
    const uint8_t & _arg)
  {
    this->gps_sat_num = _arg;
    return *this;
  }
  Type & set__bd_sat_num(
    const uint8_t & _arg)
  {
    this->bd_sat_num = _arg;
    return *this;
  }
  Type & set__glo_sat_num(
    const uint8_t & _arg)
  {
    this->glo_sat_num = _arg;
    return *this;
  }
  Type & set__gal_sat_num(
    const uint8_t & _arg)
  {
    this->gal_sat_num = _arg;
    return *this;
  }
  Type & set__rtk_delay(
    const float & _arg)
  {
    this->rtk_delay = _arg;
    return *this;
  }
  Type & set__gdop(
    const float & _arg)
  {
    this->gdop = _arg;
    return *this;
  }
  Type & set__remain_float_1(
    const float & _arg)
  {
    this->remain_float_1 = _arg;
    return *this;
  }
  Type & set__remain_float_2(
    const float & _arg)
  {
    this->remain_float_2 = _arg;
    return *this;
  }
  Type & set__remain_double(
    const double & _arg)
  {
    this->remain_double = _arg;
    return *this;
  }
  Type & set__remain_char_1(
    const uint8_t & _arg)
  {
    this->remain_char_1 = _arg;
    return *this;
  }
  Type & set__remain_char_2(
    const uint8_t & _arg)
  {
    this->remain_char_2 = _arg;
    return *this;
  }
  Type & set__remain_char_3(
    const uint8_t & _arg)
  {
    this->remain_char_3 = _arg;
    return *this;
  }
  Type & set__remain_char_4(
    const uint8_t & _arg)
  {
    this->remain_char_4 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rbf_clap_b7_msgs::msg::ClapData_<ContainerAllocator> *;
  using ConstRawPtr =
    const rbf_clap_b7_msgs::msg::ClapData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rbf_clap_b7_msgs::msg::ClapData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rbf_clap_b7_msgs::msg::ClapData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rbf_clap_b7_msgs::msg::ClapData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rbf_clap_b7_msgs::msg::ClapData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rbf_clap_b7_msgs::msg::ClapData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rbf_clap_b7_msgs::msg::ClapData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rbf_clap_b7_msgs::msg::ClapData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rbf_clap_b7_msgs::msg::ClapData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rbf_clap_b7_msgs__msg__ClapData
    std::shared_ptr<rbf_clap_b7_msgs::msg::ClapData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rbf_clap_b7_msgs__msg__ClapData
    std::shared_ptr<rbf_clap_b7_msgs::msg::ClapData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ClapData_ & other) const
  {
    if (this->ins_status != other.ins_status) {
      return false;
    }
    if (this->pos_type != other.pos_type) {
      return false;
    }
    if (this->latitude != other.latitude) {
      return false;
    }
    if (this->longitude != other.longitude) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->undulation != other.undulation) {
      return false;
    }
    if (this->north_velocity != other.north_velocity) {
      return false;
    }
    if (this->east_velocity != other.east_velocity) {
      return false;
    }
    if (this->up_velocity != other.up_velocity) {
      return false;
    }
    if (this->roll != other.roll) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->azimuth != other.azimuth) {
      return false;
    }
    if (this->std_dev_latitude != other.std_dev_latitude) {
      return false;
    }
    if (this->std_dev_longitude != other.std_dev_longitude) {
      return false;
    }
    if (this->std_dev_height != other.std_dev_height) {
      return false;
    }
    if (this->std_dev_north_velocity != other.std_dev_north_velocity) {
      return false;
    }
    if (this->std_dev_east_velocity != other.std_dev_east_velocity) {
      return false;
    }
    if (this->std_dev_up_velocity != other.std_dev_up_velocity) {
      return false;
    }
    if (this->std_dev_roll != other.std_dev_roll) {
      return false;
    }
    if (this->std_dev_pitch != other.std_dev_pitch) {
      return false;
    }
    if (this->std_dev_azimuth != other.std_dev_azimuth) {
      return false;
    }
    if (this->extended_solution_stat != other.extended_solution_stat) {
      return false;
    }
    if (this->time_since_update != other.time_since_update) {
      return false;
    }
    if (this->imu_error != other.imu_error) {
      return false;
    }
    if (this->imu_type != other.imu_type) {
      return false;
    }
    if (this->imu_status != other.imu_status) {
      return false;
    }
    if (this->z_accel_output != other.z_accel_output) {
      return false;
    }
    if (this->y_accel_output != other.y_accel_output) {
      return false;
    }
    if (this->x_accel_output != other.x_accel_output) {
      return false;
    }
    if (this->z_gyro_output != other.z_gyro_output) {
      return false;
    }
    if (this->y_gyro_output != other.y_gyro_output) {
      return false;
    }
    if (this->x_gyro_output != other.x_gyro_output) {
      return false;
    }
    if (this->gps_sat_num != other.gps_sat_num) {
      return false;
    }
    if (this->bd_sat_num != other.bd_sat_num) {
      return false;
    }
    if (this->glo_sat_num != other.glo_sat_num) {
      return false;
    }
    if (this->gal_sat_num != other.gal_sat_num) {
      return false;
    }
    if (this->rtk_delay != other.rtk_delay) {
      return false;
    }
    if (this->gdop != other.gdop) {
      return false;
    }
    if (this->remain_float_1 != other.remain_float_1) {
      return false;
    }
    if (this->remain_float_2 != other.remain_float_2) {
      return false;
    }
    if (this->remain_double != other.remain_double) {
      return false;
    }
    if (this->remain_char_1 != other.remain_char_1) {
      return false;
    }
    if (this->remain_char_2 != other.remain_char_2) {
      return false;
    }
    if (this->remain_char_3 != other.remain_char_3) {
      return false;
    }
    if (this->remain_char_4 != other.remain_char_4) {
      return false;
    }
    return true;
  }
  bool operator!=(const ClapData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ClapData_

// alias to use template instance with default allocator
using ClapData =
  rbf_clap_b7_msgs::msg::ClapData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rbf_clap_b7_msgs

#endif  // RBF_CLAP_B7_MSGS__MSG__DETAIL__CLAP_DATA__STRUCT_HPP_
