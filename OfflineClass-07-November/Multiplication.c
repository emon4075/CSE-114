#include <stdio.h>
int main()
{
    int A[2][2], B[2][2], M[2][2];
    printf("Enter Matrix A: \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Value At Index[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter Matrix B: \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Value At Index[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }
    printf("Multiplication Will Be: \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            M[i][j] = 0;
            for (int k = 0; k < 2; k++)
            {
                M[i][j] = M[i][j] + A[i][k] * B[k][j];
            }
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }

    return 0;
}