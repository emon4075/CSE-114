#include <stdio.h>
int main()
{
    float Price;
    printf("Enter The Price: ");
    scanf("%f", &Price);
    printf("Price in Paise is: %.0f\n", Price * 100);
    return 0;
}