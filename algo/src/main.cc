
// Auto Genrated C++ file by newton CLI
// Copyright 2023 Vishal Ahirwar //replace it with yout copyright notice!
#include <iostream>
#include <algorithm>
#include<set>
#include<unordered_set>
template <typename T>
void print(const T &t)
{
    puts("");
    for (const auto &v : t)
        std::cout << v << ", ";
    puts("");
}
class Divisible
{
private:
    int value{};

public:
    explicit Divisible(const int &value) : value{value} {};
    bool operator()(const int &value)
    {
        return value / this->value == 0;
    };
};

struct Sum
{
    int result{};
    void operator()(const int &value) { result += value; };
};

class AboutToX
{
    int value{};

public:
    explicit AboutToX(const int &value) : value{value} {};
    bool operator()(const int &a, const int &b)
    {
        return a - this->value < b - this->value;
    };
};

int main(int argc, char *argv[])
{

    std::unordered_set<int>ages{90, 3, 121, 45, 23, 89,67,2,1};
    Sum s;
    int counter{};
    std::cout<<"\nmin : "<<*std::min_element(std::begin(ages),std::end(ages),[&counter]( int a, int b)->bool{++counter;return  a<b;})<<"\n"<<counter<<"\n";
    // std::cout << *std::min_element(std::begin(ages), std::end(ages), AboutToX(108)) << ", " << *std::max_element(std::begin(ages), std::end(ages), AboutToX(6)) << "\n";
    // s = std::for_each(std::begin(ages), std::end(ages), s);
    // std::cout << s.result << "\n";
    // std::for_each(std::begin(ages), std::end(ages), [](const auto &value) -> void
    //               { std::cout << value << "\n"; });
    // std::for_each(std::begin(ages), std::end(ages), [](auto &value) -> void
    //               { value /= 2; });
    // std::for_each(std::begin(ages), std::end(ages), [](const auto &value) -> void
    //               { std::cout << value << "\n"; });

    // if (std::all_of(std::begin(ages), std::end(ages), [](const auto &v) -> bool
    //                 { return v % 2 == 0; }))
    //     std::cout << "ok all are even!\n";
    // else
    //     std::cout << "nope all ages are not even\n";

    // if (std::all_of(std::begin(ages), std::end(ages), [](const auto &v) -> bool
    //                 { return v % 2 == 0; }))
    //     std::cout << "yes there is a even number\n";
    // else
    //     std::cout << "all are odds\n";

    // if (std::any_of(std::begin(ages), std::end(ages), Divisible(10)))
    //     std::cout << "yes there is a  number which is divisible by 10\n";
    // else
    //     std::cout << "all are odds\n";

    return 0;
};
