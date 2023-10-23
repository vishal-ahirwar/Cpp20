#include "person.h"
#include<iostream>

void Person::printInfo() const
{
    std::cout<<this->firstName<<", "<<this->lastName<<", "<<this->age<<"\n";
};
