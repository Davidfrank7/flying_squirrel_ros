# generated from rosidl_generator_py/resource/_idl.py.em
# with input from flying_robot_interfaces:msg/ServoPWMState.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'id'
# Member 'pwm'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ServoPWMState(type):
    """Metaclass of message 'ServoPWMState'."""

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
            module = import_type_support('flying_robot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'flying_robot_interfaces.msg.ServoPWMState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__servo_pwm_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__servo_pwm_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__servo_pwm_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__servo_pwm_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__servo_pwm_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ServoPWMState(metaclass=Metaclass_ServoPWMState):
    """Message class 'ServoPWMState'."""

    __slots__ = [
        '_id',
        '_pwm',
    ]

    _fields_and_field_types = {
        'id': 'sequence<int32>',
        'pwm': 'sequence<int32>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = array.array('i', kwargs.get('id', []))
        self.pwm = array.array('i', kwargs.get('pwm', []))

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
        if self.id != other.id:
            return False
        if self.pwm != other.pwm:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'id' array.array() must have the type code of 'i'"
            self._id = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'id' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._id = array.array('i', value)

    @builtins.property
    def pwm(self):
        """Message field 'pwm'."""
        return self._pwm

    @pwm.setter
    def pwm(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'pwm' array.array() must have the type code of 'i'"
            self._pwm = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'pwm' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._pwm = array.array('i', value)
