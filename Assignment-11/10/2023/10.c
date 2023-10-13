#include <stdio.h>
int main()
{
    int N;
    printf("Enter a Number: ");
    scanf("%d", &N);
    if (N % 2 == 0)
    {
        printf("%d is an Even !!!\n", N);
    }
    else
    {
        printf("%d is a Odd !!!\n", N);
    }

    return 0;
}