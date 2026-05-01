#include <stdio.h>

int main() {
    int opcao;
    do {
        printf("--- MENU ---- \n");
        printf("1 - Opcao 1 \n");
        printf("2 - Opcao 2 \n");
        printf("3 - Opcao 3 \n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
    } while ((opcao < 1) || (opcao > 3));
    printf("Voce escolheu a opcao %d \n", opcao);
    return 0;
}
