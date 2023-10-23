#include "player.h"
#include<iostream>
Player::Player(const std::string &firstName, const std::string &lastName, const int &age, const std::string &gameName) : Person(firstName, lastName, age), gameName{gameName} {}

void Player::printInfo() const
{
    std::cout << this->firstName << ", " << this->lastName << ", " << this->age << ", " << this->gameName << "\n";
};
