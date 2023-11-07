#include <stdio.h>
int main()
{
    int Student = 5, Subject = 3;
    int TER[Student][Subject];
    printf("Enter TER Within Scale of 10: \n");
    for (int i = 0; i < Student; i++)
    {
        printf("TER By Student - %d\n", i + 1);
        for (int j = 0; j < Subject; j++)
        {
            printf("TER at Index[%d][%d]: ", i, j);
            scanf("%d", &TER[i][j]);
        }
        printf("\n");
    }

    int Sum_3rd_Student = 0;
    for (int j = 0; j < Subject; j++)
    {
        Sum_3rd_Student += TER[2][j];
    }
    printf("Average Rating of 3rd Student: %.2f\n", Sum_3rd_Student / 3.0);

    int Sum_Rating_Each[5], Sum;
    for (int i = 0; i < Student; i++)
    {
        Sum = 0;
        for (int j = 0; j < Subject; j++)
        {
            Sum += TER[i][j];
        }
        Sum_Rating_Each[i] = Sum;
    }
    for (int i = 0; i < Student; i++)
    {
        printf("Average Rating of Student - %d: %.2f\n", i + 1, Sum_Rating_Each[i] / 3.0);
    }

    int Sum_Rating_All = 0;
    for (int i = 0; i < Student; i++)
    {
        Sum_Rating_All += Sum_Rating_Each[i];
    }
    printf("Average Rating of All Student: %.2f Out of 30\n", Sum_Rating_All / 5.0);
    return 0;
}