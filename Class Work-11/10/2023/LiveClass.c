#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    printf("Enter the value of 'T': ");
    scanf("%d", &t);
    float inner = (t * t) / sqrt(sqrt(t));
    float mid = pow(inner, t);
    // printf("%f", mid);
    float result = log10(mid);
    printf("%f", result);
    return 0;
}