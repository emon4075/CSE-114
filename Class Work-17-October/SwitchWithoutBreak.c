// Exam Question Out 😁
#include <stdio.h>
int main()
{
    int X;
    printf("Enter a Number: ");
    scanf("%d", &X);
    switch (X)
    {
    case 1:
        printf("One\n");
    case 2:
        printf("Two\n");
    case 3:
        printf("Three\n");
        break;
    case 4:
        printf("Four\n");
    case 5:
        printf("Five\n");
    default:
        break;
    }
    return 0;
}