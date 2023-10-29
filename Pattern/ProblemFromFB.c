#include <stdio.h>
int main()
{
    int N;
    printf("Enter the Number of Rows: ");
    scanf("%d", &N);
    int k = 0;
    for (int i = 1; i <= N; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = 1; j <= N - 1; j++)
            {
                printf("%d ", k++);
            }
        }
        else
        {
            k = k + 3;
            for (int j = 1; j <= N - 1; j++)
            {
                printf("%d ", k--);
            }
            k = k + N;
        }
        printf("\n");
    }
    // printf("%d", k);
    return 0;
}