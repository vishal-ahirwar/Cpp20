#include"shape.h"
#include<iostream>
#include<string>

Shape::Shape(const std::string&desc):description{desc}
{};
Shape::~Shape()
{
    std::cout<<"[base]"<<description<<" descructor get called!\n";    
};
