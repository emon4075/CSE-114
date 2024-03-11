#include <stdio.h>
int main()
{
  int x=10, *ptr=&x, y=*ptr;
  printf(“%d ia at= %d\n”, *&x, &x);
  printf(“%d ia at= %d\n”, *ptr, ptr);
  printf(“%d ia at= %d\n”, y, &*ptr);
  printf(“%d ia at= %d\n”, ptr, &ptr);
  return 0;
}
