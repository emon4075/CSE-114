// Multiplication Table Using Summation - Emon ⚡
#include <stdio.h>
int main(void)
{
    for (int n = 1; n <= 20; n++)
    {
        for (int i = 1; i <= 10; i++)
        {
            int sum = 0;
            for (int j = 1; j <= i; j++)
            {
                sum += n;
            }
            printf("%d x %d = %d\n", n, i, sum);
        }
        printf("\n");
    }

    return 0;
}
