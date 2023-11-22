#include "player.h"
#include <iostream>
// Player::Player(const std::string &firstName, const std::string &lastName, const int &age, const std::string &gameName) : Person(firstName, lastName, age), gameName{gameName}

// {

//     std::cout << "Norma; Constructor Called!\n";
// }
Player::Player(const Player &source) :Person{source}/*Person(source.firstName, source.lastName, source.age)*/, gameName{source.gameName}
{
    std::cout << "player copy constructor called!\n";
};

Player::~Player()
{
    std::cout << "Player Destructor Called!\n";
}

void Player::printInfo() const
{
    std::cout << this->firstName << ", " << this->lastName << ", " << this->age << ", " << this->gameName << "\n";
};
