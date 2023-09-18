
// Auto Genrated C++ file by newton CLI
// Copyright 2023 Vishal Ahirwar //replace it with yout copyright notice!
#include <iostream>
#include "useDog.h"
#include"dog.h"
int main(int argc, char *argv[])
{
    UseDog useDog{};
    class Dog *dog{new Dog()};
    if(dog==nullptr)return -1;
    useDog.use(*dog);
    delete dog;
    std::cout << "end!\n";
    return 0;
};
