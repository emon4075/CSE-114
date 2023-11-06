#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter the Last Number that you want: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i += 2)
    {
        sum += i;
    }
    printf("Sum of Odd Numbers will be: %d", sum);

    return 0;
}