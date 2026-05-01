#include <stdio.h>

int main() {
    int r, x = 5, y = 3;
    r = !(x > 2);
    printf("!(%d > 2) \n", x);
    printf("Resultado = %d \n", r);
    r = !((x > 7) && (x > y));
    printf("!((%d > 7) && (%d > %d)) \n", x, x, y);
    printf("Resultado = %d \n", r);
    return 0;
}
