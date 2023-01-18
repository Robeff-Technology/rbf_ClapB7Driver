# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rbf_clap_b7_msgs:msg/ClapData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ClapData(type):
    """Metaclass of message 'ClapData'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('rbf_clap_b7_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rbf_clap_b7_msgs.msg.ClapData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__clap_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__clap_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__clap_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__clap_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__clap_data

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ClapData(metaclass=Metaclass_ClapData):
    """Message class 'ClapData'."""

    __slots__ = [
        '_ins_status',
        '_pos_type',
        '_latitude',
        '_longitude',
        '_height',
        '_undulation',
        '_north_velocity',
        '_east_velocity',
        '_up_velocity',
        '_roll',
        '_pitch',
        '_azimuth',
        '_std_dev_latitude',
        '_std_dev_longitude',
        '_std_dev_height',
        '_std_dev_north_velocity',
        '_std_dev_east_velocity',
        '_std_dev_up_velocity',
        '_std_dev_roll',
        '_std_dev_pitch',
        '_std_dev_azimuth',
        '_extended_solution_stat',
        '_time_since_update',
        '_imu_error',
        '_imu_type',
        '_z_accel_output',
        '_y_accel_output',
        '_x_accel_output',
        '_z_gyro_output',
        '_y_gyro_output',
        '_x_gyro_output',
        '_gps_sat_num',
        '_bd_sat_num',
        '_glo_sat_num',
        '_gal_sat_num',
        '_rtk_delay',
        '_gdop',
        '_remain_float_1',
        '_remain_float_2',
        '_remain_double',
        '_remain_char_1',
        '_remain_char_2',
        '_remain_char_3',
        '_remain_char_4',
    ]

    _fields_and_field_types = {
        'ins_status': 'uint32',
        'pos_type': 'uint32',
        'latitude': 'double',
        'longitude': 'double',
        'height': 'double',
        'undulation': 'float',
        'north_velocity': 'double',
        'east_velocity': 'double',
        'up_velocity': 'double',
        'roll': 'double',
        'pitch': 'double',
        'azimuth': 'double',
        'std_dev_latitude': 'float',
        'std_dev_longitude': 'float',
        'std_dev_height': 'float',
        'std_dev_north_velocity': 'float',
        'std_dev_east_velocity': 'float',
        'std_dev_up_velocity': 'float',
        'std_dev_roll': 'float',
        'std_dev_pitch': 'float',
        'std_dev_azimuth': 'float',
        'extended_solution_stat': 'uint32',
        'time_since_update': 'uint16',
        'imu_error': 'uint8',
        'imu_type': 'uint8',
        'z_accel_output': 'int32',
        'y_accel_output': 'int32',
        'x_accel_output': 'int32',
        'z_gyro_output': 'int32',
        'y_gyro_output': 'int32',
        'x_gyro_output': 'int32',
        'gps_sat_num': 'uint8',
        'bd_sat_num': 'uint8',
        'glo_sat_num': 'uint8',
        'gal_sat_num': 'uint8',
        'rtk_delay': 'float',
        'gdop': 'float',
        'remain_float_1': 'float',
        'remain_float_2': 'float',
        'remain_double': 'double',
        'remain_char_1': 'uint8',
        'remain_char_2': 'uint8',
        'remain_char_3': 'uint8',
        'remain_char_4': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.ins_status = kwargs.get('ins_status', int())
        self.pos_type = kwargs.get('pos_type', int())
        self.latitude = kwargs.get('latitude', float())
        self.longitude = kwargs.get('longitude', float())
        self.height = kwargs.get('height', float())
        self.undulation = kwargs.get('undulation', float())
        self.north_velocity = kwargs.get('north_velocity', float())
        self.east_velocity = kwargs.get('east_velocity', float())
        self.up_velocity = kwargs.get('up_velocity', float())
        self.roll = kwargs.get('roll', float())
        self.pitch = kwargs.get('pitch', float())
        self.azimuth = kwargs.get('azimuth', float())
        self.std_dev_latitude = kwargs.get('std_dev_latitude', float())
        self.std_dev_longitude = kwargs.get('std_dev_longitude', float())
        self.std_dev_height = kwargs.get('std_dev_height', float())
        self.std_dev_north_velocity = kwargs.get('std_dev_north_velocity', float())
        self.std_dev_east_velocity = kwargs.get('std_dev_east_velocity', float())
        self.std_dev_up_velocity = kwargs.get('std_dev_up_velocity', float())
        self.std_dev_roll = kwargs.get('std_dev_roll', float())
        self.std_dev_pitch = kwargs.get('std_dev_pitch', float())
        self.std_dev_azimuth = kwargs.get('std_dev_azimuth', float())
        self.extended_solution_stat = kwargs.get('extended_solution_stat', int())
        self.time_since_update = kwargs.get('time_since_update', int())
        self.imu_error = kwargs.get('imu_error', int())
        self.imu_type = kwargs.get('imu_type', int())
        self.z_accel_output = kwargs.get('z_accel_output', int())
        self.y_accel_output = kwargs.get('y_accel_output', int())
        self.x_accel_output = kwargs.get('x_accel_output', int())
        self.z_gyro_output = kwargs.get('z_gyro_output', int())
        self.y_gyro_output = kwargs.get('y_gyro_output', int())
        self.x_gyro_output = kwargs.get('x_gyro_output', int())
        self.gps_sat_num = kwargs.get('gps_sat_num', int())
        self.bd_sat_num = kwargs.get('bd_sat_num', int())
        self.glo_sat_num = kwargs.get('glo_sat_num', int())
        self.gal_sat_num = kwargs.get('gal_sat_num', int())
        self.rtk_delay = kwargs.get('rtk_delay', float())
        self.gdop = kwargs.get('gdop', float())
        self.remain_float_1 = kwargs.get('remain_float_1', float())
        self.remain_float_2 = kwargs.get('remain_float_2', float())
        self.remain_double = kwargs.get('remain_double', float())
        self.remain_char_1 = kwargs.get('remain_char_1', int())
        self.remain_char_2 = kwargs.get('remain_char_2', int())
        self.remain_char_3 = kwargs.get('remain_char_3', int())
        self.remain_char_4 = kwargs.get('remain_char_4', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.ins_status != other.ins_status:
            return False
        if self.pos_type != other.pos_type:
            return False
        if self.latitude != other.latitude:
            return False
        if self.longitude != other.longitude:
            return False
        if self.height != other.height:
            return False
        if self.undulation != other.undulation:
            return False
        if self.north_velocity != other.north_velocity:
            return False
        if self.east_velocity != other.east_velocity:
            return False
        if self.up_velocity != other.up_velocity:
            return False
        if self.roll != other.roll:
            return False
        if self.pitch != other.pitch:
            return False
        if self.azimuth != other.azimuth:
            return False
        if self.std_dev_latitude != other.std_dev_latitude:
            return False
        if self.std_dev_longitude != other.std_dev_longitude:
            return False
        if self.std_dev_height != other.std_dev_height:
            return False
        if self.std_dev_north_velocity != other.std_dev_north_velocity:
            return False
        if self.std_dev_east_velocity != other.std_dev_east_velocity:
            return False
        if self.std_dev_up_velocity != other.std_dev_up_velocity:
            return False
        if self.std_dev_roll != other.std_dev_roll:
            return False
        if self.std_dev_pitch != other.std_dev_pitch:
            return False
        if self.std_dev_azimuth != other.std_dev_azimuth:
            return False
        if self.extended_solution_stat != other.extended_solution_stat:
            return False
        if self.time_since_update != other.time_since_update:
            return False
        if self.imu_error != other.imu_error:
            return False
        if self.imu_type != other.imu_type:
            return False
        if self.z_accel_output != other.z_accel_output:
            return False
        if self.y_accel_output != other.y_accel_output:
            return False
        if self.x_accel_output != other.x_accel_output:
            return False
        if self.z_gyro_output != other.z_gyro_output:
            return False
        if self.y_gyro_output != other.y_gyro_output:
            return False
        if self.x_gyro_output != other.x_gyro_output:
            return False
        if self.gps_sat_num != other.gps_sat_num:
            return False
        if self.bd_sat_num != other.bd_sat_num:
            return False
        if self.glo_sat_num != other.glo_sat_num:
            return False
        if self.gal_sat_num != other.gal_sat_num:
            return False
        if self.rtk_delay != other.rtk_delay:
            return False
        if self.gdop != other.gdop:
            return False
        if self.remain_float_1 != other.remain_float_1:
            return False
        if self.remain_float_2 != other.remain_float_2:
            return False
        if self.remain_double != other.remain_double:
            return False
        if self.remain_char_1 != other.remain_char_1:
            return False
        if self.remain_char_2 != other.remain_char_2:
            return False
        if self.remain_char_3 != other.remain_char_3:
            return False
        if self.remain_char_4 != other.remain_char_4:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def ins_status(self):
        """Message field 'ins_status'."""
        return self._ins_status

    @ins_status.setter
    def ins_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ins_status' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'ins_status' field must be an unsigned integer in [0, 4294967295]"
        self._ins_status = value

    @property
    def pos_type(self):
        """Message field 'pos_type'."""
        return self._pos_type

    @pos_type.setter
    def pos_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pos_type' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'pos_type' field must be an unsigned integer in [0, 4294967295]"
        self._pos_type = value

    @property
    def latitude(self):
        """Message field 'latitude'."""
        return self._latitude

    @latitude.setter
    def latitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'latitude' field must be of type 'float'"
        self._latitude = value

    @property
    def longitude(self):
        """Message field 'longitude'."""
        return self._longitude

    @longitude.setter
    def longitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'longitude' field must be of type 'float'"
        self._longitude = value

    @property
    def height(self):
        """Message field 'height'."""
        return self._height

    @height.setter
    def height(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'height' field must be of type 'float'"
        self._height = value

    @property
    def undulation(self):
        """Message field 'undulation'."""
        return self._undulation

    @undulation.setter
    def undulation(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'undulation' field must be of type 'float'"
        self._undulation = value

    @property
    def north_velocity(self):
        """Message field 'north_velocity'."""
        return self._north_velocity

    @north_velocity.setter
    def north_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'north_velocity' field must be of type 'float'"
        self._north_velocity = value

    @property
    def east_velocity(self):
        """Message field 'east_velocity'."""
        return self._east_velocity

    @east_velocity.setter
    def east_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'east_velocity' field must be of type 'float'"
        self._east_velocity = value

    @property
    def up_velocity(self):
        """Message field 'up_velocity'."""
        return self._up_velocity

    @up_velocity.setter
    def up_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'up_velocity' field must be of type 'float'"
        self._up_velocity = value

    @property
    def roll(self):
        """Message field 'roll'."""
        return self._roll

    @roll.setter
    def roll(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'roll' field must be of type 'float'"
        self._roll = value

    @property
    def pitch(self):
        """Message field 'pitch'."""
        return self._pitch

    @pitch.setter
    def pitch(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch' field must be of type 'float'"
        self._pitch = value

    @property
    def azimuth(self):
        """Message field 'azimuth'."""
        return self._azimuth

    @azimuth.setter
    def azimuth(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'azimuth' field must be of type 'float'"
        self._azimuth = value

    @property
    def std_dev_latitude(self):
        """Message field 'std_dev_latitude'."""
        return self._std_dev_latitude

    @std_dev_latitude.setter
    def std_dev_latitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'std_dev_latitude' field must be of type 'float'"
        self._std_dev_latitude = value

    @property
    def std_dev_longitude(self):
        """Message field 'std_dev_longitude'."""
        return self._std_dev_longitude

    @std_dev_longitude.setter
    def std_dev_longitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'std_dev_longitude' field must be of type 'float'"
        self._std_dev_longitude = value

    @property
    def std_dev_height(self):
        """Message field 'std_dev_height'."""
        return self._std_dev_height

    @std_dev_height.setter
    def std_dev_height(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'std_dev_height' field must be of type 'float'"
        self._std_dev_height = value

    @property
    def std_dev_north_velocity(self):
        """Message field 'std_dev_north_velocity'."""
        return self._std_dev_north_velocity

    @std_dev_north_velocity.setter
    def std_dev_north_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'std_dev_north_velocity' field must be of type 'float'"
        self._std_dev_north_velocity = value

    @property
    def std_dev_east_velocity(self):
        """Message field 'std_dev_east_velocity'."""
        return self._std_dev_east_velocity

    @std_dev_east_velocity.setter
    def std_dev_east_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'std_dev_east_velocity' field must be of type 'float'"
        self._std_dev_east_velocity = value

    @property
    def std_dev_up_velocity(self):
        """Message field 'std_dev_up_velocity'."""
        return self._std_dev_up_velocity

    @std_dev_up_velocity.setter
    def std_dev_up_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'std_dev_up_velocity' field must be of type 'float'"
        self._std_dev_up_velocity = value

    @property
    def std_dev_roll(self):
        """Message field 'std_dev_roll'."""
        return self._std_dev_roll

    @std_dev_roll.setter
    def std_dev_roll(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'std_dev_roll' field must be of type 'float'"
        self._std_dev_roll = value

    @property
    def std_dev_pitch(self):
        """Message field 'std_dev_pitch'."""
        return self._std_dev_pitch

    @std_dev_pitch.setter
    def std_dev_pitch(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'std_dev_pitch' field must be of type 'float'"
        self._std_dev_pitch = value

    @property
    def std_dev_azimuth(self):
        """Message field 'std_dev_azimuth'."""
        return self._std_dev_azimuth

    @std_dev_azimuth.setter
    def std_dev_azimuth(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'std_dev_azimuth' field must be of type 'float'"
        self._std_dev_azimuth = value

    @property
    def extended_solution_stat(self):
        """Message field 'extended_solution_stat'."""
        return self._extended_solution_stat

    @extended_solution_stat.setter
    def extended_solution_stat(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'extended_solution_stat' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'extended_solution_stat' field must be an unsigned integer in [0, 4294967295]"
        self._extended_solution_stat = value

    @property
    def time_since_update(self):
        """Message field 'time_since_update'."""
        return self._time_since_update

    @time_since_update.setter
    def time_since_update(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'time_since_update' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'time_since_update' field must be an unsigned integer in [0, 65535]"
        self._time_since_update = value

    @property
    def imu_error(self):
        """Message field 'imu_error'."""
        return self._imu_error

    @imu_error.setter
    def imu_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'imu_error' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'imu_error' field must be an unsigned integer in [0, 255]"
        self._imu_error = value

    @property
    def imu_type(self):
        """Message field 'imu_type'."""
        return self._imu_type

    @imu_type.setter
    def imu_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'imu_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'imu_type' field must be an unsigned integer in [0, 255]"
        self._imu_type = value

    @property
    def z_accel_output(self):
        """Message field 'z_accel_output'."""
        return self._z_accel_output

    @z_accel_output.setter
    def z_accel_output(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'z_accel_output' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'z_accel_output' field must be an integer in [-2147483648, 2147483647]"
        self._z_accel_output = value

    @property
    def y_accel_output(self):
        """Message field 'y_accel_output'."""
        return self._y_accel_output

    @y_accel_output.setter
    def y_accel_output(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'y_accel_output' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'y_accel_output' field must be an integer in [-2147483648, 2147483647]"
        self._y_accel_output = value

    @property
    def x_accel_output(self):
        """Message field 'x_accel_output'."""
        return self._x_accel_output

    @x_accel_output.setter
    def x_accel_output(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'x_accel_output' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'x_accel_output' field must be an integer in [-2147483648, 2147483647]"
        self._x_accel_output = value

    @property
    def z_gyro_output(self):
        """Message field 'z_gyro_output'."""
        return self._z_gyro_output

    @z_gyro_output.setter
    def z_gyro_output(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'z_gyro_output' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'z_gyro_output' field must be an integer in [-2147483648, 2147483647]"
        self._z_gyro_output = value

    @property
    def y_gyro_output(self):
        """Message field 'y_gyro_output'."""
        return self._y_gyro_output

    @y_gyro_output.setter
    def y_gyro_output(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'y_gyro_output' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'y_gyro_output' field must be an integer in [-2147483648, 2147483647]"
        self._y_gyro_output = value

    @property
    def x_gyro_output(self):
        """Message field 'x_gyro_output'."""
        return self._x_gyro_output

    @x_gyro_output.setter
    def x_gyro_output(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'x_gyro_output' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'x_gyro_output' field must be an integer in [-2147483648, 2147483647]"
        self._x_gyro_output = value

    @property
    def gps_sat_num(self):
        """Message field 'gps_sat_num'."""
        return self._gps_sat_num

    @gps_sat_num.setter
    def gps_sat_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gps_sat_num' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'gps_sat_num' field must be an unsigned integer in [0, 255]"
        self._gps_sat_num = value

    @property
    def bd_sat_num(self):
        """Message field 'bd_sat_num'."""
        return self._bd_sat_num

    @bd_sat_num.setter
    def bd_sat_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bd_sat_num' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'bd_sat_num' field must be an unsigned integer in [0, 255]"
        self._bd_sat_num = value

    @property
    def glo_sat_num(self):
        """Message field 'glo_sat_num'."""
        return self._glo_sat_num

    @glo_sat_num.setter
    def glo_sat_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'glo_sat_num' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'glo_sat_num' field must be an unsigned integer in [0, 255]"
        self._glo_sat_num = value

    @property
    def gal_sat_num(self):
        """Message field 'gal_sat_num'."""
        return self._gal_sat_num

    @gal_sat_num.setter
    def gal_sat_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gal_sat_num' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'gal_sat_num' field must be an unsigned integer in [0, 255]"
        self._gal_sat_num = value

    @property
    def rtk_delay(self):
        """Message field 'rtk_delay'."""
        return self._rtk_delay

    @rtk_delay.setter
    def rtk_delay(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rtk_delay' field must be of type 'float'"
        self._rtk_delay = value

    @property
    def gdop(self):
        """Message field 'gdop'."""
        return self._gdop

    @gdop.setter
    def gdop(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gdop' field must be of type 'float'"
        self._gdop = value

    @property
    def remain_float_1(self):
        """Message field 'remain_float_1'."""
        return self._remain_float_1

    @remain_float_1.setter
    def remain_float_1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'remain_float_1' field must be of type 'float'"
        self._remain_float_1 = value

    @property
    def remain_float_2(self):
        """Message field 'remain_float_2'."""
        return self._remain_float_2

    @remain_float_2.setter
    def remain_float_2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'remain_float_2' field must be of type 'float'"
        self._remain_float_2 = value

    @property
    def remain_double(self):
        """Message field 'remain_double'."""
        return self._remain_double

    @remain_double.setter
    def remain_double(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'remain_double' field must be of type 'float'"
        self._remain_double = value

    @property
    def remain_char_1(self):
        """Message field 'remain_char_1'."""
        return self._remain_char_1

    @remain_char_1.setter
    def remain_char_1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'remain_char_1' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'remain_char_1' field must be an unsigned integer in [0, 255]"
        self._remain_char_1 = value

    @property
    def remain_char_2(self):
        """Message field 'remain_char_2'."""
        return self._remain_char_2

    @remain_char_2.setter
    def remain_char_2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'remain_char_2' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'remain_char_2' field must be an unsigned integer in [0, 255]"
        self._remain_char_2 = value

    @property
    def remain_char_3(self):
        """Message field 'remain_char_3'."""
        return self._remain_char_3

    @remain_char_3.setter
    def remain_char_3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'remain_char_3' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'remain_char_3' field must be an unsigned integer in [0, 255]"
        self._remain_char_3 = value

    @property
    def remain_char_4(self):
        """Message field 'remain_char_4'."""
        return self._remain_char_4

    @remain_char_4.setter
    def remain_char_4(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'remain_char_4' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'remain_char_4' field must be an unsigned integer in [0, 255]"
        self._remain_char_4 = value
