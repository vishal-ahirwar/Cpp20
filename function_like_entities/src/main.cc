
// Auto Genrated C++ file by newton CLI
//Simple Calculator but complicated code ;)
#include <iostream>

void onScreen(void (*printFuction)(const std::string &), const std::string &str)
{
    printFuction(str);
};
void print(const std::string &str)
{
    std::cout << "[print] >> " << str << std::endl;
};

int add(int a, int b) { return a + b; };
int sub(int a, int b) { return a - b; };
int multy(int a, int b) { return a * b; };
int divide(int a, int b)
{
    if (b == 0)return 0;
    else return a / b;
};

int main(int argc, char *argv[])
{

    int (*excute)(int, int);
    int a{}, b{}, input{};

    onScreen(print, "Enter Two values?");
    std::cin >> a >> b;

    onScreen(print, "1.add,2.sub,3.multy,4.divide\n");
    std::cin >> input;

    switch (input)
    {
    case 1:{excute = add;break;};
    case 2:{excute = sub;break;};
    case 3:{excute = multy;break;};
    case 4:{excute = divide;break;};
    default:{excute = nullptr;}
    };
    if (excute)std::cout << excute(a, b) << std::endl;
    else std::cout << "Invalid action!" << std::endl;
    return 0;
};
