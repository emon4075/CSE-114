#include <stdio.h>
int main()
{
    int N1, N2, N3, N4, Max1, Max2, Min1, Min2, Largest, Smallest;
    printf("Enter Four Integers: ");
    scanf("%d %d %d %d", &N1, &N2, &N3, &N4);
    // First if - Max,Min Between N1,N2
    if (N1 > N2)
    {
        Max1 = N1;
        Min1 = N2;
    }
    else
    {
        Max1 = N2;
        Min1 = N1;
    }
    // Second if - Max,Min Between N3,N4
    if (N4 > N3)
    {
        Max2 = N4;
        Min2 = N3;
    }
    else
    {
        Max2 = N3;
        Min2 = N4;
    }
    // Third if - Largest Between Max1,Max2
    if (Max1 > Max2)
    {
        Largest = Max1;
    }
    else
    {
        Largest = Max2;
    }
    // Fourth if - Smallest Between Min1,Min2
    if (Min1 > Min2)
    {
        Smallest = Min2;
    }
    else
    {
        Smallest = Min1;
    }
    printf("Largest: %d\n", Largest);
    printf("Smallest: %d", Smallest);
    return 0;
}