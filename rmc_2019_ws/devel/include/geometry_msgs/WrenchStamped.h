// Generated by gencpp from file geometry_msgs/WrenchStamped.msg
// DO NOT EDIT!


#ifndef GEOMETRY_MSGS_MESSAGE_WRENCHSTAMPED_H
#define GEOMETRY_MSGS_MESSAGE_WRENCHSTAMPED_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Wrench.h>

namespace geometry_msgs
{
template <class ContainerAllocator>
struct WrenchStamped_
{
  typedef WrenchStamped_<ContainerAllocator> Type;

  WrenchStamped_()
    : header()
    , wrench()  {
    }
  WrenchStamped_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , wrench(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::geometry_msgs::Wrench_<ContainerAllocator>  _wrench_type;
  _wrench_type wrench;





  typedef boost::shared_ptr< ::geometry_msgs::WrenchStamped_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::geometry_msgs::WrenchStamped_<ContainerAllocator> const> ConstPtr;

}; // struct WrenchStamped_

typedef ::geometry_msgs::WrenchStamped_<std::allocator<void> > WrenchStamped;

typedef boost::shared_ptr< ::geometry_msgs::WrenchStamped > WrenchStampedPtr;
typedef boost::shared_ptr< ::geometry_msgs::WrenchStamped const> WrenchStampedConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::geometry_msgs::WrenchStamped_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::geometry_msgs::WrenchStamped_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace geometry_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/home/chel/new_rmc_ws/src/common_msgs/geometry_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::geometry_msgs::WrenchStamped_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::geometry_msgs::WrenchStamped_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::geometry_msgs::WrenchStamped_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::geometry_msgs::WrenchStamped_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::geometry_msgs::WrenchStamped_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::geometry_msgs::WrenchStamped_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::geometry_msgs::WrenchStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d78d3cb249ce23087ade7e7d0c40cfa7";
  }

  static const char* value(const ::geometry_msgs::WrenchStamped_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd78d3cb249ce2308ULL;
  static const uint64_t static_value2 = 0x7ade7e7d0c40cfa7ULL;
};

template<class ContainerAllocator>
struct DataType< ::geometry_msgs::WrenchStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/WrenchStamped";
  }

  static const char* value(const ::geometry_msgs::WrenchStamped_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::geometry_msgs::WrenchStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# A wrench with reference coordinate frame and timestamp\n\
Header header\n\
Wrench wrench\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Wrench\n\
# This represents force in free space, separated into\n\
# its linear and angular parts.\n\
Vector3  force\n\
Vector3  torque\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
# It is only meant to represent a direction. Therefore, it does not\n\
# make sense to apply a translation to it (e.g., when applying a \n\
# generic rigid transformation to a Vector3, tf2 will only apply the\n\
# rotation). If you want your data to be translatable too, use the\n\
# geometry_msgs/Point message instead.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::geometry_msgs::WrenchStamped_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::geometry_msgs::WrenchStamped_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.wrench);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct WrenchStamped_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::geometry_msgs::WrenchStamped_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::geometry_msgs::WrenchStamped_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "wrench: ";
    s << std::endl;
    Printer< ::geometry_msgs::Wrench_<ContainerAllocator> >::stream(s, indent + "  ", v.wrench);
  }
};

} // namespace message_operations
} // namespace ros

#endif // GEOMETRY_MSGS_MESSAGE_WRENCHSTAMPED_H
