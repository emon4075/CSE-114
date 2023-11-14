#include <stdio.h>
void Swap(int a, int b)
{
    int Temp;
    Temp = a;
    a = b;
    b = Temp;
    printf("%d %d", a, b);
}
int main()
{
    int A, B;
    printf("Enter Two Values: ");
    scanf("%d %d", &A, &B);
    Swap(A, B);
    return 0;
}