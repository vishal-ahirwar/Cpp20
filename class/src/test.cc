
#include "test.h"
#include <iostream>
Test::Test(/* args */)
{
    std::cout << "[Test] : Constructor Called at " << this << "\n";
    data = 0;
}

Test::~Test()
{
    std::cout << "[Test] : destructor Called at " << this << "\n";
};
Test *Test::setData(const int &data)
{
    this->data = data;
    return this;
}
int Test::getData() const { return this->data; };