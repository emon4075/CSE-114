/*
 * Obtaining File Name From The Command Line
 */

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
  FILE *fp;

  if (argc!=2) {
    printf("Can Open A FILE\n");
    exit(EXIT_FAILURE);
  }
  if ((fp=fopen(argv[1],"r"))==NULL) {
    printf("%s Can not be Opened\n",argv[1]);
    exit(EXIT_FAILURE);
  }
    printf("%s Can be Opened\n",argv[1]);
    fclose(fp);
  return 0;
}
