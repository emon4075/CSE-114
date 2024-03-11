#include<stdio.h>
int *Maxi_MUM(int *a,int *b)
{
  if (*a>*b) {
    return a;
  }
  else {
    return b;
  }
}
int main()
{
  int A=10,B=20;
  int *Result=Maxi_MUM(&A,&B);
  printf("%d\n",*Result);
  return 0;
}
