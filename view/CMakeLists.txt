
#Auto Genrated CMake file by newton CLI
#Copyright 2023 Vishal Ahirwar. #replace with your copyright notice.
cmake_minimum_required(VERSION 3.0)
project(view)
set(SOURCE ./src/main.cc)#add your additional source file here!
set(CMAKE_CXX_STANDARD 20)
set(POCO_LIB_PATH /home/soloknight/vcpkg-master/installed/x64-linux/lib)
# set(POCO_DIR "/home/soloknight/vcpkg-master/installed/x64-linux")
include_directories(/home/soloknight/vcpkg-master/installed/x64-linux/include)
add_executable(${PROJECT_NAME} ${SOURCE})
install(TARGETS ${PROJECT_NAME} DESTINATION bin)
target_link_directories(${PROJECT_NAME} PRIVATE ${POCO_LIB_PATH})
target_link_libraries(
    ${PROJECT_NAME}
    PocoNet
    PocoFoundation
    PocoUtil
    z
    pcre2-8
    expat
    pcre2-posix
    PocoCppParser
    PocoData
)
