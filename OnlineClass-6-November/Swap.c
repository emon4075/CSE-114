#include <stdio.h>
int main()
{
    int First = 5, Second = 6, Temp;
    Temp = First;
    First = Second;
    Second = Temp;
    printf("First Value After Swap: %d\n", First);
    printf("Second Value After Swap: %d\n", Second);
    return 0;
}