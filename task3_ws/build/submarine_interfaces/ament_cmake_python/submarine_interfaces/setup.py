from setuptools import find_packages
from setuptools import setup

setup(
    name='submarine_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('submarine_interfaces', 'submarine_interfaces.*')),
)
