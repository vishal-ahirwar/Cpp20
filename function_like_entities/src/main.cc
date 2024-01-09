
// Auto Genrated C++ file by newton CLI
//Simple Calculator but complicated code ;)
#include"utility.hxx"
#include<string.h>
int main(int argc, char *argv[])
{

    int (*excute)(int, int);
    int a{}, b{}, input{};

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
