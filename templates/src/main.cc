
// Auto Genrated C++ file by newton CLI
// Copyright 2023 Vishal Ahirwar //replace it with yout copyright notice!
//NOTE : this code requires C++20 in order to work properly 
#include <iostream>
template <typename T, int loop>
class Data
{
private:
    T data{};
    int count{};

public:
    Data(const T &);
    void print() const;
};
template <typename T, int loop>
Data<T, loop>::Data(const T &data)
{
    this->count = loop;
    this->data = data;
};

template <typename T, int loop>
void Data<T, loop>::print() const
{
    for (int i = 0; i < loop; i++)
    {
        if constexpr (std::is_floating_point<T>())
        {
            printf("%f\n", this->data);
        }
        else if constexpr(std::is_integral<T>())
        {
            printf("%d\n", this->data);
        }
        else
        {
            printf("%s\n", this->data.c_str());
        }
    };
}
#define FREQ 5
int main(int argc, char *argv[])
{

    Data<std::string, FREQ> string{"hello!"};
    Data<double, FREQ> numbers{45.65};
    Data<int, FREQ>integers{ 5 };
    numbers.print();
    string.print();
    integers.print();
    return 0;
};
