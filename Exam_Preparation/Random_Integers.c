#include<stdio.h>
#include<stdlib.h>
int main()
{
  FILE *fp;
  char ch;
  fp=fopen("Random.txt","w");
  if (fp==NULL) {
    printf("File is Not Opened\n");
  }
  for (int i=0;i<100;i++) {
    fprintf(fp, "%d\n",rand()%10);
  }
  fclose(fp);
  fp=fopen("Random.txt","r");
  while (!feof(fp)) {
    ch=fgetc(fp);
    printf("%c",ch);
  }
  return 0;
}
