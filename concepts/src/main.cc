
//Auto Genrated C++ file by newton CLI
//Copyright 2023 Vishal Ahirwar //replace it with yout copyright notice!
#include<iostream>
#include<type_traits>

namespace standard = std;

template<typename T>
concept isInRangeOf4 = requires 
{
    requires sizeof(T) <= 4 /*{b+a}->std::convertible_to<int>*/;
};

template<typename T>
requires isInRangeOf4<T>
void flipAll( T& value)
{
    value = ~value;
}

template<typename T>
requires std::is_integral<T>::value || std::is_floating_point<T>::value
T add(const T & a, const T & b)
{
    return (a + b);
};

int main(int argc,char*argv[])
{
    //auto intTestValue{ add(45,55) };
 /*   auto floatTestValue{ add(45.5,54.5) };*/
    
    //standard::cout << intTestValue;
    //standard::cout << standard::endl;
    //standard::cout << floatTestValue;

    int x{ 5 };
    flipAll(x);
    char y{ 'a' };
    flipAll(y);
    float z{ 12.4 };
    //flipAll(z);
    // 
    //printing stuff......
    standard::cout << x;
    standard::cout<< standard::endl;
    standard::cout << y;
    standard::cout << standard::endl;
    standard::cout << z;
    standard::cout << standard::endl;

    return 0;
};

