#include <stdio.h>
void Sort(int DATA[], int N)
{
    int K = 0;
    for (int K = 0; K < N - 1; K++)
    {
        int PTR = 0;
        while (PTR <= (N - K))
        {
            int Temp;
            if (DATA[PTR] > DATA[PTR + 1])
            {
                Temp = DATA[PTR];
                DATA[PTR] = DATA[PTR + 1];
                DATA[PTR + 1] = Temp;
            }
            PTR++;
        }
    }
    for (int K = 0; K < N; K++)
    {
        printf("%d ", DATA[K]);
    }
}
int main()
{
    int N;
    scanf("%d", &N);
    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    Sort(A, N);
    return 0;
}