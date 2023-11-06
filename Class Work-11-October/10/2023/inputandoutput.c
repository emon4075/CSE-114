#include <stdio.h>
int main()
{
    char ch;
    int number;
    printf("Enter any Character: ");
    scanf("%c", &ch);
    printf("Given Character: %c", ch);

    printf("\n\nEnter an integer: ");
    scanf("%d", &number);
    printf("Entered Number is: %d", number);

    return 0;
}