#include <stdio.h>

int main() {
    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    if (numero == 0){
        printf("O numero eh igual a 0 \n");
    } else {
        if (numero > 0) {
            printf("O numero eh positivo. \n");
        } else{
            printf("O numero eh negativo. \n");
        }
    }
    return 0;
}
