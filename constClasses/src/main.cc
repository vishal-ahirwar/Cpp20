
// Auto Genrated C++ file by newton CLI
// Copyright 2023 Vishal Ahirwar //replace it with yout copyright notice!
#include <iostream>
class User
{
private:
    std::string userName{};
    uint64_t balance{};
    short index{};
public:
    User(const std::string &userName, const uint64_t &balance) : userName(userName), balance(balance){};
    void updateUserName(const std::string &);
    void print()const;
    void print(){
        ++index;
    }
};
void User::updateUserName(const std::string &newUsername)
{
    this->userName = newUsername;
    puts("[msg] username has been updated");
};
void User::print()const
{
    printf("%d : [Username : %s,balance : %u, index : %d]\n", this, userName.c_str(), balance,index);
};

const User&returnUser()
{
    return *(new User("ryan",340));
};
int main(int argc, char *argv[])
{
    const User&ryan=returnUser();
    ryan.print();
    puts("done!");
    return 0;
};
