from setuptools import find_packages
from setuptools import setup

setup(
    name='pathfinder_anscer',
    version='0.0.0',
    packages=find_packages(
        include=('pathfinder_anscer', 'pathfinder_anscer.*')),
)
