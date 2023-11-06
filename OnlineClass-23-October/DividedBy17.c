#include <stdio.h>
int main()
{
    int sum = 0;
    for (int i = 100; i <= 200; i++)
    {
        if (i % 17 == 0)
        {
            sum += i;
        }
    }
    printf("Sum of all numbers between 100 to 200 that are divided by 17 is: %d", sum);

    return 0;
}