//
// Created by arslan on 22.05.2022.
//
#include "ClapB7Driver.hpp"

using namespace std;

ClapB7Driver::ClapB7Driver(ros::NodeHandle &nh):
    serial_boost("/dev/ttyUSB0", 460800)
{

    pub_clap_data_ = nh.advertise<rbf_clap_b7_driver::ClapData>("/clap_b7_data", 10);
    pub_imu_ = nh.advertise<sensor_msgs::Imu>("/raw_imu", 10);
    pub_nav_sat_fix_ = nh.advertise<sensor_msgs::NavSatFix>("/nav_sat_fix", 10);

    serial_boost.setCallback(bind(&ClapB7Driver::serial_receive_callback, this, std::placeholders::_1, std::placeholders::_2));
    ClapB7Init(&clapB7Controller, bind(&ClapB7Driver::pub_ClapB7Data, this));
//    NTRIP_client_start();
}

template <typename Type>
Type stringToNum(const string &str)
{
    istringstream iss(str);
    Type num;
    iss >> num;
    return num;
}

template <typename Type>
string numToString (const Type &num)
{
    stringstream ss;
    string s;

    ss << num;
    s = ss.str();
    return s;
}

void ClapB7Driver::serial_receive_callback(const char *data, unsigned int len)
{
  
    ClapB7Parser(&clapB7Controller, reinterpret_cast<const uint8_t *>(data), len);
}


void ClapB7Driver::pub_ClapB7Data() {

    rbf_clap_b7_driver::ClapData msg_clap_data;

    msg_clap_data.ins_status = static_cast<uint32_t>(clapB7Controller.clapData.ins_status);
    msg_clap_data.pos_type = static_cast<uint32_t>(clapB7Controller.clapData.pos_type);

    msg_clap_data.latitude = static_cast<double>(clapB7Controller.clapData.latitude);
    msg_clap_data.longitude = static_cast<double>(clapB7Controller.clapData.longitude);

    msg_clap_data.height = static_cast<double>(clapB7Controller.clapData.height);

    msg_clap_data.undulation = static_cast<float>(clapB7Controller.clapData.undulation);

    msg_clap_data.north_velocity = static_cast<double>(clapB7Controller.clapData.north_velocity);
    msg_clap_data.east_velocity = static_cast<double>(clapB7Controller.clapData.east_velocity);
    msg_clap_data.up_velocity = static_cast<double>(clapB7Controller.clapData.up_velocity);

    msg_clap_data.roll = static_cast<double>(clapB7Controller.clapData.roll);
    msg_clap_data.pitch = static_cast<double>(clapB7Controller.clapData.pitch);
    msg_clap_data.azimuth = static_cast<double>(clapB7Controller.clapData.azimuth);

    msg_clap_data.std_dev_latitude = static_cast<float>(clapB7Controller.clapData.std_dev_latitude);
    msg_clap_data.std_dev_longitude = static_cast<float>(clapB7Controller.clapData.std_dev_longitude);

    msg_clap_data.std_dev_height = static_cast<float>(clapB7Controller.clapData.std_dev_height);

    msg_clap_data.std_dev_north_velocity = static_cast<float>(clapB7Controller.clapData.std_dev_north_velocity);
    msg_clap_data.std_dev_east_velocity = static_cast<float>(clapB7Controller.clapData.std_dev_east_velocity);
    msg_clap_data.std_dev_up_velocity = static_cast<float>(clapB7Controller.clapData.std_dev_up_velocity);

    msg_clap_data.std_dev_roll = static_cast<float>(clapB7Controller.clapData.std_dev_roll);
    msg_clap_data.std_dev_pitch = static_cast<float>(clapB7Controller.clapData.std_dev_pitch);
    msg_clap_data.std_dev_azimuth = static_cast<float>(clapB7Controller.clapData.std_dev_azimuth);

    msg_clap_data.extended_solution_stat = static_cast<uint32_t>(clapB7Controller.clapData.extended_solution_stat);
    msg_clap_data.time_since_update = static_cast<uint16_t>(clapB7Controller.clapData.time_since_update);

    msg_clap_data.imu_status = static_cast<uint8_t>(clapB7Controller.clap_RawimuMsgs.imu_status);

    msg_clap_data.z_accel_output = static_cast<int32_t>(clapB7Controller.clap_RawimuMsgs.z_accel_output * ACCEL_SCALE_FACTOR);
    msg_clap_data.y_accel_output = static_cast<int32_t>(clapB7Controller.clap_RawimuMsgs.y_accel_output * (- ACCEL_SCALE_FACTOR));
    msg_clap_data.x_accel_output = static_cast<int32_t>(clapB7Controller.clap_RawimuMsgs.x_accel_output * ACCEL_SCALE_FACTOR);

    msg_clap_data.z_gyro_output = static_cast<int32_t>(clapB7Controller.clap_RawimuMsgs.x_gyro_output * GYRO_SCALE_FACTOR);
    msg_clap_data.y_gyro_output = static_cast<int32_t>(clapB7Controller.clap_RawimuMsgs.y_gyro_output * ( - GYRO_SCALE_FACTOR));
    msg_clap_data.x_gyro_output = static_cast<int32_t>(clapB7Controller.clap_RawimuMsgs.z_gyro_output * GYRO_SCALE_FACTOR);

    pub_clap_data_.publish(msg_clap_data);

    publish_standart_msgs();
}
int ClapB7Driver::NTRIP_client_start()
{
  ntripClient.Init(ntrip_server_ip_, ntrip_port_, username_, password_, mount_point_);
  ntripClient.OnReceived([this](const char *buffer, int size)
                         {

                             serial_boost.write(buffer, size);

                             t_size += size;

                             std::cout << "NTRIP:" << t_size << std::endl; });

  ntripClient.set_location(41.018893949, 28.890924848);

  ntripClient.set_report_interval(0.001);
  ntripClient.Run();

  return 0;
}

void ClapB7Driver::publish_standart_msgs(){
    sensor_msgs::Imu msg_imu;
    sensor_msgs::NavSatFix msg_nav_sat_fix;

        // GNSS NavSatFix Message
    msg_nav_sat_fix.header.frame_id = static_cast<std::string>("std_msgs_frame");
    msg_nav_sat_fix.header.stamp.sec = static_cast<int32_t>(ros::Time::now().toSec());
    msg_nav_sat_fix.header.stamp.nsec = static_cast<uint32_t>(ros::Time::now().toNSec());

    msg_nav_sat_fix.status.status = 0;

    msg_nav_sat_fix.latitude = static_cast<double>(clapB7Controller.clapData.latitude);
    msg_nav_sat_fix.longitude = static_cast<double>(clapB7Controller.clapData.longitude);
    msg_nav_sat_fix.altitude = static_cast<double>(clapB7Controller.clapData.height);

    boost::array<double, 9> pos_cov{0};
    pos_cov[0] = clapB7Controller.clapData.std_dev_latitude;
    pos_cov[4] = clapB7Controller.clapData.std_dev_longitude;
    pos_cov[8] = clapB7Controller.clapData.std_dev_height;

    // msg_nav_sat_fix.position_covariance = static_cast<const std::array<double,9>>(pos_cov);
    msg_nav_sat_fix.position_covariance = pos_cov;
    msg_imu.header.frame_id = static_cast<std::string>("std_msgs_frame");
    msg_imu.header.stamp.sec = static_cast<int32_t>(ros::Time::now().toSec());
    msg_imu.header.stamp.nsec = static_cast<uint32_t>(ros::Time::now().toNSec());

    tf::Quaternion quart_orient;
    quart_orient.setRPY(clapB7Controller.clapData.roll, clapB7Controller.clapData.pitch, clapB7Controller.clapData.azimuth);
    quart_orient.normalize();

    msg_imu.orientation.w = static_cast<double>(quart_orient.getW());
    msg_imu.orientation.x = static_cast<double>(quart_orient.getX());
    msg_imu.orientation.y = static_cast<double>(quart_orient.getY());
    msg_imu.orientation.z = static_cast<double>(quart_orient.getZ());

    msg_imu.angular_velocity.x = static_cast<double>(clapB7Controller.clap_RawimuMsgs.x_gyro_output * (M_PI / 180) * GYRO_SCALE_FACTOR);
    msg_imu.angular_velocity.y = static_cast<double>(clapB7Controller.clap_RawimuMsgs.y_gyro_output * (M_PI / 180) * GYRO_SCALE_FACTOR);
    msg_imu.angular_velocity.z = static_cast<double>(clapB7Controller.clap_RawimuMsgs.z_gyro_output * (M_PI / 180) * GYRO_SCALE_FACTOR);

    msg_imu.linear_acceleration.x = static_cast<double>(clapB7Controller.clap_RawimuMsgs.x_accel_output * g_ * ACCEL_SCALE_FACTOR);
    msg_imu.linear_acceleration.y = static_cast<double>(clapB7Controller.clap_RawimuMsgs.y_accel_output * g_ * ACCEL_SCALE_FACTOR);
    msg_imu.linear_acceleration.z = static_cast<double>(clapB7Controller.clap_RawimuMsgs.z_accel_output * g_ * ACCEL_SCALE_FACTOR);

    pub_imu_.publish(msg_imu);
    pub_nav_sat_fix_.publish(msg_nav_sat_fix);
}