// stage4_struct.c
#include <stdio.h>

struct Point {
    int x;
    int y;
};

int main() {
    struct Point p = {3, 4};   // struct instance

    printf("%d %d\n", p.x, p.y); // field access

    return 0;
}
