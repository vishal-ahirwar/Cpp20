
// Auto Genrated C++ file by newton CLI
// Copyright 2023 Vishal Ahirwar //replace it with yout copyright notice!
#include <iostream>
class Test
{
private:
    int data{};

public:
    Test(const int &data) : data{data} { puts("defalt constructor got called!"); };
    Test(const Test &test) : data{test.data} { puts("copy consttrctor got called!"); };
    void operator=(const Test &right)//copy assignment operator overloading
    {
        this->data = right.data;
        puts("copy assignment operator got called!");
    }
};
int main(int argc, char *argv[])
{
    Test test1{45};
    Test temp{test1};
    Test test2 = test1;
    test1 = temp;
    return 0;
};
