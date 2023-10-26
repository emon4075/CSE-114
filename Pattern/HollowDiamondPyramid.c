/*

    *
   * *
  *   *
 *     *
*       *
 *     *
  *   *
   * *
    *

*/
#include <stdio.h>
int main()
{
    int N;
    printf("Enter the Range of the Pyramid: ");
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            if (j == i || j == 1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    for (int i = N - 1; i >= 1; i--)
    {
        for (int j = 1; j <= N - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            if (j == i || j == 1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}