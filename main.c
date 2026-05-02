#include <stdio.h>

int main() {
int x = 10;
  int *p = &x;
printf("%i\n", x);
*p = 99;
printf("%i\n", x);

return 0;
}
