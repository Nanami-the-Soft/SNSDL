cmake_minimum_required(VERSION 3.14)
project(snsdl)

add_executable(snsdl
    src/error.cpp
    src/rectangle.cpp
    src/window.cpp
    src/renderer.cpp
    src/main.cpp
    )

include(FindPkgConfig)

pkg_search_module(SDL2 REQUIRED sdl2)
pkg_search_module(SDL2_TTF REQUIRED SDL2_ttf)
pkg_search_module(SDL2_MIXER REQUIRED SDL2_mixer)

include_directories(snsdl
    ${SDL2_INCLUDE_DIRS}
    ${SDL2_TTF_INCLUDE_DIRS}
    ${SDL2_MIXER_INCLUDE_DIRS}
    )

target_link_libraries(snsdl
    ${SDL2_LIBRARIES}
    ${SDL2_TTF_LIBRARIES}
    ${SDL2_MIXER_LIBRARIES}
    )
