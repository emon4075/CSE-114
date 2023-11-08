#include <stdio.h>
int main()
{
    int N, k = 0;
    printf("Enter Number of Rows: ");
    scanf("%d", &N);
    int Elements = N * N;
    int M[N][N], S1 = 0, S2 = 0, One_Dimensional[Elements];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++, k++)
        {
            printf("Value At Index[%d][%d]: ", i, j);
            scanf("%d", &M[i][j]);
            One_Dimensional[k] = M[i][j];
        }
        printf("\n");
    }
    for (int i = 0; i < Elements; i++)
    {
        if (i % 2 == 0)
        {
            S1 += One_Dimensional[i];
        }
        else
        {
            S2 += One_Dimensional[i];
        }
    }
    printf("Sum of Alternate Elements: %d, %d", S1, S2);
    return 0;
}