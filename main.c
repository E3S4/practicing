#include <stdio.h>

int main() {
int x = 10;
int *p = &x;
// pointer changer idk value changes of var
*p = 50;
    printf("%d\n", x);   
    printf("%p\n", p);   // address of x
    printf("%d\n", *p);  

    return 0;
}
