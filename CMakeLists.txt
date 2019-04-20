cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
project(ai_play)



set(SOURCE_FILES
    src/main.cpp
    src/math/vector.cpp
    src/physics/steering_output.cpp
    src/engine/game.cpp
    src/engine/circle.cpp
    src/engine/mouse.cpp
    src/engine/kinematic_seek_circle.cpp
    src/physics/motion_output.cpp
    src/physics/orientation.cpp
    src/physics/kinematic_seek.cpp
    src/engine/util.cpp
    src/physics/kinematic_flee.cpp
    src/engine/kinematic_flee_circle.cpp
    src/engine/kinematic_arrive_circle.cpp
    src/physics/kinematic_arrive.cpp
    src/engine/triangle.cpp
    src/engine/kinematic_wander_triangle.cpp
    src/physics/kinematic_wander.cpp
    src/engine/shape.cpp
    src/engine/steering_triangle.cpp
    src/engine/steering_seek_triangle.cpp
    src/physics/steering_seek.cpp
    )

add_executable(ai_play ${SOURCE_FILES})



include_directories(
    include
    )


target_link_libraries(ai_play sfml-graphics sfml-window sfml-system)
