#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "homework3";

// For Block homework3/Subscribe
SimulinkSubscriber<std_msgs::Float64, SL_Bus_homework3_std_msgs_Float64> Sub_homework3_2;

// For Block homework3/Subscribe1
SimulinkSubscriber<std_msgs::Float64, SL_Bus_homework3_std_msgs_Float64> Sub_homework3_8;

// For Block homework3/Publish
SimulinkPublisher<std_msgs::Float64, SL_Bus_homework3_std_msgs_Float64> Pub_homework3_15;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

