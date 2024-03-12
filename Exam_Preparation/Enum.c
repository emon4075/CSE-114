#include <stdio.h>
int main()
{
  enum days{Sunday=1,Monday,Tuesday,Wednesday,Thrusday,Friday,Saturday};
  for (int i=Sunday;i<=Saturday;i++) {
    printf("%d\n",i);
  }
  enum months{January=5,February,March,April,May,June,July,August,September,October,November,December};
  for (int i=January;i<=December;i++) {
    printf("%d ",i);
  }
  return 0;
}
