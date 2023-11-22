#if !defined(PLAYER_H)
#define PLAYER_H
#include "person.h"
class Player : public Person
{
    using Person::Person; // compiler generated base constructor
private:
    std::string gameName;

public:
    // Player(const std::string&firstName,const std::string&lastName,const int&age,const std::string&gameName);
    Player(const Player &);

    virtual ~Player();
    void printInfo() const override;
};
#endif