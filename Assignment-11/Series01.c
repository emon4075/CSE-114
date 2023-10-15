#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    float result = (2 / 3.0) * n * (n + 1) * ((2 * n) + 1);
    printf("Sum of the series is: %.2f", result);
    return 0;
}