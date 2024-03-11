#include <stdio.h>
#include <stdlib.h>
int main()
{
  FILE *fp;
  fp=fopen("beltola.txt","r+");
  if (fp==NULL) {
    printf("File is Not Opened");
    exit(1);
  }
  fputs("Remon", fp);
  fputs(" emonaaaaa", fp);
  fclose(fp);
  return 0;
}
