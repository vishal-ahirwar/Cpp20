
// Auto Genrated C++ file by newton CLI
// Copyright 2023 Vishal Ahirwar //replace it with yout copyright notice!
#include <iostream>
class Point
{
    std::initializer_list<std::string> data{};

public:
    Point(std::initializer_list<std::string> data)
    {
        std::cout << "Initializer list constructor called!\n";
        for (const std::string &value : data)
        {
            this->data = data;
        }
    };
    Point(const std::string &a, const std::string &b)
    {
        std::cout << "normal constructor called!\n";
    };
    void printData() const
    {
        std::cout << "\n[";
        for (auto &str : data)
            std::cout << str << ",";
        std::cout << "]\n";
    }
};
struct Test
{
    int a, b, c, d;
    void print() const
    {
        using namespace std;
        cout << a << b << c << d;
    }
};

int main(int argc, char *argv[])
{
    Point point{"hello", "there", "i", "mean", "world", "hah", "what", "did", "think", "there", "or", "world", "!"};
    Test t{.a = 2, .b = 5};
    Test t2{a : 12, b : 34};
    t.print();
    t2.print();
    point.printData();
    return 0;
};
