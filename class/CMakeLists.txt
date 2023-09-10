
#Auto Genrated C++ file by newton CLI
#Copyright2023 Vishal Ahirwar. #replace with your copyright notice.
cmake_minimum_required(VERSION 3.0)
project(class)
set(SOURCES
./src/main.cc ./src/cylinder.cc
./src/test.cc)
add_executable(${PROJECT_NAME} ${SOURCES})
install(TARGETS ${PROJECT_NAME} DESTINATION bin)
