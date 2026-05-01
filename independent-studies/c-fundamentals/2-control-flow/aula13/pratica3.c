#include <stdio.h>

int main() {
    int valor, y;
    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);
    if (valor > 0) {
        y = valor % 3;
        printf("O resto de %d / 3 eh: %d \n", valor, y);
    }
    printf("FIM DO PROGRAMA!");
    return 0;
}
