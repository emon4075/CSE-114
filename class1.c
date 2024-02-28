#include <stdio.h>
typedef struct Data
{
    char name[10];
    int roll;
} Data;

int main()
{
    Data S;
    // S.name = "Emon";
    gets(S.name);
    S.roll = 21;
    printf("%s ", S.name);
    printf("%d ", S.roll);
    return 0;
}