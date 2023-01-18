// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rbf_clap_b7_msgs:msg/ClapData.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "rbf_clap_b7_msgs/msg/detail/clap_data__struct.h"
#include "rbf_clap_b7_msgs/msg/detail/clap_data__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool rbf_clap_b7_msgs__msg__clap_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[41];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("rbf_clap_b7_msgs.msg._clap_data.ClapData", full_classname_dest, 40) == 0);
  }
  rbf_clap_b7_msgs__msg__ClapData * ros_message = _ros_message;
  {  // ins_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "ins_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ins_status = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // pos_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pos_type = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // latitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "latitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->latitude = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // longitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "longitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->longitude = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // height
    PyObject * field = PyObject_GetAttrString(_pymsg, "height");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->height = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // undulation
    PyObject * field = PyObject_GetAttrString(_pymsg, "undulation");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->undulation = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // north_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "north_velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->north_velocity = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // east_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "east_velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->east_velocity = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // up_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "up_velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->up_velocity = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // roll
    PyObject * field = PyObject_GetAttrString(_pymsg, "roll");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->roll = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pitch
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitch");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pitch = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // azimuth
    PyObject * field = PyObject_GetAttrString(_pymsg, "azimuth");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->azimuth = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // std_dev_latitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "std_dev_latitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->std_dev_latitude = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // std_dev_longitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "std_dev_longitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->std_dev_longitude = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // std_dev_height
    PyObject * field = PyObject_GetAttrString(_pymsg, "std_dev_height");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->std_dev_height = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // std_dev_north_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "std_dev_north_velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->std_dev_north_velocity = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // std_dev_east_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "std_dev_east_velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->std_dev_east_velocity = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // std_dev_up_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "std_dev_up_velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->std_dev_up_velocity = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // std_dev_roll
    PyObject * field = PyObject_GetAttrString(_pymsg, "std_dev_roll");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->std_dev_roll = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // std_dev_pitch
    PyObject * field = PyObject_GetAttrString(_pymsg, "std_dev_pitch");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->std_dev_pitch = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // std_dev_azimuth
    PyObject * field = PyObject_GetAttrString(_pymsg, "std_dev_azimuth");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->std_dev_azimuth = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // extended_solution_stat
    PyObject * field = PyObject_GetAttrString(_pymsg, "extended_solution_stat");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->extended_solution_stat = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // time_since_update
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_since_update");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->time_since_update = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // imu_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "imu_error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->imu_error = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // imu_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "imu_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->imu_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // z_accel_output
    PyObject * field = PyObject_GetAttrString(_pymsg, "z_accel_output");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->z_accel_output = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // y_accel_output
    PyObject * field = PyObject_GetAttrString(_pymsg, "y_accel_output");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->y_accel_output = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // x_accel_output
    PyObject * field = PyObject_GetAttrString(_pymsg, "x_accel_output");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->x_accel_output = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // z_gyro_output
    PyObject * field = PyObject_GetAttrString(_pymsg, "z_gyro_output");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->z_gyro_output = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // y_gyro_output
    PyObject * field = PyObject_GetAttrString(_pymsg, "y_gyro_output");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->y_gyro_output = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // x_gyro_output
    PyObject * field = PyObject_GetAttrString(_pymsg, "x_gyro_output");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->x_gyro_output = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // gps_sat_num
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps_sat_num");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gps_sat_num = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // bd_sat_num
    PyObject * field = PyObject_GetAttrString(_pymsg, "bd_sat_num");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bd_sat_num = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // glo_sat_num
    PyObject * field = PyObject_GetAttrString(_pymsg, "glo_sat_num");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->glo_sat_num = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // gal_sat_num
    PyObject * field = PyObject_GetAttrString(_pymsg, "gal_sat_num");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gal_sat_num = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // rtk_delay
    PyObject * field = PyObject_GetAttrString(_pymsg, "rtk_delay");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rtk_delay = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gdop
    PyObject * field = PyObject_GetAttrString(_pymsg, "gdop");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gdop = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // remain_float_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "remain_float_1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->remain_float_1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // remain_float_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "remain_float_2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->remain_float_2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // remain_double
    PyObject * field = PyObject_GetAttrString(_pymsg, "remain_double");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->remain_double = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // remain_char_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "remain_char_1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->remain_char_1 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // remain_char_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "remain_char_2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->remain_char_2 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // remain_char_3
    PyObject * field = PyObject_GetAttrString(_pymsg, "remain_char_3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->remain_char_3 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // remain_char_4
    PyObject * field = PyObject_GetAttrString(_pymsg, "remain_char_4");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->remain_char_4 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rbf_clap_b7_msgs__msg__clap_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ClapData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rbf_clap_b7_msgs.msg._clap_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ClapData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rbf_clap_b7_msgs__msg__ClapData * ros_message = (rbf_clap_b7_msgs__msg__ClapData *)raw_ros_message;
  {  // ins_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ins_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ins_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->pos_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // latitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->latitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "latitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // longitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->longitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "longitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // height
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->height);
    {
      int rc = PyObject_SetAttrString(_pymessage, "height", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // undulation
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->undulation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "undulation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // north_velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->north_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "north_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // east_velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->east_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "east_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // up_velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->up_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "up_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // roll
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->roll);
    {
      int rc = PyObject_SetAttrString(_pymessage, "roll", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pitch
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pitch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // azimuth
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->azimuth);
    {
      int rc = PyObject_SetAttrString(_pymessage, "azimuth", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // std_dev_latitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->std_dev_latitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "std_dev_latitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // std_dev_longitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->std_dev_longitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "std_dev_longitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // std_dev_height
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->std_dev_height);
    {
      int rc = PyObject_SetAttrString(_pymessage, "std_dev_height", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // std_dev_north_velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->std_dev_north_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "std_dev_north_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // std_dev_east_velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->std_dev_east_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "std_dev_east_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // std_dev_up_velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->std_dev_up_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "std_dev_up_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // std_dev_roll
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->std_dev_roll);
    {
      int rc = PyObject_SetAttrString(_pymessage, "std_dev_roll", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // std_dev_pitch
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->std_dev_pitch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "std_dev_pitch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // std_dev_azimuth
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->std_dev_azimuth);
    {
      int rc = PyObject_SetAttrString(_pymessage, "std_dev_azimuth", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // extended_solution_stat
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->extended_solution_stat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "extended_solution_stat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time_since_update
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->time_since_update);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_since_update", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imu_error
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->imu_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imu_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imu_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->imu_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imu_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // z_accel_output
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->z_accel_output);
    {
      int rc = PyObject_SetAttrString(_pymessage, "z_accel_output", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y_accel_output
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->y_accel_output);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y_accel_output", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x_accel_output
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->x_accel_output);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x_accel_output", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // z_gyro_output
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->z_gyro_output);
    {
      int rc = PyObject_SetAttrString(_pymessage, "z_gyro_output", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y_gyro_output
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->y_gyro_output);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y_gyro_output", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x_gyro_output
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->x_gyro_output);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x_gyro_output", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gps_sat_num
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->gps_sat_num);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps_sat_num", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bd_sat_num
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->bd_sat_num);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bd_sat_num", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // glo_sat_num
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->glo_sat_num);
    {
      int rc = PyObject_SetAttrString(_pymessage, "glo_sat_num", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gal_sat_num
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->gal_sat_num);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gal_sat_num", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rtk_delay
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rtk_delay);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rtk_delay", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gdop
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gdop);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gdop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // remain_float_1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->remain_float_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "remain_float_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // remain_float_2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->remain_float_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "remain_float_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // remain_double
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->remain_double);
    {
      int rc = PyObject_SetAttrString(_pymessage, "remain_double", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // remain_char_1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->remain_char_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "remain_char_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // remain_char_2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->remain_char_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "remain_char_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // remain_char_3
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->remain_char_3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "remain_char_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // remain_char_4
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->remain_char_4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "remain_char_4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
