#include <stdio.h>

int main() {
    int numero1, numero2, produto;
    printf("Numero 1: ");
    scanf("%d", &numero1);
    printf("Número 2: ");
    scanf("%d", &numero2);
    produto = numero1 * numero2;
    printf("Produto: %d * %d = %d \n", numero1, numero2, produto);
    return 0;
}
