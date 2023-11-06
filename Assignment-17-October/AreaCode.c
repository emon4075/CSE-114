// Print Major City Based On Area Code
#include <stdio.h>
int main()
{
    int areaCode;
    printf("Enter Your Area Code: ");
    scanf("%d", &areaCode);
    switch (areaCode)
    {
    case 229:
        printf("Major City: Albany");
        break;
    case 404:
    case 470:
    case 678:
    case 770:
        printf("Major City: Atlanta");
        break;
    case 478:
        printf("Major City: Macon");
        break;
    case 706:
    case 762:
        printf("Major City: Colombus");
        break;
    case 912:
        printf("Major City: Savannah");
        break;
    default:
        printf("Area Code Not Recognized");
        break;
    }
    return 0;
}