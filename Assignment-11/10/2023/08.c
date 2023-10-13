#include <stdio.h>
int main()
{
    float X, Poly;
    printf("Enter the value of X: ");
    scanf("%f", &X);
    Poly = (X - 1) / X;
    float Y = Poly + (Poly * Poly) / 2 + (Poly * Poly * Poly) / 3 + (Poly * Poly * Poly * Poly) / 4;
    printf("Value of Y will be: %.4f\n", Y);
    return 0;
}