#include <stdio.h>

int main() {
    int x = 10;

    int *p = &x;      // pointer holds address of x

    printf("%d\n", x);   // value
    printf("%p\n", p);   // memory address
    printf("%d\n", *p);  // dereference pointer

    return 0;
}
