#if !defined(PERSON_H)
#define PERSON_H
#include<string>
class Person
{
protected:
    std::string firstName{};
    std::string lastName{};
    uint16_t age{};

public:
    Person(const std::string&firstName,const std::string&lastName,const int&age):firstName{firstName},lastName{lastName},age{age}{};
    ~Person()=default;
    virtual void printInfo()const;
};

#endif