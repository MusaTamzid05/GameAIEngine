cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
project(ai_play)



set(SOURCE_FILES
    src/main.cpp
    src/math/vector.cpp
    src/physics/steering_output.cpp
    src/engine/game.cpp
    src/engine/circle.cpp
    src/engine/mouse.cpp
    )

add_executable(ai_play ${SOURCE_FILES})



include_directories(
    include
    )


target_link_libraries(ai_play sfml-graphics sfml-window sfml-system)
