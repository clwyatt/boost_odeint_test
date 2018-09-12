cmake_minimum_required(VERSION 3.3)
project(RT-DEM)

# set BOOST_ROOT to where your boost is installed
find_package(boost 1.6.0 REQUIRED)
include_directories(${Boost_INCLUDE_DIRS})

add_executable(ode_int odeint_test.cpp)

add_executable(demo demo.cpp)

set_property(TARGET demo PROPERTY CXX_STANDARD 11)