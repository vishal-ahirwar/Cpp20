
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
// namespace Global
// {
//     void sayHiWithHello()
//     {
//         sayHi();
//         VLNT::print("hello!");
//     };
//     namespace Inner
//     {
//         void sayHi()
//         {
//             VLNT::print("hi, there!");
//         };
//         void sayHiWithHelloInner()
//         {
//             sayHiWithHello();
//         }
//     };

// }
// void say()
// {
//     VLNT::print("hello! Global Namespace");
// };

// namespace Inner
// {
//     void say()
//     {
//         ::say();
//         VLNT::print("hello! inner Namespace");
//     };
// };
// //anonymous namespace example
// namespace
// {
//     void hello()
//     {
//         using namespace std;
//         cout<<"hello, Anonymous!\n";
//     };

// }
int main(int argc, char *argv[])
{
    Global::sayHiWithHello();
    Global::Inner::sayHi();
    Global::Inner::sayHiWithHelloInner();
    return 0;
};
