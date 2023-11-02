// Value Searching In An Array
#include <stdio.h>
int main()
{
    int A[5] = {4, 8, 15, 23, 23};
    int N, count = 0, index;
    printf("Enter the Number that You Want to Search: ");
    scanf("%d", &N);
    for (int i = 0; i < 5; i++)
    {
        if (A[i] == N)
        {
            count++;
            index = i; 
            break;
        }
    }
    if (count > 0)
    {
        printf("Value Found at index [%d]", index);
    }
    else
    {
        printf("Value Not Found");
    }

    return 0;
}