#include "person.h"
#include <iostream>
Person::Person(const std::string &firstName, const std::string &lastName, const uint16_t &age) : firstName{firstName}, lastName{lastName}, age{age}

{
    std::cout << "normal constructor called!\n";
}
Person::Person(const Person &source)
{
    this->firstName = source.firstName;
    this->lastName = source.lastName;
    this->age = source.age;
    std::cout << "person copy constructor called!\n";
};
Person::~Person()
{
    std::cout << "Person Destructor Called!\n";
};

void Person::printInfo() const
{
    std::cout << "[base : ]"<<this->firstName << ", " << this->lastName << ", " << this->age << "\n";
};
