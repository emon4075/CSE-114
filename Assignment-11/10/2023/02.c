// 1 Inch = 2.54 Centimeters
#include <stdio.h>
int main()
{
    float inch;
    printf("Enter length in Inch Scale: \n");
    scanf("%f", &inch);
    printf("Length in Centimeter Scale: %.2f\n", inch * 2.54);
    return 0;
}