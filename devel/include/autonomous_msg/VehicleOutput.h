// Generated by gencpp from file autonomous_msg/VehicleOutput.msg
// DO NOT EDIT!


#ifndef AUTONOMOUS_MSG_MESSAGE_VEHICLEOUTPUT_H
#define AUTONOMOUS_MSG_MESSAGE_VEHICLEOUTPUT_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace autonomous_msg
{
template <class ContainerAllocator>
struct VehicleOutput_
{
  typedef VehicleOutput_<ContainerAllocator> Type;

  VehicleOutput_()
    : id()
    , x(0.0)
    , y(0.0)
    , yaw(0.0)
    , velocity(0.0)  {
    }
  VehicleOutput_(const ContainerAllocator& _alloc)
    : id(_alloc)
    , x(0.0)
    , y(0.0)
    , yaw(0.0)
    , velocity(0.0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _id_type;
  _id_type id;

   typedef double _x_type;
  _x_type x;

   typedef double _y_type;
  _y_type y;

   typedef double _yaw_type;
  _yaw_type yaw;

   typedef double _velocity_type;
  _velocity_type velocity;





  typedef boost::shared_ptr< ::autonomous_msg::VehicleOutput_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::autonomous_msg::VehicleOutput_<ContainerAllocator> const> ConstPtr;

}; // struct VehicleOutput_

typedef ::autonomous_msg::VehicleOutput_<std::allocator<void> > VehicleOutput;

typedef boost::shared_ptr< ::autonomous_msg::VehicleOutput > VehicleOutputPtr;
typedef boost::shared_ptr< ::autonomous_msg::VehicleOutput const> VehicleOutputConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::autonomous_msg::VehicleOutput_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::autonomous_msg::VehicleOutput_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::autonomous_msg::VehicleOutput_<ContainerAllocator1> & lhs, const ::autonomous_msg::VehicleOutput_<ContainerAllocator2> & rhs)
{
  return lhs.id == rhs.id &&
    lhs.x == rhs.x &&
    lhs.y == rhs.y &&
    lhs.yaw == rhs.yaw &&
    lhs.velocity == rhs.velocity;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::autonomous_msg::VehicleOutput_<ContainerAllocator1> & lhs, const ::autonomous_msg::VehicleOutput_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace autonomous_msg

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::autonomous_msg::VehicleOutput_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autonomous_msg::VehicleOutput_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::autonomous_msg::VehicleOutput_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::autonomous_msg::VehicleOutput_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autonomous_msg::VehicleOutput_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autonomous_msg::VehicleOutput_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::autonomous_msg::VehicleOutput_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8e71ca8b40f5ece91a4b535460967ce7";
  }

  static const char* value(const ::autonomous_msg::VehicleOutput_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8e71ca8b40f5ece9ULL;
  static const uint64_t static_value2 = 0x1a4b535460967ce7ULL;
};

template<class ContainerAllocator>
struct DataType< ::autonomous_msg::VehicleOutput_<ContainerAllocator> >
{
  static const char* value()
  {
    return "autonomous_msg/VehicleOutput";
  }

  static const char* value(const ::autonomous_msg::VehicleOutput_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::autonomous_msg::VehicleOutput_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string id \n"
"float64 x\n"
"float64 y\n"
"float64 yaw\n"
"float64 velocity\n"
;
  }

  static const char* value(const ::autonomous_msg::VehicleOutput_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::autonomous_msg::VehicleOutput_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.yaw);
      stream.next(m.velocity);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct VehicleOutput_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::autonomous_msg::VehicleOutput_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::autonomous_msg::VehicleOutput_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.id);
    s << indent << "x: ";
    Printer<double>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<double>::stream(s, indent + "  ", v.y);
    s << indent << "yaw: ";
    Printer<double>::stream(s, indent + "  ", v.yaw);
    s << indent << "velocity: ";
    Printer<double>::stream(s, indent + "  ", v.velocity);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AUTONOMOUS_MSG_MESSAGE_VEHICLEOUTPUT_H
