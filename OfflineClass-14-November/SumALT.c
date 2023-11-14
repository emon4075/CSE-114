#include <stdio.h>
int Sum(int a, int b);
int main()
{
    int A, B;
    int Result = Sum(A, B);
    printf("Sum is: %d\n", Result);
    return 0;
}
int Sum(int a, int b)
{
    printf("Enter Two Numbers: ");
    scanf("%d %d", &a, &b);
    int sum = a + b;
    return sum;
}