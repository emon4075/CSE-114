// The Number has No More than 4 Digits.So, the Input Won't be Greater Than 9999
#include <stdio.h>
int main()
{
    int Number;
    printf("Enter a Number: ");
    scanf("%d", &Number);
    if (Number >= 1000)
    {
        printf("The Number %d has 4 Digits!!", Number);
    }
    else if (Number >= 100)
    {
        printf("The Number %d has 3 Digits!!", Number);
    }
    else if (Number >= 10)
    {
        printf("The Number %d has 2 Digits!!", Number);
    }
    else
    {
        printf("The Number %d has 1 Digit!!", Number);
    }

    return 0;
}