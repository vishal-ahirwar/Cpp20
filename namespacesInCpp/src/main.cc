
// Auto Genrated C++ file by newton CLI
// Copyright 2023 Vishal Ahirwar //replace it with yout copyright notice!
#include <iostream>

class VLNT
{
public:
    static void print(const std::string &str)
    {
        std::cout << str << "\n";
    };
};
void say()
{
    VLNT::print("hello! Global Namespace");
};

namespace Inner
{
    void say()
    {
        ::say();
        VLNT::print("hello! inner Namespace");
    };
};
namespace
{

}
int main(int argc, char *argv[])
{
    Inner::say();
    say();
    VLNT::print("End!");
    //:: to use global namespace stuff;
    return 0;
};
