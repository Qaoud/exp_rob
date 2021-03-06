// Generated by gencpp from file custom_messages/play_pose.msg
// DO NOT EDIT!


#ifndef CUSTOM_MESSAGES_MESSAGE_PLAY_POSE_H
#define CUSTOM_MESSAGES_MESSAGE_PLAY_POSE_H

#include <ros/service_traits.h>


#include <custom_messages/play_poseRequest.h>
#include <custom_messages/play_poseResponse.h>


namespace custom_messages
{

struct play_pose
{

typedef play_poseRequest Request;
typedef play_poseResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct play_pose
} // namespace custom_messages


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::custom_messages::play_pose > {
  static const char* value()
  {
    return "926c357e5c9b841314d3b8b1f58e3abe";
  }

  static const char* value(const ::custom_messages::play_pose&) { return value(); }
};

template<>
struct DataType< ::custom_messages::play_pose > {
  static const char* value()
  {
    return "custom_messages/play_pose";
  }

  static const char* value(const ::custom_messages::play_pose&) { return value(); }
};


// service_traits::MD5Sum< ::custom_messages::play_poseRequest> should match 
// service_traits::MD5Sum< ::custom_messages::play_pose > 
template<>
struct MD5Sum< ::custom_messages::play_poseRequest>
{
  static const char* value()
  {
    return MD5Sum< ::custom_messages::play_pose >::value();
  }
  static const char* value(const ::custom_messages::play_poseRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::custom_messages::play_poseRequest> should match 
// service_traits::DataType< ::custom_messages::play_pose > 
template<>
struct DataType< ::custom_messages::play_poseRequest>
{
  static const char* value()
  {
    return DataType< ::custom_messages::play_pose >::value();
  }
  static const char* value(const ::custom_messages::play_poseRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::custom_messages::play_poseResponse> should match 
// service_traits::MD5Sum< ::custom_messages::play_pose > 
template<>
struct MD5Sum< ::custom_messages::play_poseResponse>
{
  static const char* value()
  {
    return MD5Sum< ::custom_messages::play_pose >::value();
  }
  static const char* value(const ::custom_messages::play_poseResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::custom_messages::play_poseResponse> should match 
// service_traits::DataType< ::custom_messages::play_pose > 
template<>
struct DataType< ::custom_messages::play_poseResponse>
{
  static const char* value()
  {
    return DataType< ::custom_messages::play_pose >::value();
  }
  static const char* value(const ::custom_messages::play_poseResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // CUSTOM_MESSAGES_MESSAGE_PLAY_POSE_H
