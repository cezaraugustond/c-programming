#include <stdio.h>

int main() {
    int valor1, valor2, maior;
    printf("Valor 1: ");
    scanf("%d", &valor1);
    printf("Valor 2: ");
    scanf("%d", &valor2);
    (valor1 > valor2) ? printf("Maior valor: %d \n", valor1) : printf("Maior valor: %d \n", valor2);
    return 0;
}
