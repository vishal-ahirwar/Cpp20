
// Auto Genrated C++ file by newton CLI
// Copyright 2023 Vishal Ahirwar //replace it with yout copyright notice!

//o(k*n)

#include <stdio.h>
void rightCircularShift(int arr[], int N, int k)
{

    // Write Solution code
    int current = 0;
    int next = arr[0];
    for (int i = 0; i < k; ++i)
    {

        for (int i = 1; i < N; ++i)
        {
            current = arr[i];
            arr[i] = next;
            next = current;
            if (i == N - 1)
                arr[0] = next;
        };
    }
};
void printArray(int *a, int s)
{
    for (int i = 0; i < s; ++i)
    {
        printf("%d, ", a[i]);
    };
    printf("\n");
};

int main(int argc, char *argv[])
{
    int arr[] = {1, 2, 3, 4, 5};
    const int size=sizeof(arr) / sizeof(arr[0]);
    
    printArray(arr, size);
    rightCircularShift(arr,size,2);
    printArray(arr, size);
    return 0;
};
