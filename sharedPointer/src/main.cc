
// Auto Genrated C++ file by newton CLI
// Copyright 2023 Vishal Ahirwar //replace it with yout copyright notice!
#include <iostream>
#include <memory>

const std::shared_ptr<std::string> &printShared(const std::shared_ptr<std::string> &ptr)
{
    if (ptr.get() != nullptr)
    {
        printf("print functtion off uptr : %s\n", ptr->c_str());
        *ptr = "new string!";
    };
    return ptr;
};
template <typename T>
std::shared_ptr<T> getShared()
{
    return std::make_shared<T>();
};
template <typename T, int SiZE>
std::shared_ptr<T[]> getSharedArray()
{
    return new T[SiZE];
};

class Agent
{
private:
    std::shared_ptr<std::string> name{getShared<std::string>()};
    std::shared_ptr<double> income{getShared<double>()};
    std::shared_ptr<int> age{getShared<int>()};
    std::shared_ptr<char> bloodGroup{getShared<char>()};

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
    std::shared_ptr<Agent> rakesh = getShared<Agent>();
    std::cout << rakesh.use_count()<<"\n\n";
    std::shared_ptr<Agent> tempRakesh{};
    std::shared_ptr<Agent[]> agentsList{new Agent[20]};
    std::shared_ptr<std::string> str{std::make_shared<std::string>("Test shared ptr String!")};
    printShared(printShared(str));
    printShared(str);
    return 0;
};
