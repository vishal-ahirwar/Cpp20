
//Auto Genrated C++ file by newton CLI
//Copyright 2023 Vishal Ahirwar //replace it with yout copyright notice!
#include<iostream>
#include<list>
#include<algorithm>
template<typename T>
void print(const T&t)
{
    for(const auto v:t)
    {
        std::cout<<v<<", ";
    };
    std::cout<<"\n";
};

int main(int argc,char*argv[])
{
    std::list<int>integers{12,13,131,43,12,3,4,343};
    std::list<int>temp_integer{4,5,6,8,6,4,2};

    integers.sort();
    auto it=std::find(integers.begin(),integers.end(),343);
    integers.insert(it,0);
    integers.push_back(67);
    integers.push_front(123);
    print(integers);
    integers.merge(temp_integer);
    print(integers);
    integers.remove_if([](const int&value){return value%2==0;});
    print(integers);
    return 0;
};

