#include <stdio.h>
#include <math.h>
int main()
{
    int N, Sum = 0;
    // Prompt the user to enter the number of elements
    printf("Enter Number of Elements: ");
    scanf("%d", &N);
    int LA[N];
    // Prompt the user to enter the elements of the array
    printf("Enter %d Elements of the Array: \n", N);
    // Read the elements into the array and calculate the sum
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &LA[i]);
        Sum += LA[i];
    }
    // Calculate the mean of the elements
    float Mean = (float)Sum / N;
    printf("Mean of the Elements: %.2f\n", Mean);
    float DA[N];
    float DSum = 0;
    // Calculate the squared differences from the mean and the variance
    for (int i = 0; i < N; i++)
    {
        float temp = Mean - LA[i];
        DA[i] = temp * temp;
        DSum += DA[i];
    }
    // Calculate the variance
    float Variance = DSum / N;
    printf("Variance is: %.2f\n", Variance);

    // Calculate and print the standard deviation
    printf("Standard Deviation: %.2f\n", sqrt(Variance));
    return 0;
}
