// cosine similarity
#include <stdio.h>
#include <math.h>
#define pi 3.14
int main()
{
    float up = (3 * 2) + (0 * -2) + (2 * 4);
    float valueOfA = sqrt((3 * 3) + (2 * 2));
    float valueOfB = sqrt((2 * 2) + (-2 * -2) + (4 * 4));
    float value = up / (valueOfA * valueOfB);
    printf("Value of cosTheta: %f\n", value);
    float result = acos(value);
    printf("Angle is: %f radian\n", result);
    printf("Angle is: %f degree\n", (result * 180) / pi);
    return 0;
}