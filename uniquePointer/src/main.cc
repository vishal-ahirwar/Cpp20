
// Auto Genrated C++ file by newton CLI
// Copyright 2023 Vishal Ahirwar //replace it with yout copyright notice!
#include <iostream>
#include <memory>

const std::unique_ptr<std::string> &printUnique(const std::unique_ptr<std::string> &ptr)
{
    if (ptr.get() != nullptr)
    {
        printf("print functtion off uptr : %s\n", ptr->c_str());
        *ptr = "new string!";
    };
    return ptr;
};
template <typename T>
std::unique_ptr<T> getUnique()
{
    return std::make_unique<T>();
};
template <typename T, int SiZE>
std::unique_ptr<T[]> getUniqueArray()
{
    return std::make_unique<T[]>(SiZE);
};

class Agent
{
private:
    std::unique_ptr<std::string> name{getUnique<std::string>()};
    std::unique_ptr<double> income{getUnique<double>()};
    std::unique_ptr<int> age{getUnique<int>()};
    std::unique_ptr<char> bloodGroup{getUnique<char>()};

public:
    Agent(const std::string &name, const double &income, const int &age, const char &bloodGroup)
    {
        *this->name = name;
        *this->income == income;
        *this->age = age;
        *this->bloodGroup = bloodGroup;
    };
    Agent()
    {
        printf("%d\t:constructor called\n", this);
    };
    ~Agent()
    {
        printf("%d\t:destructor called\n", this);
    }
    void printAgentInfo() const
    {
        printf("\n\tAgent Name\t:%s\n\tAgent Age\t:%d\n\tAgent Income\t:%lf\n\tAgent BG\t:%c\n", name->c_str(), *age, *income, *bloodGroup);
    };
};
int main(int argc, char *argv[])
{
    /*Agent rakesh{"Rakesh tokla", 450.90, 21, 'O'};*/
    std::unique_ptr<Agent[]> array = getUniqueArray<Agent, 45>();
    return 0;
};
