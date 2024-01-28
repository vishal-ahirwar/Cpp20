
// Auto Genrated C++ file by newton CLI
// Copyright 2023 Vishal Ahirwar //replace it with yout copyright notice!
#include <iostream>
#include <vector>
#include <algorithm>
#include <ranges>
#define msg(str) std::cout << str << std::endl;
int main(int argc, char *argv[])
{
    std::vector<int> arr{45, 34, 23, 12, 1};
    auto print = [](auto view)
    {for(auto v:view){std::cout<<v<<", ";}std::cout<<std::endl; };
    auto odd = [](const auto &i)
    { return i % 2 != 0; };
    std::ranges::take_view first_three_elements = std::ranges::take_view(arr, 3);
    std::ranges::take_while_view first_odd_elements = std::ranges::take_while_view(arr, odd);
    std::ranges::drop_view drop_first_2_elements = std::ranges::drop_view(arr, 2);
    msg("printing original data : ")
        print(arr);
    msg("taking first three elements")
        print(first_three_elements);
    msg("taking while there is no even numbers")
        print(first_odd_elements);
    msg("dropping first 2 elements")
        print(drop_first_2_elements);

    std::vector<std::pair<int, std::string>> users{{1, "one"}, {2, "two"}, {3, "three"}, {4, "four"}};
    auto keys = std::views::keys(users);
    auto values = std::views::values(users);
    msg("Printing keys : ")
        print(keys);
    msg("Printing values : ")
        print(values);

    // TODO : failter based on ages using views
    return 0;
};
