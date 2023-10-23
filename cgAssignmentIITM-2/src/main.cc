// Prefix Code(Visible)
#include <stdio.h>
#include <math.h>
int main()
{
    // Initialization of variables
    float principal = 10000.00, annualRate = 7.00, monthlyRate, monthlyPayment;
    int numMonths = 24;

    // Reading Inputs
    scanf("%f", &principal);
    scanf("%f", &annualRate);
    scanf("%d", &numMonths);
    //  Write code below to calculate the monthly payment and store the result in monthlyPayment variable
    monthlyRate = (annualRate / 12) / 100;
    monthlyPayment = (principal * (monthlyRate * pow(1 + monthlyRate, (double)numMonths))) / (pow(1 + monthlyRate, (double)numMonths) - 1);
    // Printing the output
    printf("%.2f", monthlyPayment);
    return 0;
}