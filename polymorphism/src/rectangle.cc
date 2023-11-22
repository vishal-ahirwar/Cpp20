#include<iostream>
#include"rectangle.h"
Rectangle::Rectangle(const std::string&str,const int&wid,const int&height):Shape(str),width{wid},height{height}{};
Rectangle::~Rectangle()
{
    std::cout<<"[rectangle]"<<" descructor get called!\n";  
}
int Rectangle::GetArea()const
{
    return width*height;
}
int Rectangle::GetWidth()const{return this->width;};
int Rectangle::GetHeight()const{return this->height;};
