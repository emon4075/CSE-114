#include <stdio.h>
void Binary_Search(int ITEM)
{
    int DATA[] = {3, 5, 7, 9, 12, 14, 18, 21, 23, 27, 32, 36, 38, 42, 45, 47, 50};
    int LB = 0, UB = 16, MID, LOC, BEG, END;
    BEG = LB;
    END = UB;
    MID = (int)((BEG + END) / 2);
    while (BEG <= END && DATA[MID] != ITEM)
    {
        if (ITEM < DATA[MID])
        {
            END = MID - 1;
        }
        else
        {
            BEG = MID + 1;
        }
        MID = (int)((BEG + END) / 2);
    }
    if (DATA[MID] == ITEM)
    {
        LOC = MID;
        printf("Found at: %d", LOC+1);
    }
    else
    {
        LOC = 0;
        printf("Not Found");
    }
}
int main()
{
    int Target;
    printf("Enter a Target: ");
    scanf("%d", &Target);
    Binary_Search(Target);
    return 0;
}