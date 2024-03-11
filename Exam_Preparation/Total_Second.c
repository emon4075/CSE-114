#include <stdio.h>
void split_time(int Total_Sec,int *Hr,int *Min,int *Sec )
{
  *Hr=Total_Sec/3600;
  Total_Sec=Total_Sec-(*Hr*3600);
  *Min=Total_Sec/60;
  Total_Sec=Total_Sec-(*Min*60);
  *Sec=Total_Sec;
}
int main()
{
  int Total_Sec=3600;
  int Hr,Min,Sec;
  split_time(Total_Sec,&Hr,&Min,&Sec);
  return 0;
}
