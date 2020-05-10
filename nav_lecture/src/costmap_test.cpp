#include <ros/ros.h>
#include <tf2_ros/buffer.h>
#include <costmap_2d/costmap_2d_ros.h>

int main(int argc, char** argv)
{
  ros::init(argc, argv, "costmap");
  tf2_ros::Buffer tf;
  costmap_2d::Costmap2DROS costmap("my_costmap", tf);
  ros::NodeHandle n;
  costmap.start();
  ros::spin();
  return 0;
}
