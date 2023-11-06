#include <stdio.h>
#include <math.h>
int main()
{
    int X, T;
    printf("Enter the value of X & T: ");
    scanf("%d %d", &X, &T);
    double second = ((3 * T) / (6.0 * T * T)) * ((3 * T) / (6.0 * T * T));
    double down = sqrt(X * T);
    double first = sqrt(((24 * T) - (10 * T)) / (down + 100));
    double m = first + second;
    printf("Value of M is: %lf\n", m);
    return 0;
}
