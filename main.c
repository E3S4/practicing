#include <stdio.h>

int main() {
int x;
int *p= &x;
  *p = 10; // garbage now not after adding that int *p = & stuff ; 
// it will probably throw seg fault
    printf("%p\n", p);   // address of x
    printf("%d\n", *p);  

    return 0;
}
