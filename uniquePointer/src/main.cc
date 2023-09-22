
// Auto Genrated C++ file by newton CLI
// Copyright 2023 Vishal Ahirwar //replace it with yout copyright notice!
#include <iostream>
#include <memory>

int main(int argc, char *argv[])
{
    std::unique_ptr<std::string> message{std::make_unique<std::string>("This is message!")};
    if (message != nullptr)
    {
        std::cout << *message << "\n";
    }
    else
    {
        std::cout << "message unique ptr is set to null!\n";
    };
    message.reset();
    if (message != nullptr)
    {
        std::cout << *message << "\n";
    }
    else
    {
        std::cout << "message unique ptr is set to null!\n";
    };

    return 0;
};
