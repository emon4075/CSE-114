#include <stdio.h>
int main()
{
    float hour, rate;
    printf("Enter Hour and Rate : ");
    scanf("%f %f", &hour, &rate);
    float Gross = hour * rate;
    printf("Gross pay is: %.0f\n", Gross);
    float bonus = Gross * (7 / 100.0);
    float tax = Gross * (5 / 100.0);
    printf("Net pay is: %.2f\n", Gross + bonus - tax);
    return 0;
}