// memory_demo.c
#include <stdio.h>
#include <stdlib.h> // required for malloc() and free()

int main() {
    // 1. Allocate memory on the heap for an integer
    int *p = malloc(sizeof(int)); // malloc returns a pointer to uninitialized memory
    if (p == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // exit if allocation fails
    }

    // 2. Use the allocated memory
    *p = 42; // store value at allocated memory
    printf("Value stored in heap memory: %d\n", *p);

    // 3. Reallocate memory if needed (optional)
    p = realloc(p, 2 * sizeof(int)); // resize memory block to hold 2 ints
    if (p == NULL) {
        printf("Reallocation failed!\n");
        return 1;
    }
    p[1] = 99;
    printf("Second value after realloc: %d\n", p[1]);

    // 4. Deallocate memory to avoid memory leaks
    free(p);  // releases the heap memory back to the system
    p = NULL; // good practice to avoid dangling pointers

    // 5. Why it's necessary:
    // Heap memory persists beyond the scope of local variables.
    // Without free(), the program would leak memory, eventually consuming all system memory if repeated in loops.

    return 0;
}
