//
// Created by arslan on 22.05.2022.
//

#pragma once

#include <chrono>
#include <functional>
#include <memory>
#include <string>
#include <sstream>
#include <cstring>

#include <eigen3/Eigen/Core>
#include <eigen3/Eigen/Geometry>
#include <sensor_msgs/Imu.h>
#include <sensor_msgs/NavSatFix.h>
#include <tf/tf.h>

#include "TermiosSerial.h"
#include "AsyncSerial.h"

#include <ros/ros.h>
#include <rbf_clap_b7_driver/ClapData.h>
#include <ntrip/ntrip_client.h>
#include "ClapB7BinaryParser.h"

#define ACCEL_SCALE_FACTOR (400 / (pow(2, 31)))
#define GYRO_SCALE_FACTOR (2160 / (pow(2, 31)))

extern int freq_rawimu;
extern int freq_inspvax;
const int g_ = 9.81;

class ClapB7Driver
{
public:
    ClapB7Driver(ros::NodeHandle &nh);

    ~ClapB7Driver() {
        serial_boost.close();
    }

    void serial_receive_callback(const char *data, unsigned int len);

private:
    void timer_callback();


    void pub_GnssData();
    void pub_ClapB7Data();
    void publish_standart_msgs();



    std::string clap_data_topic_;
    std::string imu_topic_;
    std::string serial_name_;
    std::string parse_type_;

    long baud_rate_;

    CallbackAsyncSerial serial_boost;

    

    std::string ntrip_server_ip_;
    std::string username_;
    std::string password_;
    std::string mount_point_;
    int ntrip_port_;

    ros::Publisher pub_clap_data_;
    ros::Publisher pub_imu_;
    ros::Publisher pub_nav_sat_fix_;

    ClapB7Controller clapB7Controller;

    int freq = 0;

    libntrip::NtripClient ntripClient;
    int NTRIP_client_start();
    int t_size;
};
