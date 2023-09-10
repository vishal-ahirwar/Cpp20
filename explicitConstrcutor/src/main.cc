
// Auto Genrated C++ file by newton CLI
// Copyright 2023 Vishal Ahirwar //replace it with yout copyright notice!
#include <iostream>
class Add
{
private:
    int data{};

public:
    explicit Add(const int &data) : data(data){};
    int add(const Add &ref);
};
int Add::add(const Add &ref)
{
    return this->data + ref.data;
};

int main(int argc, char *argv[])
{
    Add x(45);
    Add y(45);
    using namespace std;
    cout << y.add(Add(55)) << endl;

    return 0;
};
