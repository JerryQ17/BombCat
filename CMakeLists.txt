cmake_minimum_required(VERSION 3.23)
project(BombCat)

set(CMAKE_C_STANDARD 23)

add_executable(main main.c foresee-card.c trick-card.c skip-card.c forbid-card.c
        favor-card.c attack-card.c bomb-card.c FunctionForSDL.c Initialization.c)

target_link_libraries(main mingw32)
target_link_libraries(main SDL2main)
target_link_libraries(main SDL2)
target_link_libraries(main SDL2_image)
target_link_libraries(main SDL2_ttf)
