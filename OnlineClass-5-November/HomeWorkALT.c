#include <stdio.h>

int main()
{
    int nums[6] = {1, 3, 5, 6, 7};
    int TARGET;
    printf("Enter the Target Value: ");
    scanf("%d", &TARGET);
    int INDEX = -1;

    for (int i = 0; i < 6; i++)
    {
        if (nums[i] == TARGET)
        {
            INDEX = i;
            break;
        }
    }

    if (INDEX != -1)
    {
        printf("Target Found At Index: %d\n", INDEX);
    }
    else
    {
        nums[5] = TARGET;
        for (int i = 0; i < 6; i++)
        {
            for (int j = i + 1; j < 7; j++)
            {
                if (nums[i] > nums[j])
                {
                    int temp = nums[j];
                    nums[j] = nums[i];
                    nums[i] = temp;
                }
            }
        }
        printf("Sorted Array After Insertion: ");
        for (int i = 0; i < 6; i++)
        {
            printf("%d ", nums[i]);
        }
        printf("\n");
        for (int i = 0; i < 6; i++)
        {
            if (nums[i] == TARGET)
            {
                INDEX = i;
                break;
            }
        }
        printf("Target Should Be Inserted At Index: %d\n", INDEX);
    }
    return 0;
}
