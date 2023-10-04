
// Auto Genrated C++ file by newton CLI
// Copyright 2023 Vishal Ahirwar //replace it with yout copyright notice!
#include <iostream>
#include <memory>
#define DESTRUCTOR_MSG "Destructor Called!\n"

class User
{
private:
    std::string name{};
    std::weak_ptr<User> dost;

public:
    void setDost(std::shared_ptr<User> &dost)
    {
        this->dost = dost;
    };

    std::string getName() const
    {
        return this->name;
    };
    const std::weak_ptr<User> &getDost() const { return this->dost; };
    User(const std::string &name, std::shared_ptr<User> dost = nullptr) : name{name}, dost{dost} {};
    ~User()
    {
        std::cout << DESTRUCTOR_MSG;
    }
};

int main(int c, char *v[])
{
    std::shared_ptr<User> anka{new User(std::string{"Anka"})};
    std::shared_ptr<User> inka{new User(std::string{"inka"})};
    inka->setDost(anka);
    anka->setDost(inka);
    // std::cout << anka->getName() << std::endl<< inka->getName() << std::endl;
    if(!anka->getDost().expired() && !inka->getDost().expired())
    std::cout <<anka->getName()<<" has friend named "<< anka->getDost().lock()->getName() << std::endl<<inka->getName()<<" has friend named "<< inka->getDost().lock()->getName() << std::endl;
    return 0;
};
