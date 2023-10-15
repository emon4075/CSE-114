#include <stdio.h>
#define pi 3.14
int main()
{
    float Radius;
    printf("Enter the Radius: ");
    scanf("%f", &Radius);
    float volume = (4 * pi * Radius * Radius * Radius) / 3;
    printf("Volume will be: %.2f\n", volume);
    float area = (4 * pi * Radius * Radius);
    printf("Area will be: %.2f\n", area);
    return 0;
}