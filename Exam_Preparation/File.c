
#include <stdio.h>
#include <stdbool.h>
int main() {
  char c;
  FILE *fp;
  fp = fopen("INPUT.TXT", "w");
  while (true) {
    c = getchar();
    if (c == 'e') {
      break;
    }
    fputc(c,fp);
  }
  fclose(fp);
  fp = fopen("INPUT.TXT", "r");
  while (!feof(fp)) {
    c=fgetc(fp);
    printf("%c", c);
  }
  fclose(fp);
  return 0;
}

