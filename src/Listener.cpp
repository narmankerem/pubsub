// ros node for subscribing to the topic "talker" and printing out the messages it receives.

#include "ros/ros.h"
#include "std_msgs/String.h"

#include <iostream>
#include <sstream>

using namespace std;

void chatterCallback(const std_msgs::String::ConstPtr& msg)
{
    ROS_INFO("I heard: [%s]", msg->data.c_str());
}

int main(int argc, char **argv)
{
    
    ros::init(argc, argv, "listener");
    
    ros::NodeHandle n;
    
    ros::Subscriber sub = n.subscribe("talker", 1000, chatterCallback);
    
    ros::spin();
    
    return 0;
}