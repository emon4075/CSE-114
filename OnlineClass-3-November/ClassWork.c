#include <stdio.h>
#include <math.h>
int main()
{
    int N, Sum1 = 0, Sum2 = 0, DSum = 0;
    printf("Enter Number of Elements: ");
    scanf("%d", &N);
    int S1[N], S2[N], Diff[N];
    float Mean, SumFA = 0, FA[N];
    printf("Elements For Array-1: ");
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &S1[i]);
        Sum1 += S1[i];
    }
    printf("Elements For Array-2: ");
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &S2[i]);
        Sum2 += S2[i];
        Diff[i] = (S1[i] - S2[i]);
        DSum = DSum + Diff[i];
    }
    Mean = DSum / (10.0);
    for (int i = 0; i < N; i++)
    {
        FA[i] = pow((Diff[i] - Mean), 2);
        SumFA += FA[i];
    }
    printf("Mean: %.2f\n", Mean);
    float SD = sqrt(SumFA / (N - 1));
    printf("Standard Deviation (SD) : %.2f\n", SD);
    float SE = (SD / sqrt(10));
    printf("Standard Error of Mean (SE): %.2f\n", SE);
    printf("t Value : %.2f\n", Mean / SE);
    printf("Degrees of freedom : %d\n", N - 1);
    return 0;
}