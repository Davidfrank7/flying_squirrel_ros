from setuptools import find_packages, setup

package_name = 'flying_robot_control'

setup(
    name=package_name,
    version='0.0.1',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=[
        'setuptools',
        'numpy',
        'pyserial',
        'AHRS'
    ],
    zip_safe=True,
    maintainer='fmh',
    maintainer_email='fan_mh@sjtu.edu.cn',
    description='flying robot control package, including hardware, control and estimation',
    license='MIT',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'hw_node = flying_robot_control.hw.hw_node:main',
            'ctrl_node = flying_robot_control.ctrl.att_ctrl_node:main',
            'estimator_node = flying_robot_control.estimator.attitude_estimator_node:main',
        ],
    },
)
