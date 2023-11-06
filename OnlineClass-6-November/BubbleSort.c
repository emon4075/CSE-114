#include <stdio.h>
int main()
{
    int DATA[5] = {3, 1, 4, 5, 2};
    int K = 0;
    for (int K = 0; K < 5 - 1; K++)
    {
        int PTR = 0;
        while (PTR <= (5 - K))
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
    for (int K = 0; K < 5; K++)
    {
        printf("%d ", DATA[K]);
    }

    return 0;
}