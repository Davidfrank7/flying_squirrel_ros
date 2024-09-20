import sys
if sys.prefix == '/home/flying/miniconda3/envs/ros2':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/flying/Documents/flying_squirrel_ros/install/my_test'
