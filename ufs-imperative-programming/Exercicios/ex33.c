#include <stdio.h>

int main() {
    int valor, soma = 0;
    for (int i = 1; i <= 10; i++){
        printf("%do valor: ", i);
        scanf("%d", &valor);
        soma += valor;
    }
    printf("Somatorio = %d \n", soma);
    return 0;
}
