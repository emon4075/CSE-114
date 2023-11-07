#include <stdio.h>
int main()
{
    int A[2][2], B[2][2], Sum[2][2];
    printf("Enter Matrix A: \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Value At Index[%d][%d]: ",i,j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter Matrix B: \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Value At Index[%d][%d]: ",i,j);
            scanf("%d", &B[i][j]);
        }
    }
    printf("Sum Will Be: \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            Sum[i][j] = A[i][j] + B[i][j];
            printf("%d ", Sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}