#ifndef _UTILITY_
#define _UTILITY_
#include<stdio.h>
using binary = int (*)(int, int);
using unary = int (*)(int);
void onScreen(void (*printFuction)(const char*), const char *str)
{
    printFuction(str);
};
void onScreen(void (*printFunction)(int),int c)
{
    printFunction(c);
}
void printd(int c)
{
    printf("[%d]\n",c);
}
void print(const char*str)
{
    printf("[%s]\n",str);
};

int add(int a, int b) { return a + b; };
int sub(int a, int b) { return a - b; };
int multy(int a, int b) { return a * b; };
int increement(int value){return ++value;};
int decreement(int value){return --value;};

int divide(int a, int b)
{
    if (b == 0)return 0;
    else return a / b;
};

#endif