
#include <stdio.h>

int main() {
  int x = 10, *ptr = &x, y = *ptr;
  printf("%d is at= %p\n", *(&x), (void *)&x);
  printf("%d is at= %p\n", *ptr, (void *)ptr);
  printf("%d is at= %p\n", y, (void *)&(*ptr));
  printf("%p is at= %p\n", (void *)ptr, (void *)&ptr);
  return 0;
}

