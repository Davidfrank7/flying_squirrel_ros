# flying_robot_ros
飞鼠机器人ROS节点与功能实现

## test
### test_imu

https://github.com/facontidavide/PlotJuggler

```bash
sudo snap install plotjuggler
```

# cmd
```
conda deactivate
conda activate ros2
colcon build

source install/setup.bash

sudo rosdep init
rosdep update
rosdep install --from-paths src --ignore-src -r -y

ros2 run my_test flying_hardware_node
ros2 run imu_complementary_filter complementary_filter_node
ros2 run my_test IMU_subscriber

ros2 run flying_robot_control flying_hardware_node

ros2 topic echo /imu/data
```