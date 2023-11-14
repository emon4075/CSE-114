#include <stdio.h>
int Sum(int a[], int b)
{
    printf("Enter A Numbers: ");
    scanf("%d", &b);
    // int sum = a[0] + b;
    int sum = (*a + 2) + b;
    return sum;
}
int main()
{
    int A[] = {1, 2, 3}, B;
    int Result = Sum(A, B);
    printf("Sum is: %d\n", Result);
    return 0;
}