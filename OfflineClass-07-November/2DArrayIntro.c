#include <stdio.h>
int main()
{
    int disp[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter Value for disp[%d][%d]: ", i, j);
            scanf("%d", &disp[i][j]);
        }
    }
    printf("Two Dimensional Array: \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", disp[i][j]);
        }
        printf("\n");
    }

    return 0;
}