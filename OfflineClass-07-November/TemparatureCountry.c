#include <stdio.h>
#include <limits.h>
int main()
{
    int T[4][12], highTemp[4], lowTemp[4];
    for (int i = 0; i < 4; i++)
    {
        int High = INT_MIN, Low = INT_MAX;
        for (int j = 0; j < 12; j++)
        {
            printf("Temparature of Month-%d of Country-%d: ", j + 1, i + 1);
            scanf("%d", &T[i][j]);
            if (High < T[i][j])
            {
                High = T[i][j];
            }
            if (Low > T[i][j])
            {
                Low = T[i][j];
            }
        }
        printf("\n");
        highTemp[i] = High;
        lowTemp[i] = Low;
    }
    printf("\t   Highest Temparature\t\tLowest Temparature\n");
    for (int i = 0; i < 4; i++)
    {
        printf("Country-%d: \t%d \t\t %d\n", i + 1, highTemp[i], lowTemp[i]);
    }

    return 0;
}