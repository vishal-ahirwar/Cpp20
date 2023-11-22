
// Auto Genrated C++ file by newton CLI
// Copyright 2023 Vishal Ahirwar //replace it with yout copyright notice!
#include <stdio.h>
void reverseArray(int a[], int n)
{
    for (int i = 0, j = n - 1; i != j; ++i, --j)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
};
int main()
{
    int a[] = {1, 2, 3, 4, 5,67,8,6,4};
    reverseArray(a, sizeof(a) / sizeof(a[0]));
    for (int i = 0; i < sizeof(a) / sizeof(a[0]); ++i)
        printf("%d, ", a[i]);
    return 0;
}
