
// Auto Genrated C++ file by newton CLI
// Copyright 2023 Vishal Ahirwar //replace it with yout copyright notice!
#include <stdio.h>
#include <memory.h>
// struct Test
// {
//     int id;
//     int data;
//     struct Test*ptr;
//     // struct Test*AllocateMem()
//     // {
//     //     return (struct Test*)malloc(sizeof(struct Test));
//     // };
// };
#define bool int
#define true 1
#define false 0

bool isPrime(int n)
{
    for (int i = 2; i < n / 2; ++i)
    {
        if (n % i == 0)
            return false;
    };
    return true;
};

void sumOfPrimePairs(int n, int *out)
{
    for (int i = 2; i < n; ++i)
    {
        for (int j = 2; j < n; ++j)
        {
            if (isPrime(j) && isPrime(i))
            {
                if (i + j == n)
                    printf("(%d,%d) ", i, j);
            }
        }
    }
}
int main()
{
    int result;
    sumOfPrimePairs(24, &result);
    return 0;
}