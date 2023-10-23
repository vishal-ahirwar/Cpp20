
#Auto Genrated CMake file by newton CLI
#Copyright 2023 Vishal Ahirwar. #replace with your copyright notice.
cmake_minimum_required(VERSION 3.0)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_INSTALL_MESSAGE LAZY)
set(CMAKE_MESSAGE_LOG_LEVEL "WARNING")
set(CMAKE_INSTALL_MESSAGE NEVER)
project(inheritance)
set(SOURCE ./src/main.cc ./src/player.cc ./src/person.cc)
add_executable(${PROJECT_NAME} ${SOURCE})
install(TARGETS ${PROJECT_NAME} DESTINATION bin)
