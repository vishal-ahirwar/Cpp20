
//Auto Generated C++ file by newton CLI
//Copyright 2023 Vishal Ahirwar //replace it with yout copyright notice!
//#include "User.h"
#include <deque>
#include "vector"
#include "string"
#include "iostream"
template<class Type,const int len=50>
void add_some_data(Type&type)
{
    for(int i=0;i<len;++i)
    {
        type.emplace_back(std::to_string(i));
    };
};

template<class Type>
        void display(const Type&type)
{
            for(const auto value:type)
            {
                std::cout<<value<<", ";
            };
            std::cout<<std::endl;
};
template<typename  T,typename type>
void add_sorted(T&container,const type&value)
{
    auto it_begin=container.begin();
    auto it_end=container.end();
    if(container.empty())container.push_back(value);
    else
    {
        while(it_begin!=it_end)
        {
            if(*it_begin>value)
            {
                break;
            }
            ++it_begin;
        }
        container.emplace(it_begin,value);
    }
};

int main(int argc,char*argv[])
{
    std::deque<int>age{};
    add_sorted(age,45);
    add_sorted(age,56);
    add_sorted(age,12);
    add_sorted(age,99);
    display(age);
    puts("[eop]");
    return 0;
};

