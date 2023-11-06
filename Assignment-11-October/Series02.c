#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int result = (n / 3.0) * ((4 * n * n) - 1);
    printf("Sum of the series is: %d", result);
    return 0;
}