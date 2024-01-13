
// Auto Genrated C++ file by newton CLI
// Copyright 2023 Vishal Ahirwar //replace it with yout copyright notice!
#include <iostream>

class Integer
{
private:
    size_t data{};

public:
    Integer(const size_t &data) : data{data} {};
    size_t operator()() { return this->data; };
    size_t operator++(int) // postfix
    {
        size_t temp{this->data};
        ++data;
        return temp;
    };
};

int main(int argc, char *argv[])
{
    Integer in32{31};
    std::cout << (in32++) << std::endl;
    std::cout << in32() << std::endl;
    return 0;
};
