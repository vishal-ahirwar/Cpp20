#include<iostream>
#include"oval.h"
Oval::Oval(const std::string&str,const int&x,const int&y):Shape(str),xRadius{x},yRaduis{y}{};
Oval::~Oval()
{
    std::cout<<"[Oval]"<<" descructor get called!\n";  
};
int Oval::GetArea()const
{
    return 3.14*xRadius*yRaduis;
};
