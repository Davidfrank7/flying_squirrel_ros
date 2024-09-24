# flying_robot_ros
飞鼠机器人ROS节点与功能实现

# cmd
```
conda activate ros2
colcon build
source install/setup.bash
ros2 run test_py flying_hardware_node
ros2 run imu_complementary_filter complementary_filter_node
ros2 run test_py IMU_subscriber

ros2 topic echo /imu/data
```