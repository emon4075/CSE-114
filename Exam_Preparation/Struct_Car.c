#include <stdio.h>
#include <string.h> // Include string.h for string functions

int main() {
  struct Cars {
    char Brand[20];
    int Year;
  } Emon, Saad;

  // Use strcpy to copy string values
  strcpy(Emon.Brand, "BMW");
  strcpy(Saad.Brand, "NISSAN");

  Emon.Year = 2020;
  Saad.Year = 2021;

  printf("%s Owned in %d\n", Emon.Brand, Emon.Year);
  printf("%s Owned in %d\n", Saad.Brand, Saad.Year);

  return 0;
}

