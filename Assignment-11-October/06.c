#include <stdio.h>
int main()
{
    int X, Y, Z;
    printf("Enter the Numbers: \n");
    scanf("%d %d %d", &X, &Y, &Z);
    printf("Total Number is: %d\n", X + Y + Z);
    printf("Average Number: %.2f\n", (X + Y + Z) / 3.0);
    return 0;
}