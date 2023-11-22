/*
#include <stdio.h>
#include <math.h>
int main()
{
float principalAmount = 0.f, interestRate = 0.f, finalAmount = 0.f;
int years = 0, nInterestPerYear = 0;
scanf("%f", &principalAmount);
scanf("%f", &interestRate);
scanf("%d", &years);
scanf("%d", &nInterestPerYear);
interestRate /= 100;
for (int i = 1; i <= years; ++i)
{
    finalAmount = principalAmount * pow((1 + (interestRate / nInterestPerYear)), nInterestPerYear * i);
    printf("%.2f\n", finalAmount);
}
return 0;
}
*/

#include <stdio.h>
int main()
{
    char bShouldContinue;
    float sum = 0.f;

    do
    {
        float tempInput = 0.f;
        scanf("%f", &tempInput);
        scanf(" %c", &bShouldContinue);
        sum += tempInput;
    } while (bShouldContinue == 'y' || bShouldContinue == 'Y');
    printf("%.2f", sum);

    return 0;
}