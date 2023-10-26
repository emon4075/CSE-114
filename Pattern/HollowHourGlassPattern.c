/*

* * * * * * * * *
  *           *
    *       *
      *   *
        *
      *   *
    *       *
  *           *
* * * * * * * * *

*/

#include <stdio.h>
int main()
{
    int N;
    printf("Enter the Range of the Pyramid: ");
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if (i == 1 || i == N || i == j || i + j == N + 1)
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