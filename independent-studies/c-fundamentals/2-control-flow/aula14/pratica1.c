#include <stdio.h>

int main() {
    int valor;
    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);
    if (valor % 2 == 0) {
        printf("Valor eh PAR. \n");
    } else {
        printf("Valor eh IMPAR. \n");
    }
    printf("FIM DO PROGRAMA.");
    return 0;
}
