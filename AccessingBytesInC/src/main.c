
//Auto Genrated C++ file by newton CLI
//Copyright 2023 Vishal Ahirwar //replace it with yout copyright notice!

#include<stdio.h>
int main()
{
    unsigned int input=0;
    scanf("%X",&input);
    unsigned char*address=(char*)(&input);
    for(int i=3;i>-1;i--)
    {
        printf("%02X\n",address[i]);
    };
    return 0;
}