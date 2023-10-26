/*

1
2 3
4 5 6
7 8 9 10

*/

#include <stdio.h>
int main()
{
    int N, K = 1;
    printf("Enter the Range of the Pyramid: ");
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++, K++)
        {
            printf("%d ", K); // printf("%d ", K++);
        }
        printf("\n");
    }

    return 0;
}