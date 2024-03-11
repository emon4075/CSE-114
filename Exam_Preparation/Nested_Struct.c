#include<stdio.h>
int main()
{
  struct Emm{
    int ID;
    int Salary;
  }Emp;
  struct Organization{
    struct Emm Emp;
  }Org;
  Emp.ID=10;
  Emp.Salary=10000;
  Org.Emp=Emp;
  printf("%d \n %d\n",Org.Emp.ID,Org.Emp.Salary);
  return 0;
}
