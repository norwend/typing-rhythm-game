cmake_minimum_required(VERSION 3.23)
project(typing_rhythm_game)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(src)
target_compile_options(typing_rhythm_game PUBLIC -Wall -Wextra -Werror -Wpedantic -pedantic-errors)
