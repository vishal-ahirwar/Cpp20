#define ON 1
#define OFF 0

// Auto Genrated C++ file by newton CLI
// Copyright 2023 Vishal Ahirwar //replace it with yout copyright notice!
#include <iostream>
#include <string>

#define STATUS OFF

class Test
{
private:
    std::string testString{};
    int testID{};

public:
    virtual ~Test()
    {
        if (STATUS == ON)
            puts("destructor called!");
    };
    Test()
    {
        if (STATUS == ON)
            puts("defailt const called!");
    };
    Test(const std::string &testString, const int &testID) : testString(testString), testID(testID)
    {
        if (STATUS == ON)
            puts("param normal constructor called!");
    };
    Test(const Test &test) : testString(test.testString), testID(test.testID)
    {
        if (STATUS == ON)
            puts("copy constructor called!");
    };
    void print() const;
};
void Test::print()
    const
{
    printf("\n[%d]:{testString  :   %s, testID  :   %d}\n", this, testString.c_str(), testID);
};

int main(int argc, char *argv[])
{
    Test *test[10];
    for (int i = 0; i < 10; ++i)
    {
        test[i] = new Test(std::to_string(i * i), i + i);
    };
    for (int i = 0; i < 10; ++i)
        test[i]->print();
    for (int i = 0; i < 10; ++i)
        delete test[i];

    return 0;
};
