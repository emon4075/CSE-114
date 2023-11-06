#include <stdio.h>
#include <math.h>
int main()
{
    int X;
    printf("Enter the value of X: ");
    scanf("%d", &X);
    int sqreOfX = X * X;
    float F = (3 * sqreOfX * sqreOfX) + (2 * sqrt(X)) - 2;
    float GOF = (5 * F * F * F) - 4;
    printf("GOF X is: %.2f\n", GOF);
    return 0;
}