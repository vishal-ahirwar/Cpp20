
// Auto Genrated C++ file by newton CLI
// Copyright 2023 Vishal Ahirwar //replace it with yout copyright notice!
#include <iostream>

typedef const int cint;
typedef const float cfloat;
typedef const double cdouble;
typedef const std::string cstring;

int main(int argc, char *argv[])
{
    const int i=10;
    int*a_ptr=(int*)&i;
    *a_ptr=20;
    std::cout<<i<<" "<<*a_ptr<<"\n";
    return 0;
};
