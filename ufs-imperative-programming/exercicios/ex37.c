#include <stdio.h>

int main() {
    int valor1, valor2;
    printf("Valor 1: ");
    scanf("%d", &valor1);
    printf("Valor 2: ");
    scanf("%d", &valor2);
    if (valor2 > valor1) {
        for(int i = valor1; i <= valor2; i++)
            printf("%d \n", i);
    } else {
        printf("Valor 2 deve ser maior do que Valor 1.\n");
    }
    return 0;
}
