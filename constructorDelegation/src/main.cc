
// Auto Genrated C++ file by newton CLI
// Copyright 2023 Vishal Ahirwar //replace it with yout copyright notice!
#include <iostream>
class Test
{
private:
    int data{};
    std::string key{};
    double cent{};

public:
    explicit Test(const int &data);
    Test(const int &data, const std::string &key);
    Test(const int &data, const std::string &key, const double &cent);
    Test() = delete;
};

int main(int argc, char *argv[])
{
    Test test(45);
    return 0;
};

Test::Test(const int &data) : Test(data, "None")
{
    using namespace std;
    cout << "one param constructor called!" << endl;
}

Test::Test(const int &data, const std::string &key) : Test(data, key, 12.56)
{
    using namespace std;
    cout << "three param constructor called!" << endl;
}

Test::Test(const int &data, const std::string &key, const double &cent) : data(data), key(key), cent(cent)
{
    using namespace std;
    cout << "four param constructor called!" << endl;
}
