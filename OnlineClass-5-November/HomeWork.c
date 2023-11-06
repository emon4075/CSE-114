#include <stdio.h>
int main()
{
    int nums[6] = {1, 3, 5, 6, 7};
    int INDEX, TARGET, BEG = 0, END = 4, MID;
    printf("Enter the Target Value: ");
    scanf("%d", &TARGET);
    MID = (BEG + END) / 2;
    while (BEG <= END && nums[MID] != TARGET)
    {
        if (TARGET < nums[MID])
        {
            END = MID - 1;
        }
        else
        {
            BEG = MID + 1;
        }
        MID = ((BEG + END) / 2);
    }
    if (nums[MID] == TARGET)
    {
        INDEX = MID;
        printf("Target Found At Index: %d\n", INDEX);
    }
    else
    {
        printf("Target Not Found. Let's Insert Target into the Array: \n");
        int temp;
        nums[5] = TARGET;
        for (int i = 0; i < 6; i++)
        {
            for (int j = i + 1; j < 7; j++)
            {
                if (nums[i] > nums[j])
                {
                    temp = nums[j];
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