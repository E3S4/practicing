#include <stdio.h>

int main() {
    int x = 10;
    int *p = &x;

    printf("%d\n", x);   // 10
    printf("%p\n", p);   // address of x
    printf("%d\n", *p);  // 10

    return 0;
}
