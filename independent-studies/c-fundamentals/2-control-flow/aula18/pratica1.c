#include <stdio.h>

int main() {
    int valor1, valor2;
    printf("Valor1 : ");
    scanf("%d", &valor1);
    printf("Valor 2: ");
    scanf("%d", &valor2);
    while (valor1 < valor2) {
        valor1++;
        printf("%d \n", valor1);
    }
    printf("Fim do programa. \n");
    return 0;
}
