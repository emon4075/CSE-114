#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c;
    printf("Enter a, b, c serially: \n");
    scanf("%f %f %f", &a, &b, &c);
    if (a == 0 && b == 0)
    {
        printf("No Solution\n");
    }
    else if (a == 0)
    {
        printf("Only Root is: %f\n", -c / b);
    }
    else if (((b * b) - (4 * a * c)) < 0)
    {
        printf("There are no real Roots\n");
    }
    else
    {
        float D = sqrt((b * b) - (4 * a * c));
        float X1 = (-b + D) / (2 * a);
        float X2 = (-b - D) / (2 * a);
        printf("The Roots are: %.2f %.2f", X1, X2);
    }
    return 0;
}
