#include <stdio.h>

int main() {
    int x = 5, y = 3;
    printf("%d > %d? Resultado = %d \n", x, y, x > y);
    printf("%d >= %d + 2? Resultado: %d \n", x, y, x >= y+2);
    printf("%d < %d? Resultado: %d \n", x, y, x < y);
    printf("%d <= %d? Resultado: %d \n", x, y, x <= y);
    printf("%d == %d? Resultado: %d \n", x, y, x == y);
    printf("%d != %d? Resultado: %d \n", x, y, x != y);
    return 0;
}
