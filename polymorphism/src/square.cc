#include <iostream>
#include "square.h"

Square::Square(const std::string &str, const int &len) : Shape(str), len{len} {};
Square::~Square()
{
    std::cout << "[Square]" << " descructor get called!\n";
}
int Square::GetArea() const
{
    return len*len;
}
int Square::GetLen()const{return this->len;};