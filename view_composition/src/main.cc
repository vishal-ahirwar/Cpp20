
//Auto Genrated C++ file by newton CLI
//Copyright 2023 Vishal Ahirwar //replace it with yout copyright notice!
#include<iostream>
#include<vector>
#include<algorithm>
#include<time.h>
#include<ranges>
#include<map>
//function composition

int main(int argc,char*argv[])
{
    std::map<std::string,int>users{};
    std::vector<int>some_randome_data{};
    std::vector<int>data{};
    {auto temp_view=std::views::iota(1)|std::views::take(50);
     std::ranges::copy(temp_view,std::back_inserter(data));}
    std::ranges::copy(data,std::ostream_iterator<int>(std::cout," "));
    std::cout<<std::endl;
    std::ranges::copy(users|std::views::keys|std::views::reverse|
    std::views::transform([](auto val){return val+" yes";}),
    std::ostream_iterator<std::string>(std::cout,", "));
    std::cout<<std::endl;
    std::ranges::copy(users|std::views::values|std::views::reverse|
    std::views::transform([](auto value){return value*value;}),
    std::ostream_iterator<int>(std::cout,", "));
    std::cout<<std::endl;
    std::srand(time(nullptr));
    std::generate_n(std::back_inserter(some_randome_data),50,[](){return rand()%100+1;});
    std::ranges::copy(some_randome_data,std::ostream_iterator<int>(std::cout," "));
    std::cout<<std::endl;
    std::ranges::copy_if(some_randome_data|std::views::take(25),
    std::ostream_iterator<int>(std::cout," "),
    [](auto&v){return v%2==0;});
    std::cout<<std::endl;
    std::ranges::copy_if(some_randome_data|std::views::take(25),
    std::ostream_iterator<int>(std::cout," "),
    [](auto&v){return v%2!=0;});
    std::cout<<std::endl;
    return 0;
};

