
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
typedef struct 
{
    int rollNumber;
    char name[100];
    int marks;
}Student;
void createArray( Student *students, int n)
{
    for (int i = 0; i < n; ++i)
    {
        scanf("%d",&(students[i].rollNumber));
        scanf("%s", (students[i].name));
        scanf("%d", &(students[i].marks));
    }
};
void printStudentArray(Student*s,int n)
{
    for(int i=0;i<n;++i)
    {
        printf("%d-%s-%d",s[i].rollNumber,s[i].name,s[i].marks);
    };

}
int main()
{
    int result;
    // sumOfPrimePairs(24, &result);
    struct Student arr[5];
    createArray(arr,2);
    printStudentArray(arr,2);
    return 0;
}