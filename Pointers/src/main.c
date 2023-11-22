
//Auto Genrated C++ file by newton CLI
//Copyright 2023 Vishal Ahirwar //replace it with yout copyright notice!

#include<stdio.h>
int main()
{
    unsigned char data='X';
    const char*constPointer=&data;
    char *const addressIsConst=&data;
    *addressIsConst='x';
   // *constPointer='x'; //Can't change data pointer to a const data
    printf("%c\n",*constPointer);
    return 0;
}