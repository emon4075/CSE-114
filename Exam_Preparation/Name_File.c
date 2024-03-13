#include<stdio.h>
#include<stdlib.h>
int main()
{
  FILE *fp;
  fp=fopen("Names.txt","w");
  if (fp==NULL) {
    printf("File is Not Opened.\n");
    exit(1);
  }
  int Number;
  printf("Enter The Number of Students: \n");
  scanf("%d",&Number);
  getchar();
  while (Number--) {
    char Name[30];
    printf("Enter The Name: ");
    fgets(Name,sizeof(Name),stdin);
    fprintf(fp, "%s",Name);
  }
  fclose(fp);
  fp=fopen("Names.txt","r");
  while (!feof(fp)) {
    char Ch=fgetc(fp);
    printf("%c",Ch);
  }
  fclose(fp);
  return 0;
}
