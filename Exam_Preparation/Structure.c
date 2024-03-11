// Here We Took Structure As a Global Scope
#include <stdio.h>
struct My_ST{
  int Num;
  char Letter;
} S1;
int main()
{
  // struct My_ST S1;
  S1.Num=10;
  S1.Letter='E';
  printf("%d\n",S1.Num);
  printf("%c\n",S1.Letter);
  return 0;
}
