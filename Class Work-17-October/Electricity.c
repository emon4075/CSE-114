// Electric Bill ⚡
#include <stdio.h>
int main()
{
    int Units;
    float cost;
    printf("Enter the Units: ");
    scanf("%d", &Units);
    if (Units <= 300)
    {
        if (Units <= 200)
        {
            cost = Units * 0.8;
        }
        else
        {
            cost = (200 * 0.8) + ((300 - Units) * 0.9);
        }
    }
    else
    {
        cost = Units * 1;
    }
    float totalCost = cost + 100;
    if (totalCost > 400)
    {
        totalCost = totalCost + (totalCost * 0.15);
        printf("Total Cost Will be: %.2f", totalCost);
    }
    else
    {
        printf("Total Cost Will be: %.2f", totalCost);
    }
    return 0;
}