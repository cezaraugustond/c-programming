#include <stdio.h>

int main() {
    int valor1, valor2;
    printf("Valor 1: ");
    scanf("%d", &valor1);
    printf("Valor 2: ");
    scanf("%d", &valor2);
    do {
        printf("%d \n", valor1);
        valor1++;
    } while(valor1 < valor2);
    printf("Fim do programa! \n");
    return 0;
}
