// Using fgets fucntion
#include <stdio.h>
#include <stdlib.h>
int main()
{
  FILE *fp;
  fp=fopen("beltola.txt","r");
  if (fp==NULL) {
    printf("File is Not Opened\n");
    exit(1);
  }
  while (!feof(fp)) {
    char STR[20];
    fgets(STR,20,fp);
    printf("%s",STR);
  }
  fclose(fp);
  return 0;
}
