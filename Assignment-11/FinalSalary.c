#include <stdio.h>
int main()
{
    float fixedSalary, sales, bonus, tax;
    printf("Enter the amount of fixed salary: ");
    scanf("%f", &fixedSalary);
    printf("Enter the amount of sales: ");
    scanf("%f", &sales);
    bonus = sales * (15 / 100.0);
    tax = fixedSalary * (12 / 100.0);
    printf("Final Salary is: %.2f", fixedSalary + bonus - tax);
    return 0;
}