// C program to demonstrate putchar() method

#include <stdio.h>

int main()
{

  // Get the character to be written
  char ch = 'G';

  // Write the Character to stdout
  putchar(ch);
  printf("\n");

  // Reads A Character From The User
  printf("Enter a Character: ");
  char Read=getchar();
  printf("Your Character is: %c\n",Read);

  // Prints String With Spaces
  puts("puts function doesn't need newline.");

  // Takes String As Input With Spaces
  char *S;
  gets(S);
  puts(S);
  return (0);
}

