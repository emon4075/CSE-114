// Residents Tax
#include <stdio.h>
int main()
{
    float Income, Tax;
    printf("Enter User's Income : $");
    scanf("%f", &Income);
    if (Income > 7000)
    {
        Tax = 230.0 + (Income * 0.06);
    }
    else if (Income > 5250)
    {
        Tax = 142.50 + (Income * 0.05);
    }
    else if (Income > 3750)
    {
        Tax = 82.50 + (Income * 0.04);
    }
    else if (Income > 2250)
    {
        Tax = 37.50 + (Income * 0.03);
    }
    else if (Income > 750)
    {
        Tax = 7.50 + (Income * 0.02);
    }
    else
    {
        Tax = Tax * 0.01;
    }
    printf("Tax Due is: %.2f\n", Tax);
    return 0;
}