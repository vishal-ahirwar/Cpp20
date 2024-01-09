
// Auto Genrated C++ file by newton CLI
// Copyright 2023 Vishal Ahirwar //replace it with yout copyright notice!
//NOTE : this code requires C++20 in order to work properly 
#include <iostream>

template <typename T, int loop>
class Data
{
private:
    T data;
    int count{};
public:
    Data(const T& data) :data{ data }, count{ loop }{};

    void print()const { for (int i = 0; i < count; ++i)std::cout << data << std::endl; };

    friend std::ostream& operator<<(std::ostream& out, const Data<T, loop>& d)
    {
        out << d.data << ", " << d.count;
        return out;
    }
};
#define FREQ 2
int main(int argc, char *argv[])
{

    Data<std::string, FREQ> string{"hello, world!"};
    std::cout <<string<<std::endl;
    Data<double, FREQ> numbers{95.65};
    std::cout << numbers<<std::endl;
    Data<int, FREQ>integers{ 50 };
    std::cout<< integers<<std::endl;
    Data<char*, FREQ>char_pointer{(char*)"say my name"};

    return 0;
};
