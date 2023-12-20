#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("inpu.dat", "w");
    fputs("Computer Programming Language", fp);
    fclose(fp);
    fp = fopen("inpu.dat", "r");
    fseek(fp, 5L, 0);
    printf("%c\n", getc(fp));
    fseek(fp, 7L, 0);
    printf("%c\n", getc(fp));
    fseek(fp, 5L, 1);
    printf("%c\n", getc(fp));
    fseek(fp, -3L, 1);
    printf("%c\n", getc(fp));
    fclose(fp);
    return 0;
}