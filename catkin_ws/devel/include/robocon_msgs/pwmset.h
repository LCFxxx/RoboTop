// Generated by gencpp from file robocon_msgs/pwmset.msg
// DO NOT EDIT!


#ifndef ROBOCON_MSGS_MESSAGE_PWMSET_H
#define ROBOCON_MSGS_MESSAGE_PWMSET_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace robocon_msgs
{
template <class ContainerAllocator>
struct pwmset_
{
  typedef pwmset_<ContainerAllocator> Type;

  pwmset_()
    : pwm()  {
    }
  pwmset_(const ContainerAllocator& _alloc)
    : pwm(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _pwm_type;
  _pwm_type pwm;




  typedef boost::shared_ptr< ::robocon_msgs::pwmset_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robocon_msgs::pwmset_<ContainerAllocator> const> ConstPtr;

}; // struct pwmset_

typedef ::robocon_msgs::pwmset_<std::allocator<void> > pwmset;

typedef boost::shared_ptr< ::robocon_msgs::pwmset > pwmsetPtr;
typedef boost::shared_ptr< ::robocon_msgs::pwmset const> pwmsetConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robocon_msgs::pwmset_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robocon_msgs::pwmset_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace robocon_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'robocon_msgs': ['/home/yxiao1996/workspace/RoboTop/catkin_ws/src/Robocon/robocon_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::robocon_msgs::pwmset_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robocon_msgs::pwmset_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robocon_msgs::pwmset_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robocon_msgs::pwmset_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robocon_msgs::pwmset_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robocon_msgs::pwmset_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robocon_msgs::pwmset_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d8d84643029731b92d628f398337d291";
  }

  static const char* value(const ::robocon_msgs::pwmset_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd8d84643029731b9ULL;
  static const uint64_t static_value2 = 0x2d628f398337d291ULL;
};

template<class ContainerAllocator>
struct DataType< ::robocon_msgs::pwmset_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robocon_msgs/pwmset";
  }

  static const char* value(const ::robocon_msgs::pwmset_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robocon_msgs::pwmset_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32[] pwm\n\
";
  }

  static const char* value(const ::robocon_msgs::pwmset_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robocon_msgs::pwmset_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.pwm);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct pwmset_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robocon_msgs::pwmset_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robocon_msgs::pwmset_<ContainerAllocator>& v)
  {
    s << indent << "pwm[]" << std::endl;
    for (size_t i = 0; i < v.pwm.size(); ++i)
    {
      s << indent << "  pwm[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.pwm[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOCON_MSGS_MESSAGE_PWMSET_H