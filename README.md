
```
conda activate ros2
source install/setup.bash
ros2 run test_py flying_hardware_node
ros2 run imu_complementary_filter complementary_filter_node
ros2 run test_py IMU_subscriber

ros2 topic echo /imu/data
```