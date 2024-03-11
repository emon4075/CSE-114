#include<stdio.h>
int main()
{
  typedef struct{
    int Roll;
    int ID;
  }Student;
  Student A,B;
  A.Roll=10;
  B.Roll=10;
  printf("%d\n %d",A.Roll,B.Roll);
  return 0;
}
