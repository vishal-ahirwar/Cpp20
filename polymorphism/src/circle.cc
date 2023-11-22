#include "circle.h"
#include <iostream>
Circle::Circle(const std::string &des, const int &r) : Shape(des), radius{r} {};
Circle::~Circle()
{
    std::cout << "[circle]"  << " descructor get called!\n";
}
int Circle::GetArea() const
{
    return 3.14 * (radius * radius);
};
int Circle::GetRadius()const{return this->radius;};
