#include <stdio.h>
int main()
{
    int Speed;
    printf("Enter measured speed: ");
    scanf("%d", &Speed);
    if (Speed > 63)
    {
        printf("Hurricane");
    }
    else if (Speed >= 48)
    {
        printf("Strom");
    }
    else if (Speed >= 28)
    {
        printf("Gale");
    }
    else if (Speed >= 4)
    {
        printf("Breeze");
    }
    else if (Speed >= 1)
    {
        printf("Light Air");
    }
    else
    {
        printf("Calm");
    }

    return 0;
}