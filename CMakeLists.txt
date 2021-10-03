cmake_minimum_required(VERSION 3.20)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

find_package(SFML 2.5.1 COMPONENTS graphics audio REQUIRED)

add_executable(untitled src/main.cpp src/object/GameObject.cpp src/object/GameObject.h Generator.h src/object/Spacecraft.cpp src/object/Spacecraft.h src/Game.cpp src/Game.h src/space/World.h src/space/World.cpp src/object/GameTile.cpp src/object/GameTile.h)
target_link_libraries(untitled sfml-graphics sfml-audio)
