#if !defined(PLAYER_H)
#define PLAYER_H
#include"person.h"
class Player:public Person
{
private:
    std::string gameName;
public:
    Player(const std::string&firstName,const std::string&lastName,const int&age,const std::string&gameName);
    ~Player()=default;
    void printInfo()const override;
};
#endif