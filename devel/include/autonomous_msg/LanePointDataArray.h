// Generated by gencpp from file autonomous_msg/LanePointDataArray.msg
// DO NOT EDIT!


#ifndef AUTONOMOUS_MSG_MESSAGE_LANEPOINTDATAARRAY_H
#define AUTONOMOUS_MSG_MESSAGE_LANEPOINTDATAARRAY_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <autonomous_msg/LanePointData.h>

namespace autonomous_msg
{
template <class ContainerAllocator>
struct LanePointDataArray_
{
  typedef LanePointDataArray_<ContainerAllocator> Type;

  LanePointDataArray_()
    : frame_id()
    , id()
    , lane()  {
    }
  LanePointDataArray_(const ContainerAllocator& _alloc)
    : frame_id(_alloc)
    , id(_alloc)
    , lane(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _frame_id_type;
  _frame_id_type frame_id;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _id_type;
  _id_type id;

   typedef std::vector< ::autonomous_msg::LanePointData_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::autonomous_msg::LanePointData_<ContainerAllocator> >> _lane_type;
  _lane_type lane;





  typedef boost::shared_ptr< ::autonomous_msg::LanePointDataArray_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::autonomous_msg::LanePointDataArray_<ContainerAllocator> const> ConstPtr;

}; // struct LanePointDataArray_

typedef ::autonomous_msg::LanePointDataArray_<std::allocator<void> > LanePointDataArray;

typedef boost::shared_ptr< ::autonomous_msg::LanePointDataArray > LanePointDataArrayPtr;
typedef boost::shared_ptr< ::autonomous_msg::LanePointDataArray const> LanePointDataArrayConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::autonomous_msg::LanePointDataArray_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::autonomous_msg::LanePointDataArray_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::autonomous_msg::LanePointDataArray_<ContainerAllocator1> & lhs, const ::autonomous_msg::LanePointDataArray_<ContainerAllocator2> & rhs)
{
  return lhs.frame_id == rhs.frame_id &&
    lhs.id == rhs.id &&
    lhs.lane == rhs.lane;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::autonomous_msg::LanePointDataArray_<ContainerAllocator1> & lhs, const ::autonomous_msg::LanePointDataArray_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace autonomous_msg

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::autonomous_msg::LanePointDataArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autonomous_msg::LanePointDataArray_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::autonomous_msg::LanePointDataArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::autonomous_msg::LanePointDataArray_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autonomous_msg::LanePointDataArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autonomous_msg::LanePointDataArray_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::autonomous_msg::LanePointDataArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3d7bdca5f96098a16da2bfbfc64643b3";
  }

  static const char* value(const ::autonomous_msg::LanePointDataArray_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3d7bdca5f96098a1ULL;
  static const uint64_t static_value2 = 0x6da2bfbfc64643b3ULL;
};

template<class ContainerAllocator>
struct DataType< ::autonomous_msg::LanePointDataArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "autonomous_msg/LanePointDataArray";
  }

  static const char* value(const ::autonomous_msg::LanePointDataArray_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::autonomous_msg::LanePointDataArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string frame_id\n"
"string id \n"
"LanePointData[] lane\n"
"\n"
"================================================================================\n"
"MSG: autonomous_msg/LanePointData\n"
"string frame_id\n"
"string id \n"
"geometry_msgs/Point[] point\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::autonomous_msg::LanePointDataArray_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::autonomous_msg::LanePointDataArray_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.frame_id);
      stream.next(m.id);
      stream.next(m.lane);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LanePointDataArray_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::autonomous_msg::LanePointDataArray_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::autonomous_msg::LanePointDataArray_<ContainerAllocator>& v)
  {
    s << indent << "frame_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.frame_id);
    s << indent << "id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.id);
    s << indent << "lane[]" << std::endl;
    for (size_t i = 0; i < v.lane.size(); ++i)
    {
      s << indent << "  lane[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::autonomous_msg::LanePointData_<ContainerAllocator> >::stream(s, indent + "    ", v.lane[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // AUTONOMOUS_MSG_MESSAGE_LANEPOINTDATAARRAY_H
