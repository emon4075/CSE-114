#include <stdio.h>
int main()
{
    int A, B;
    printf("Enter two integers: \n");
    scanf("%d %d", &A, &B);
    printf("Addition is: %d\n", A + B);
    printf("Subtraction is: %d\n", A - B);
    printf("Multiplication is: %d\n", A * B);
    printf("Division is: %.2f\n", (float)A / B);
    return 0;
}