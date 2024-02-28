#include <stdio.h>
int main()
{
  FILE *fp;
  fp=fopen("in.dat","w"); // Opened for writting
  if (fp==NULL) {
    printf("File wasn't Opened\n");
  }
  else {
    printf("FIle is Opened\n");
  }
  fclose(fp);
  return 0;
}
