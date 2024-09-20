from setuptools import find_packages, setup

package_name = 'my_test'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='fmh',
    maintainer_email='fan_mh@sjtu.edu.cn',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'servo_pwm_publisher = my_test.test_pwm_pub_node:main',
            'imu_subscriber = my_test.test_imu_sub_node:main',
        ],
    },
)
