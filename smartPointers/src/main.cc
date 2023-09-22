
// Auto Genrated C++ file by newton CLI
// Copyright 2023 Vishal Ahirwar //replace it with yout copyright notice!
#include <iostream>
#include <memory>
class Test
{
public:
    Test()
    {
        std::cout << "constructed!\n";
    };
    ~Test()
    {
        std::cout << "destructed!\n";
    };
};

int main(int argc, char *argv[])
{
    std::unique_ptr<std::string> newMessage{nullptr};
    std::unique_ptr<Test> newTest{};

    {
        std::unique_ptr<Test> uptrTest{new Test{}};
        std::unique_ptr<std::string> message{new std::string{"it works!\n"}};
        std::cout << *message.get();
        newMessage = std::move(message);
        newTest = std::move(uptrTest);
    };
    std::cout << *newMessage;

    return 0;
};
