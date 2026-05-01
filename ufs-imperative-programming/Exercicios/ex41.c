#include <stdio.h>

int main() {
    int valor;
    char opcao;
    printf("Numero inteiro: ");
    scanf("%d", &valor);
    do {
        printf("Sucessor = %d \n", valor++);
        printf("Desejar continuar? [S/N]: ");
        scanf(" %c", &opcao);
    } while(opcao == 'S' || opcao == 's');
    printf("Programa finalizado! \n");
    return 0;
}
