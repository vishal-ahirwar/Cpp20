
// Auto Genrated C++ file by newton CLI
// Copyright 2023 Vishal Ahirwar //replace it with yout copyright notice!
#include <iostream>
class Test
{
private:
    std::string testString{};
    int testID{};

public:
    Test() = delete;
    Test(const std::string &testString, const int &testID) : testString(testString), testID(testID) { puts("param normal constructor called!"); };
    Test(const Test &test) : testString(test.testString), testID(test.testID) { puts("copy constructor called!"); };
    void print() const;
};
void Test::print()
    const
{
    printf("\n\n[%d]:\n\ttestString  :   %s\n\ttestID  :   %d\n", this, testString.c_str(), testID);
};

int main(int argc, char *argv[])
{
    Test t1("test 2 string", 984), t2(t1), t3(t2);
    t1.print();
    t2.print();
    t3.print();

    return 0;
};
