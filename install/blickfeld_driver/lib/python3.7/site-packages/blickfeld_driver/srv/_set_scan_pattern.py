# generated from rosidl_generator_py/resource/_idl.py.em
# with input from blickfeld_driver:srv/SetScanPattern.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetScanPattern_Request(type):
    """Metaclass of message 'SetScanPattern_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'COMBINE_UP_DOWN': 'COMBINE_UP_DOWN',
        'ONLY_UP': 'ONLY_UP',
        'ONLY_DOWN': 'ONLY_DOWN',
        'SEPARATE': 'SEPARATE',
        'EQUI_HORIZONTAL_ANGLE': 'EQUI_HORIZONTAL_ANGLE',
        'INTERLEAVE': 'INTERLEAVE',
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('blickfeld_driver')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'blickfeld_driver.srv.SetScanPattern_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_scan_pattern__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_scan_pattern__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_scan_pattern__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_scan_pattern__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_scan_pattern__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'COMBINE_UP_DOWN': cls.__constants['COMBINE_UP_DOWN'],
            'ONLY_UP': cls.__constants['ONLY_UP'],
            'ONLY_DOWN': cls.__constants['ONLY_DOWN'],
            'SEPARATE': cls.__constants['SEPARATE'],
            'EQUI_HORIZONTAL_ANGLE': cls.__constants['EQUI_HORIZONTAL_ANGLE'],
            'INTERLEAVE': cls.__constants['INTERLEAVE'],
        }

    @property
    def COMBINE_UP_DOWN(self):
        """Message constant 'COMBINE_UP_DOWN'."""
        return Metaclass_SetScanPattern_Request.__constants['COMBINE_UP_DOWN']

    @property
    def ONLY_UP(self):
        """Message constant 'ONLY_UP'."""
        return Metaclass_SetScanPattern_Request.__constants['ONLY_UP']

    @property
    def ONLY_DOWN(self):
        """Message constant 'ONLY_DOWN'."""
        return Metaclass_SetScanPattern_Request.__constants['ONLY_DOWN']

    @property
    def SEPARATE(self):
        """Message constant 'SEPARATE'."""
        return Metaclass_SetScanPattern_Request.__constants['SEPARATE']

    @property
    def EQUI_HORIZONTAL_ANGLE(self):
        """Message constant 'EQUI_HORIZONTAL_ANGLE'."""
        return Metaclass_SetScanPattern_Request.__constants['EQUI_HORIZONTAL_ANGLE']

    @property
    def INTERLEAVE(self):
        """Message constant 'INTERLEAVE'."""
        return Metaclass_SetScanPattern_Request.__constants['INTERLEAVE']


class SetScanPattern_Request(metaclass=Metaclass_SetScanPattern_Request):
    """
    Message class 'SetScanPattern_Request'.

    Constants:
      COMBINE_UP_DOWN
      ONLY_UP
      ONLY_DOWN
      SEPARATE
      EQUI_HORIZONTAL_ANGLE
      INTERLEAVE
    """

    __slots__ = [
        '_fov_horizontal',
        '_fov_vertical',
        '_angle_spacing',
        '_scanlines_up',
        '_scanlines_down',
        '_frame_mode',
        '_pulse_type',
    ]

    _fields_and_field_types = {
        'fov_horizontal': 'float',
        'fov_vertical': 'float',
        'angle_spacing': 'float',
        'scanlines_up': 'uint16',
        'scanlines_down': 'uint16',
        'frame_mode': 'string',
        'pulse_type': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.fov_horizontal = kwargs.get('fov_horizontal', float())
        self.fov_vertical = kwargs.get('fov_vertical', float())
        self.angle_spacing = kwargs.get('angle_spacing', float())
        self.scanlines_up = kwargs.get('scanlines_up', int())
        self.scanlines_down = kwargs.get('scanlines_down', int())
        self.frame_mode = kwargs.get('frame_mode', str())
        self.pulse_type = kwargs.get('pulse_type', str())

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
        if self.fov_horizontal != other.fov_horizontal:
            return False
        if self.fov_vertical != other.fov_vertical:
            return False
        if self.angle_spacing != other.angle_spacing:
            return False
        if self.scanlines_up != other.scanlines_up:
            return False
        if self.scanlines_down != other.scanlines_down:
            return False
        if self.frame_mode != other.frame_mode:
            return False
        if self.pulse_type != other.pulse_type:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def fov_horizontal(self):
        """Message field 'fov_horizontal'."""
        return self._fov_horizontal

    @fov_horizontal.setter
    def fov_horizontal(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fov_horizontal' field must be of type 'float'"
        self._fov_horizontal = value

    @property
    def fov_vertical(self):
        """Message field 'fov_vertical'."""
        return self._fov_vertical

    @fov_vertical.setter
    def fov_vertical(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fov_vertical' field must be of type 'float'"
        self._fov_vertical = value

    @property
    def angle_spacing(self):
        """Message field 'angle_spacing'."""
        return self._angle_spacing

    @angle_spacing.setter
    def angle_spacing(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle_spacing' field must be of type 'float'"
        self._angle_spacing = value

    @property
    def scanlines_up(self):
        """Message field 'scanlines_up'."""
        return self._scanlines_up

    @scanlines_up.setter
    def scanlines_up(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'scanlines_up' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'scanlines_up' field must be an unsigned integer in [0, 65535]"
        self._scanlines_up = value

    @property
    def scanlines_down(self):
        """Message field 'scanlines_down'."""
        return self._scanlines_down

    @scanlines_down.setter
    def scanlines_down(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'scanlines_down' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'scanlines_down' field must be an unsigned integer in [0, 65535]"
        self._scanlines_down = value

    @property
    def frame_mode(self):
        """Message field 'frame_mode'."""
        return self._frame_mode

    @frame_mode.setter
    def frame_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'frame_mode' field must be of type 'str'"
        self._frame_mode = value

    @property
    def pulse_type(self):
        """Message field 'pulse_type'."""
        return self._pulse_type

    @pulse_type.setter
    def pulse_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'pulse_type' field must be of type 'str'"
        self._pulse_type = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_SetScanPattern_Response(type):
    """Metaclass of message 'SetScanPattern_Response'."""

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
            module = import_type_support('blickfeld_driver')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'blickfeld_driver.srv.SetScanPattern_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_scan_pattern__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_scan_pattern__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_scan_pattern__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_scan_pattern__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_scan_pattern__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetScanPattern_Response(metaclass=Metaclass_SetScanPattern_Response):
    """Message class 'SetScanPattern_Response'."""

    __slots__ = [
        '_success',
        '_message',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.message = kwargs.get('message', str())

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
        if self.success != other.success:
            return False
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value


class Metaclass_SetScanPattern(type):
    """Metaclass of service 'SetScanPattern'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('blickfeld_driver')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'blickfeld_driver.srv.SetScanPattern')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_scan_pattern

            from blickfeld_driver.srv import _set_scan_pattern
            if _set_scan_pattern.Metaclass_SetScanPattern_Request._TYPE_SUPPORT is None:
                _set_scan_pattern.Metaclass_SetScanPattern_Request.__import_type_support__()
            if _set_scan_pattern.Metaclass_SetScanPattern_Response._TYPE_SUPPORT is None:
                _set_scan_pattern.Metaclass_SetScanPattern_Response.__import_type_support__()


class SetScanPattern(metaclass=Metaclass_SetScanPattern):
    from blickfeld_driver.srv._set_scan_pattern import SetScanPattern_Request as Request
    from blickfeld_driver.srv._set_scan_pattern import SetScanPattern_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
