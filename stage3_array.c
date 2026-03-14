// stage3_array.c
#include <stdio.h>

int main() {
    int arr[3] = {10, 20, 30};

    printf("%d\n", arr[1]);      // normal indexing
    printf("%d\n", *(arr + 1));  // pointer arithmetic

    return 0;
}
