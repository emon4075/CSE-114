#include <stdio.h>
int main()
{
    int N;
    printf("Enter Number of Elements: ");
    scanf("%d", &N);
    int LA[N];
    printf("Enter %d Elements of the Array: \n",N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &LA[i]);
    }
    int Max = LA[0];
    int Min = LA[0];
    for (int i = 0; i < N; i++)
    {
        if (Max < LA[i])
        {
            Max = LA[i];
        }
        if (Min > LA[i])
        {
            Min = LA[i];
        }
    }
    printf("Maximum Element: %d\n", Max);
    printf("Minimum Element: %d\n", Min);
    return 0;
}