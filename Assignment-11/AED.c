#include <stdio.h>
int main()
{
    int gross;
    printf("Gross Amount: ");
    scanf("%d", &gross);
    printf("*******************************************\n");
    float RP = gross * (5 / 100.0);
    printf("Retirement Plan:            -%.2f AED\n", RP);
    printf("Retirement Plan:            -750.00 AED\n");
    float HA = gross * (20 / 100.0);
    printf("Housing Allowance:          +%.2f AED\n", HA);
    printf("Transportation Allowance:   +200.00 AED\n");
    printf("*******************************************\n");
    printf("Net Salary:                 %.2f AED\n", gross - RP - 750.00 + HA + 200.00);
    return 0;
}