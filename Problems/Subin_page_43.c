// Multiplication Table Using Summation - Emon ⚡
#include <stdio.h>
int main(void)
{
    int n = 1;
    while (n <= 20)
    {
        int i = 1;
        while (i <= 10)
        {
            int j = 1, sum = 0;
            while (j <= i)
            {
                sum += n;
                j++;
            }
            printf("%d x %d = %d\n", n, i, sum);
            i++;
        }
        printf("\n");
        n++;
    }
    return 0;
}