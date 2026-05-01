#include <stdio.h>

int main() {
    int valor;
    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);
    if ((valor % 2 == 0) && (valor > 0)){
        printf("O valor eh par e positivo. \n");
    }
    printf("FIM DO PROGRAMA \n");
    return 0;
}
