
#Auto Genrated CMake file by newton CLI
#Copyright 2023 Vishal Ahirwar. #replace with your copyright notice.
cmake_minimum_required(VERSION 3.0)
set(CMAKE_C_STANDARD 11)
project(struct)
set(SOURCE ./src/main.c)#add your additional source file here!
add_executable(${PROJECT_NAME} ${SOURCE})
install(TARGETS ${PROJECT_NAME} DESTINATION bin)
