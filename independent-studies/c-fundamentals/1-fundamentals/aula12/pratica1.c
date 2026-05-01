#include <stdio.h>

int main() {
    int r, x = 5, y = 3;
    r = (x > 2) && (y < x);
    printf("(%d > 2) E (%d < %d) \n", x, y, x);
    printf("Resultado = %d \n", r);
    r = (x % 2 == 0) && (y > 0);
    printf("(%d %% 2 == 0) E (%d > 0) \n", x, y);
    printf("Resultado = %d \n", r);
    return 0;
}
