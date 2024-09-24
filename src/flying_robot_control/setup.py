from setuptools import find_packages, setup

package_name = 'flying_robot_control'

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
            'flying_hardware_node = flying_robot_control.flying_hardware_node:main',
            'flying_control_node = flying_robot_control.flying_control_node:main',
        ],
    },
)
