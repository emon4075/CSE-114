#include <stdio.h>
int main()
{
    // -------- Array Initialization & Pritning Start -------
    int A[5][5] = {{1, 2, 3, 4, 5},
                   {6, 7, 8, 9, 10},
                   {11, 12, 13, 14, 15},
                   {16, 17, 18, 19, 20},
                   {21, 22, 23, 24, 25}};
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
    // -------- Array Initialization & Pritning ENd ---------
    // ------------ Array Spiral Section Start --------------
    for (int j = 0; j < 5; j++)
    {
        printf("%d, ", A[0][j]);
    }
    for (int i = 1; i < 5; i++)
    {
        printf("%d, ", A[i][4]);
    }
    for (int j = 4; j >= 0; j--)
    {
        printf("%d, ", A[4][j]);
    }
    for (int i = 3; i >= 1; i--)
    {
        printf("%d, ", A[i][0]);
    }
    for (int j = 1; j < 4; j++)
    {
        printf("%d, ", A[1][j]);
    }
    for (int i = 2; i < 4; i++)
    {
        printf("%d, ", A[i][3]);
    }
    for (int j = 2; j >= 1; j--)
    {
        printf("%d, ", A[3][j]);
    }
    for (int j = 1; j < 3; j++)
    {

        if (j == 2)
        {
            printf("%d", A[2][j]);
        }
        else
        {
            printf("%d, ", A[2][j]);
        }
    }
    // ------------ Array Spiral Section End --------------
    return 0;
}