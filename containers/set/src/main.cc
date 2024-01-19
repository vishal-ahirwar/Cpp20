
// Auto Genrated C++ file by newton CLI
// Copyright 2023 Vishal Ahirwar //replace it with yout copyright notice!
#include <iostream>
#include <set>
template <typename T>
void print(const T &t)
{
    for (const auto v : t)
    {
        std::cout << v << ", ";
    };
    std::cout << "\n";
};

int main(int argc, char *argv[])
{
    std::set<std::string> user_names{};
    user_names.emplace("vishal");
    user_names.emplace("aina");
    user_names.emplace("sayna");
    user_names.emplace("aakash");
    std::cout << "user name u r looking for ??";
    std::string in{};
    std::getline(std::cin, in);
    auto it = user_names.find(in);
    if (it != user_names.end())
    {
        std::cout << *it << " exist in database!\n";
    }
    else
    {
        std::cout << "srry user doesn't exist need to register new user!\n";
    };
    return 0;
};
