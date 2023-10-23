
// Auto Genrated C++ file by newton CLI
// Copyright 2023 Vishal Ahirwar //replace it with yout copyright notice!
#include <iostream>
#include <cmath>
long double sqrtOfTwo(const int &precision)
{
    long double a0{2.0}, output{a0};
    for (int i = 0; i < precision; ++i)
    {
        output = (output / 2) + (1 / output);
    };
    return output;
};

int main(int argc, char *argv[])
{
    // double input{};
    // double test#3;
    // std::cin>>input;
    // std::cout<<"sqrt of "<<input<<" : "<<sqrt(input)<<" and the sqrtOfTwo is : ";
    // printf("%.30lf\n",sqrtOfTwo(30));
    // int a = 1, b = 2, c = 2;
    // a = 2 * (b = 2 * (c == 1));
    // printf("%d\n", a + b * c);
    // int a=5,b=1;
    // printf("%d\n",a=b&&a==b);
    int a,b,c,d;
    a=b=c=d=5;
    a+=b+=c+=d+=1;
    printf("%d\n",a+b+c+d);
    double include=0;
    return 0;
};
