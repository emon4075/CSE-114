// Using fgetc fucntion
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
    char ch=fgetc(fp);
    printf("%c",ch);
  }
  fclose(fp);
  return 0;
}
