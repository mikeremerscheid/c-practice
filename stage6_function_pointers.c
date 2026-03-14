// stage6_function_pointer.c
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int (*f)(int, int) = add;   // function pointer

    printf("%d\n", f(2, 3));    // call through pointer

    return 0;
}
