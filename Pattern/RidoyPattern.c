#include <stdio.h>
int main()
{
    int N;
    printf("Enter Number of Rows: ");
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        // int num = 4; eita efficient na because user input 5 er kom beshi hole bhul output dibe
        int num = N - 1; // This is more user friendly
        for (int j = 1; j <= 1; j++) // I had to run this loop to get the exact output
        {
            printf("%d ", i); 
        }
        int n = num + i;
        for (int j = 2; j <= i; j++)
        {
            printf("%d ", n);
            num--;
            n = n + num;
        }
        printf("\n");
    }

    return 0;
}