#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"
#include "homework3_types.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block homework3/Subscribe
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_homework3_std_msgs_Float64> Sub_homework3_2;

// For Block homework3/Subscribe1
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_homework3_std_msgs_Float64> Sub_homework3_8;

// For Block homework3/Publish
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_homework3_std_msgs_Float64> Pub_homework3_15;

void slros_node_init(int argc, char** argv);

#endif
