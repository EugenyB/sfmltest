cmake_minimum_required(VERSION 3.30)
project(sfmltest)

include(FetchContent)
set(BUILD_SHARED_LIBS OFF)
FETCHCONTENT_DECLARE(SFML GIT_REPOSITORY https://github.com/SFML/SFML.git GIT_TAG 2.6.2)
FETCHCONTENT_MAKEAVAILABLE(SFML)

set(CMAKE_CXX_STANDARD 20)

add_executable(sfmltest main.cpp)

target_link_libraries(sfmltest sfml-graphics)
