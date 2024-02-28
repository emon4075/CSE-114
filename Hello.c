#include <stdio.h>
#include <ctype.h>
#include <string.h>

float compute_GPA(char grades[], int n)
{

    float total = 0.0;
    int i;

    for (i = 0; i < n; i++)
    {
        switch (toupper(grades[i]))
        {
        case 'A':
            total += 4.0;
            break;
        case 'B':
            total += 3.0;
            break;
        case 'C':
            total += 2.0;
            break;
        case 'D':
            total += 1.0;
            break;
        case 'F':
        default:
            break;
        }
    }
    return total / n;
}
int main()
{
    char c[10] = "ABCDCA";
    printf("%f", compute_GPA(c, strlen(c)));
    return 0;
}