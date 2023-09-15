
// Auto Genrated C++ file by newton CLI
// Copyright 2023 Vishal Ahirwar //replace it with yout copyright notice!
#include <iostream>
#include <string.h>
using namespace std;
class Class
{
private:
    const char *userName;
    const char *password;
    void invalidate();

public:
    static void print(const std::string &str);
    Class(const char *user, const char *pass)
    {
        Class::print("default constructor called!");
        this->userName = new char(strlen(user));
        this->password = new char(strlen(pass));
        this->userName = user;
        this->password = pass;
    };
    Class(const Class &c)
    {
        Class::print("copy constructor called!");
    };
    Class(Class &&c)
    {
        Class::print("move constructor called!");
        this->userName = new char(strlen(c.userName));
        this->password = new char(strlen(c.password));
        this->userName = c.userName;
        this->password = c.password;
        c.invalidate();
    };
    virtual ~Class()
    {
        // if(this->userName!=nullptr)
        delete this->userName;
        // if(this->password!=nullptr)
        delete this->password;
    };

    void display() const
    {
        if (this->userName != nullptr)
            Class::print(this->userName);
        if (this->password != nullptr)
            Class::print(this->password);
    };
};
void Class::invalidate()
{
    Class::print("invalidating ...");
    this->userName = nullptr;
    this->password = nullptr;
}
void Class::print(const std::string &str)
{
    printf("%s\n", str.c_str());
};

int main(int argc, char *argv[])
{
    Class obj{"hello", "world"};
    obj.display();
    Class obj1(std::move(obj));
    obj.display();
    Class::print("End of the main!");
    return 0;
};
