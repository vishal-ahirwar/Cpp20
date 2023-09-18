
#Auto Genrated C++ file by newton CLI
#Copyright2023 Vishal Ahirwar. #replace with your copyright notice.
cmake_minimum_required(VERSION 3.0)

project(forwardDeclaration)
add_executable(${PROJECT_NAME} ./src/main.cc ./src/dog.cc ./src/useDog.cc)
install(TARGETS ${PROJECT_NAME} DESTINATION bin)
