from setuptools import find_packages
from setuptools import setup

setup(
    name='flying_robot_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('flying_robot_interfaces', 'flying_robot_interfaces.*')),
)
