
#include<stdio.h>
int divide(int a, int b){return b==0?0:a/b;};
int main(int argc, char *argv[])
{
    int a{5}, b{5},input{};
    printf("%s","Enter two values\n");
    scanf("%d %d",&a,&b);
    int(*binary_array[4])(int,int) = {[](int a,int b){return a+b;}, [](int a,int b){return a-b;},[](int a,int b){return a*b;}, divide};
    printf("%s","0.add,1.sub,2.multy,3.divide\n");
    scanf("%d", &input);
    if(input<4)printf("result : %d\n",binary_array[input](a,b));
    return 0;
};
