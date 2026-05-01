#include <stdio.h>

int main() {
    int valor1, valor2;
    printf("Valor 1: ");
    scanf("%d", &valor1);
    printf("Valor 2: ");
    scanf("%d", &valor2);
    while (valor1 <= valor2) {
        valor1++;
        if (valor1 == 7)
            continue;
        printf("%d \n", valor1);
    }
    return 0;
}
