#include <stdio.h>
#define pi 3.14
int main()
{
    float Radius;
    printf("Enter the Radius of a Circle: ");
    scanf("%f", &Radius);
    printf("Area of the Circle is: %.2f\n", pi * Radius * Radius);
    printf("Circumference of the Circle is: %.2f\n", 2 * pi * Radius);
    return 0;
}