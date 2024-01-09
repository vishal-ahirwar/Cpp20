
// Auto Genrated C++ file by newton CLI
// Simple Calculator but complicated code ;)
#include "utility.hxx"
#include <string.h>


void doSomething(binary func, int a, int b, int &c)
{
    c = func(a, b);
};

void apply(unary func, int &value)
{
    value = func(value);
};

int main(int argc, char *argv[])
{
    Test test;
    int x=static_cast<int>(test);
    onScreen(printd,x);
    // long long  long have_a_nice_number{};
    int a{5}, b{5}, c{},input{};

    binary binary_array[4] = {add, sub, multy, divide};
    unary unary_array[2] = {increement, decreement};

    int(*test_binary_array[4])(int,int){add,sub,multy,divide};//binary_array and this both are same lol pretty weired syntax hah
    int(*test_unary_array[2])(int){increement,decreement};//unary_array and this both are same heheh;)

    for (int i = 0; i < 4; ++i)
    {
        doSomething(binary_array[i],a,b,c);
        onScreen(printd, c);
    };

    for (int i = 0; i < 2; ++i)
    {
        apply(unary_array[i],c);
        onScreen(printd, c);
    };

    onScreen(print, "0.add,1.sub,2.multy,3.divide");
    scanf("%d", &input);
    if(input<4)onScreen(printd,binary_array[input](a,b));
    return 0;
};
