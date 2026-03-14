// stage5_heap.c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = malloc(sizeof(int));  // allocate memory on heap

    *p = 42;                       // write to allocated memory

    printf("%d\n", *p);

    free(p);                       // release memory

    return 0;
}
