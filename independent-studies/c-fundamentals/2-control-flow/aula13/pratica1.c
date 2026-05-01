#include <stdio.h>

int main() {
    int valor;
    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);
    if (valor > 0){
        printf("O valor %d eh positivo \n", valor);
    }
    printf("FIM DO PROGRAMA \n");
    return 0;
}
