#include <stdio.h>
int main()
{
    int N, ITEM;
    printf("Enter Number of Elements: ");
    scanf("%d", &N);
    int DATA[N + 1];
    printf("Enter Array Elements: ");
    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &DATA[i]);
    }
    printf("Enter the ITEM: ");
    scanf("%d", &ITEM);
    DATA[N] = ITEM;
    int LOC = 1;
    while (DATA[LOC] != ITEM)
    {
        // if (DATA[LOC] == ITEM)
        // {
        //     break;
        // }
        LOC = LOC + 1; // LOC++;
    }
    if (LOC == (N + 1))
    {
        printf("Not Found");
    }
    else
    {
        printf("Found at index: %d", LOC);
    }

    return 0;
}