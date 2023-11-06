#include <stdio.h>
int main()
{
    int N, Sum = 0;
    printf("Enter Number of Elements: ");
    scanf("%d", &N);
    int LA[N];
    printf("Enter %d Elements of the Array: \n", N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &LA[i]);
        Sum += LA[i];
    }
    printf("Mean of the Elements: %.2f\n", Sum / (float)N);
    return 0;
}