#include <stdio.h>

int main() {
    int x = 10, y = 10, z = 2;
    x = x + z;
    printf("x = %d \n", x);
    y += z;
    printf("y = %d \n", y);
    return 0;
}
