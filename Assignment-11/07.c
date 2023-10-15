#include <stdio.h>
#include <math.h>
int main()
{
    int Oposite, Adjacent;
    float Hypotenuse;
    printf("Enter the other two sides: \n");
    scanf("%d %d", &Oposite, &Adjacent);
    Hypotenuse = sqrt((Oposite * Oposite) + (Adjacent * Adjacent));
    printf("Hypotenuse of a Right Triangle: %f\n", Hypotenuse);
    return 0;
}