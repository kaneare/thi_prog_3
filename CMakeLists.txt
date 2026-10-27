
cmake_minimum_required(VERSION 3.16)

project(third_lab VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Создание динамической библиотеки DLL
add_library(third_lab_lib SHARED
    src/AbstractVehicle.cpp
    src/Car.cpp
    src/Sedan.cpp
    src/SUV.cpp
    src/SportsCar.cpp
    src/ElectricCar.cpp
    src/Fleet.cpp
)

target_compile_definitions(third_lab_lib PRIVATE THIRD_LAB_EXPORTS)

target_include_directories(third_lab_lib
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# Консольное приложение
add_executable(third_lab main.cpp)

target_link_libraries(third_lab PRIVATE third_lab_lib)
