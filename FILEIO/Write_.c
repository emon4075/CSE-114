#include <stdio.h>
#include <stdlib.h>
int main()
{
  FILE *fp;
  fp = fopen("beltola.txt", "r");
  if (fp == NULL) {
    printf("File is Not Opened\n");
    // return 1;
    exit(1);
  }
  int Person;
  printf("Enter The Number of Entries: ");
  scanf("%d", &Person);
  getchar();
  while (Person--) {
    char Name[50];
    char Identity[50];
    printf("Enter Name: ");
    fgets(Name, sizeof(Name), stdin);
    printf("Enter Identity: ");
    fgets(Identity, sizeof(Identity), stdin);
    fprintf(fp, "%s %s\n", Name, Identity);
    // fputc('H',fp);
    // fputs("This Adds A String.\n", fp);
  }
  fclose(fp);
  return 0;
}

