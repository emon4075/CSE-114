// Room Temparature = 72F
#include <stdio.h>
int main()
{
    // PV=0.37*m*(T+460)
    double m;
    m = (32 * 2) / 0.37 * (72 + 460);
    printf("Mass of Air is: %lf pounds\n", m);
    return 0;
}