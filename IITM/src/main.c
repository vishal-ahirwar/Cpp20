
// // Auto Genrated C++ file by newton CLI
// // Copyright 2023 Vishal Ahirwar //replace it with yout copyright notice!
#include <stdio.h>
int Recursion(int n);
int counter{};
// int sub(int a,int b);
// int sub(int a,int b)
// {
//     return add(a,-b);
// };
// int add(int a,int b)
// {
//     return a+b;
// };

int Recursion(int n)
{
    ++counter;
    if (n <= 1)
        return n;
    return Recursion(n - 1) + Recursion(n - 2);
};
void second_largest(int *a, int *b, int *c, int *d, int *e, int *res)
{
    int *max = a;
    if (*a > *max)
        max = a;
    if (*b > *max)
        max = b;
    if (*c > *max)
        max = c;
    if (*d > *max)
        max = d;
    if (*e > *max)
        max = e;
    if (*a != *max)
        *res = *a;
    else if (*b != *max)
        *res = *b;
    else if (*c != *max)
        *res = *c;
    else if (*d != *max)
        *res = *d;
    else
        *res = *e;

    if (*b > *res && *b != *max)
        *res = *b;
    if (*c > *res && *c != *max)
        *res = *c;
    if (*d > *res && *d != *max)
        *res = *d;
    if (*e > *res && *e != *max)
        *res = *e;
}
int main(int argc, char *argv[])
{
//     int counter{15};
//     int a{1}, b{2}, c{3}, d{4}, e{5}, res{};
//     second_largest(&a, &b, &c, &d, &e, &res);
//    //std::cout << res << "\n";
//      //std::cout << "\nOutput :  " << Recursion(5) << "\ncounter : " << ::counter << "\n";//Guess the Output & value of Counter global variable;
//     //  std::cout<<(sizeof(char));
//     //  byte ccc;

    return 0;
};
// #include <stdio.h>

// // Write Code below
// #define bool int
// #define true 1
// #define false 0
// int prime_sum(int p, int q)
// {
//     int result = 0;
//     for (int i = p; i <= q; ++i)
//     {
//         bool bIsPrime = true;
//         if(i==1)continue;
//         for (int j = 2; j*j <= i; ++j)
//         {
//             if (i % j == 0 && i != j)
//             {
//                 bIsPrime = false;
//                 break;
//             }
//         };
//         if (bIsPrime == true)
//         {
//             result += i;
//             printf("%d, ", i);
//         }
//     };
//     return result;
// };

// int main()
// {
//     int p, q;
//     scanf("%d", &p);
//     scanf("%d", &q);
//     printf("%d", prime_sum(p, q));
//     return 0;
// }
