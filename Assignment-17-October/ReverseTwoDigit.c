#include <stdio.h>
int main()
{
    int Number;
    printf("Enter a Two Digit Number: ");
    scanf("%d", &Number);
    int firstDigit = Number % 10;
    Number /= 10;
    int secondDigit = Number % 10;
    printf("Reversed Number is: %d%d\n", firstDigit, secondDigit);
    return 0;
}