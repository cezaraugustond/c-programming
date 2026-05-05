#include <stdio.h>

int main() {
    int soma = 0;
    printf("Os 25 primeiros numeros pares a partir de 2: \n");
    for (int i = 2; i <= 50; i += 2) {
        printf("%d \n", i);
        soma += i;
    }
    printf("Somatorio = %d \n", soma);
    return 0;
}
