#include <stdio.h>
#include <limits.h>
int main()
{
    int Temp[4][7];
    printf("Enter Average Temparature in Celsius: \n");
    int highestTemparature = INT_MIN, Day, Week;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            printf("Temparature For Week-%d Day-%d: ", i + 1, j + 1);
            scanf("%d", &Temp[i][j]);
            if (highestTemparature < Temp[i][j])
            {
                highestTemparature = Temp[i][j];
            }
        }
        printf("\n");
    }
    printf("Highest Temparature Was: %d\n", highestTemparature);
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (highestTemparature == Temp[i][j])
            {
                Day = j + 1;
                Week = i + 1;
                break;
            }
        }
    }
    printf("Highest Temparature Was Reported On Day %d of Week %d\n", Day, Week);
    return 0;
}