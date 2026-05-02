#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = malloc(sizeof(int));

    *p = 42;

    printf("%p\n", p);
    printf("%d\n", *p);
   free(p);
    return 0;
}
