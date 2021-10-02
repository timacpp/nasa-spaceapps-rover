cmake_minimum_required(VERSION 3.20)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

find_package(SFML 2.5.1 COMPONENTS graphics audio REQUIRED)

add_executable(untitled main.cpp Asteroid.h GameObject.cpp GameObject.h Generator.h Asteroid.cpp Spacecraft.cpp Spacecraft.h)
target_link_libraries(untitled sfml-graphics sfml-audio)
