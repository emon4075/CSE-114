#include <stdio.h>
int main()
{
  int A[]={1,2,3,4,5};
  int *ptr;
  ptr=A;
  printf("%d\n",*(ptr+1));
  return 0;
}
