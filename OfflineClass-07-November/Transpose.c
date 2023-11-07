#include <stdio.h>
int main()
{
    int A[2][2] = {{1, 2}, {3, 4}};
    printf("Array is: \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("Transpose Will be: \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", A[j][i]);
        }
        printf("\n");
    }

    return 0;
}