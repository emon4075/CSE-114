#include <stdio.h>
int main()
{
    int N, Position, Value;
    printf("Enter the Number of Elements: ");
    scanf("%d", &N);
    int Array[N + 1];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &Array[i]);
    }
    printf("Enter the Position & Value that you want to insert: ");
    scanf("%d %d", &Position, &Value);
    for (int i = N + 1; i >= Position; i--)
    {
        Array[i] = Array[i - 1];
    }
    Array[Position] = Value;
    for (int i = 0; i < N + 1; i++)
    {
        printf("%d ", Array[i]);
    }

    return 0;
}