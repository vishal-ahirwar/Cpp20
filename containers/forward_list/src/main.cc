
//Auto Genrated C++ file by newton CLI
//Copyright 2023 Vishal Ahirwar //replace it with yout copyright notice!
#include<iostream>
#include<forward_list>

auto find(const std::forward_list<int>&container,const int&value)
{
    auto it_b=container.begin();
    auto it_e=container.end();
    while(it_b!=it_e)
    {
        if(*it_b==value)return it_b;
    };
    return it_b;
};

void display(const std::forward_list<int>&c)
{
    for(const auto&value:c)
    {
        std::cout<<value<<", ";
    };
    std::cout<<std::endl;
}
int main(int argc,char*argv[])
{
    std::forward_list<int>values;
    values.emplace_front(45);
    auto it=find(values,45);
    values.emplace_after(it,56);
    display(values);
    return 0;
};

