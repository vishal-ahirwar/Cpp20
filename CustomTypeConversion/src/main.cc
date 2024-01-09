
// Auto Genrated C++ file by newton CLI
// Copyright 2023 Vishal Ahirwar //replace it with yout copyright notice!
#include <iostream>
class Test
{
public:
    operator double()
    {
        return 5.5;
    };
    operator int()
    {
        return 5;
    }
    operator std::string()
    {
        return std::string("hello!");
    };
};
int main(int argc, char *argv[])
{
    Test test;
    int x = static_cast<int>(test);
    double f = static_cast<double>(test);
    std::string str = static_cast<std::string>(test);
    std::cout << x << ", " << f << ", " << str << std::endl;
    return 0;
};
