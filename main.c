#include <stdio.h>

int main() {
int *p;
*p = 10; // garbage 
// it will probably throw seg fault
    printf("%p\n", p);   // address of x
    printf("%d\n", *p);  

    return 0;
}
