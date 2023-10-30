# generated from rosidl_generator_py/resource/_idl.py.em
# with input from blickfeld_driver:srv/ImuStaticTransformation.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ImuStaticTransformation_Request(type):
    """Metaclass of message 'ImuStaticTransformation_Request'."""

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
                'blickfeld_driver.srv.ImuStaticTransformation_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__imu_static_transformation__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__imu_static_transformation__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__imu_static_transformation__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__imu_static_transformation__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__imu_static_transformation__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ImuStaticTransformation_Request(metaclass=Metaclass_ImuStaticTransformation_Request):
    """Message class 'ImuStaticTransformation_Request'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_ImuStaticTransformation_Response(type):
    """Metaclass of message 'ImuStaticTransformation_Response'."""

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
                'blickfeld_driver.srv.ImuStaticTransformation_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__imu_static_transformation__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__imu_static_transformation__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__imu_static_transformation__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__imu_static_transformation__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__imu_static_transformation__response

            from geometry_msgs.msg import TransformStamped
            if TransformStamped.__class__._TYPE_SUPPORT is None:
                TransformStamped.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ImuStaticTransformation_Response(metaclass=Metaclass_ImuStaticTransformation_Response):
    """Message class 'ImuStaticTransformation_Response'."""

    __slots__ = [
        '_imu_transformation',
    ]

    _fields_and_field_types = {
        'imu_transformation': 'geometry_msgs/TransformStamped',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'TransformStamped'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import TransformStamped
        self.imu_transformation = kwargs.get('imu_transformation', TransformStamped())

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
        if self.imu_transformation != other.imu_transformation:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def imu_transformation(self):
        """Message field 'imu_transformation'."""
        return self._imu_transformation

    @imu_transformation.setter
    def imu_transformation(self, value):
        if __debug__:
            from geometry_msgs.msg import TransformStamped
            assert \
                isinstance(value, TransformStamped), \
                "The 'imu_transformation' field must be a sub message of type 'TransformStamped'"
        self._imu_transformation = value


class Metaclass_ImuStaticTransformation(type):
    """Metaclass of service 'ImuStaticTransformation'."""

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
                'blickfeld_driver.srv.ImuStaticTransformation')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__imu_static_transformation

            from blickfeld_driver.srv import _imu_static_transformation
            if _imu_static_transformation.Metaclass_ImuStaticTransformation_Request._TYPE_SUPPORT is None:
                _imu_static_transformation.Metaclass_ImuStaticTransformation_Request.__import_type_support__()
            if _imu_static_transformation.Metaclass_ImuStaticTransformation_Response._TYPE_SUPPORT is None:
                _imu_static_transformation.Metaclass_ImuStaticTransformation_Response.__import_type_support__()


class ImuStaticTransformation(metaclass=Metaclass_ImuStaticTransformation):
    from blickfeld_driver.srv._imu_static_transformation import ImuStaticTransformation_Request as Request
    from blickfeld_driver.srv._imu_static_transformation import ImuStaticTransformation_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
