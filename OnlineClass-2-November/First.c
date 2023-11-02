#include <stdio.h>
int main()
{
    int Data[5];
    printf("Store Values: \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &Data[i]);
    }
    printf("Stored Values are: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", Data[i]);
    }

    return 0;
}