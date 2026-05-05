#include <stdio.h>

int main() {
    int valor, soma = 0;
    for (int i = 1; i <= 15; i++) {
        printf("%do valor: ", i);
        scanf("%d", &valor);
        if (valor % 3 == 0) {
            soma += valor;
        }
    }
    printf("Somatorio dos numeros multiplos de 3 = %d \n", soma);
    return 0;
}
