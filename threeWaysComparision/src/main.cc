
// #include <stdio.h>
// int main()
// {
// 	float weightInKg = 0.f, shippingCostAmount = 0.f;
// 	int zone = 0;
// 	scanf("%f", &weightInKg);
// 	scanf("%d", &zone);
// 	if (weightInKg < 0 || zone < 0 || zone > 7)
// 	{
// 		printf("Invalid Input");
// 		return 1;
// 	};
// 	switch (zone)
// 	{
// 	case 1:
// 		shippingCostAmount = 5 * weightInKg;
// 		break;
// 	case 2:
// 		shippingCostAmount = 7 * weightInKg;
// 		break;
// 	case 3:
// 		shippingCostAmount = 10 * weightInKg;
// 		break;
// 	case 4:
// 		shippingCostAmount = 12 * weightInKg;
// 		break;
// 	case 5:
// 		shippingCostAmount = 16 * weightInKg;
// 		break;
// 	case 6:
// 		shippingCostAmount = 17 * weightInKg;
// 		break;
// 	case 7:
// 		shippingCostAmount = 19 * weightInKg;
// 		break;
// 	};
// 	printf("%.2f", shippingCostAmount);
// 	return 0;
// }

// Auto Genrated C++ file by newton CLI
// Copyright 2023 Vishal Ahirwar //replace it with yout copyright notice!
#include <iostream>
int main(int argc, char *argv[])
{
	int i = 0, j = 2025, k = 0;
	while ((j /= 2) > 0)
		i++;
	printf("%d\n", i);
	return 0;
};
// int a,b=5,c=0;
// for(a=0;a<b;a++)
// c+=a;
// printf("%d",c);
// int a=1, b=0, c=0, d=1, e;
// if (a)
//     if (b)
//         e = 1;
//     else if (c)
//         e = 2;
//     else
//         e = 3;
// else if (d)
//     e = 4;
// else
//     e = 5;
// printf("%d", e);
// int a = 0, b = 0;
// while (a < 4)
//     if (b++ % 3 == 0)
//         ++a;
//     else
//         printf("%d : hello\n",a);
// int i, j = 0, n = 5;
// for (i = n; i-- >0;)
//     j++,printf("%d\n", j);
// int i=6,j=0;
// while(i++<5)
// {
//     for(;j++<5;)printf("*\n"),j++;
//     printf("*\n");
// }
// int i = 4;
// int j = 1;
// switch (
//     i + j)
// {
// case 1:
//     j++;
// case 2:
//     j++;
// case 3:
//     j++;
// case 4:
//     j++;

// default:
//     j++;
// }
// printf("%d\n", j);

// int i;
// for (i = 1; i < 25; i++)
// {
//     printf("[%d] : i%3 : %d, i%5 : %d\n",i,i%3,i%5);
//     if (i % 3 == 0 && i % 5 == 0)
//     {
//         printf(" {b} ");
//         break;
//     }
//     if (i % 3 == 0 || i % 5 == 0)
//     {
//         printf(" {c} ");
//         continue;
//     }
// }