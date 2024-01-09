
#Auto Genrated CMake file by newton CLI
#Copyright 2023 Vishal Ahirwar. #replace with your copyright notice.
cmake_minimum_required(VERSION 3.0)
set(CMAKE_CXX_STANDARD 17)
project(move_semantics)
set(SOURCE ./src/main.cc)#add your additional source file here!

add_executable(${PROJECT_NAME} ${SOURCE})
install(TARGETS ${PROJECT_NAME} DESTINATION bin)
