
// Auto Genrated C++ file by newton CLI
// Simple Calculator but complicated code ;)
#include "utility.hxx"
#include <string.h>

class Print
{
public:
    void operator()(const char *str)
    {
        printf("[Print] %s", str);
    };
};

void setup(void (*function)(const char *), const char *str)
{
    function(str);
};


void doSomething(binary func, int a, int b, int &c)
{
    c = func(a, b);
};

void apply(unary func,int&value)
{
    value=func(value);
};

int main(int argc, char *argv[])
{
    // setup(Print,"hello, There!");
    int a{5}, b{5}, c{};
    doSomething(add, a, b, c);
    onScreen(printd, c);
    doSomething(sub, a, b, c);
    onScreen(printd, c);
    doSomething(multy, a, b, c);
    onScreen(printd, c);
    apply(increement,c);
    onScreen(printd,c);
    apply(decreement,c);
    onScreen(printd,c);
    int (*excute)(int, int);
    int input{};

    onScreen(print, "Enter Two values?");
    scanf("%d %d",&a,&b);

    onScreen(print, "1.add,2.sub,3.multy,4.divide");
    scanf("%d",&input);

    switch (input)
    {
    case 1:{excute = add;break;};
    case 2:{excute = sub;break;};
    case 3:{excute = multy;break;};
    case 4:{excute = divide;break;};
    default:{excute = nullptr;}
    };
    if (excute)onScreen(printd,excute(a,b)) ;
    else onScreen(print,"Invalid Action");
    return 0;
};
