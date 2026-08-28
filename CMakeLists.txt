cmake_minimum_required(VERSION 3.10)
project(easter-terminal)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)   # генерирует compile_commands.json

# Путь к локальной библиотеке json
set(JSON_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/libs/json/include)

add_executable(easter-terminal src/main.cpp)

# Добавляем директорию для включений
target_include_directories(easter-terminal PRIVATE ${JSON_INCLUDE_DIR})
