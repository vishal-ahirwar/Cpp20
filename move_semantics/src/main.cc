
// Auto Genrated C++ file by newton CLI
// Copyright 2023 Vishal Ahirwar //replace it with yout copyright notice!
#include <iostream>
#include <cstring>

class User
{
    std::string first_name{};
    std::string last_name{};
    std::string user_name{};
    std::string password{};

    void invalidate()
    {
        first_name = "";
        last_name = "";
        user_name = "";
        password = "";
    }
public:
    User(const std::string& first_name, const std::string& last_name, const std::string& user_name, const std::string& password) :first_name{ first_name }, last_name{ last_name }, user_name{ user_name }, password{password}
    {

        std::cerr << "[msg] Overloaded Constructor called!\n";
    };
    User() { std::cerr << "[msg] default Constructor called!\n"; }
    User(const User &user); // copy constructor
    void operator=(const User &right)noexcept
    {
        std::cerr << "[msg] Copy assignment operator overloaded!\n";

    }; // copy assignment operator overloading

    void operator=(User&& right)noexcept
    {

        std::cerr << "[msg] move assignment operator overloaded!\n";
        if (this == &right)return;
        this->first_name =right.first_name;
        this->last_name =right.last_name;
        this->user_name = right.user_name;
        this->password = right.password;
        right.invalidate();
    };

    friend void printUser(const User *user);
    ~User()=default;
};

User::User(const User &user)
{
    std::cerr << "[msg] Copy Constructor called!\n";
    first_name = user.first_name;
    last_name = user.last_name;
    user_name = user.user_name;
    password = user.password;
};

void printUser(const User *user)
{
    printf("\n[First Name] : %s\n[Last Name] : %s\n[User Name] : %s\n[Password] : *******\n", user->first_name.c_str(), user->last_name.c_str(), user->user_name.c_str());
}
int main(int argc, char *argv[])
{

    User alex{(char *)"alec", (char *)"benjamin", (char *)"heavenly_adopted", (char *)"@342fc"};
    printUser(&alex);
    User ramesh=alex;
    printUser(&ramesh);
    User test;
    test = User("aada", "asd", "asd", "12");
    ramesh = test;
    printUser(&ramesh);
    puts("\nEND\n");
    return 0;
};
