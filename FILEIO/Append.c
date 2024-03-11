#include <stdio.h>
#include <stdlib.h>
int main()
{
  FILE *fp;
  fp=fopen("beltola.txt","a");
  if (fp==NULL) {
    printf("File is Not Opened");
    exit(1);
  }
  int Entry;
  printf("How Many Entries Do You Want to Add: ");
  scanf("%d",&Entry);
  getchar();
  while (Entry--) {
    char Name[50],Identity[50];
    printf("Enter Your Name: ");
    fgets(Name,sizeof(Name),stdin);
    printf("Enter Your Identity: ");
    fgets(Identity,sizeof(Identity),stdin);
    fprintf(fp,"%s %s\n",Name,Identity);
  }
  return 0;
}
