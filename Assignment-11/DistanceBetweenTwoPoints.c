#include <stdio.h>
#include <math.h>
int main()
{
    int X1, X2, Y1, Y2;
    printf("Enter X1: ");
    scanf("%d", &X1);
    printf("Enter Y1: ");
    scanf("%d", &Y1);
    printf("Enter X2: ");
    scanf("%d", &X2);
    printf("Enter Y2: ");
    scanf("%d", &Y2);
    double result = sqrt(((X2 - X1) * (X2 - X1)) + ((Y2 - Y1) * (Y2 - Y1)));
    printf("Diatnce Between the Two Points is: %.2lf", result);
    return 0;
}