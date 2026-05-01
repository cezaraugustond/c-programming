#include <stdio.h>

int main() {
    const int TAMANHO = 10;
    int vendedores[TAMANHO];
    int i, contador = 0;
    float soma = 0, media;
    for (i = 0; i < TAMANHO; i++) {
        printf("Total de vendas do vendedor %d: R$", i+1);
        scanf("%d", &vendedores[i]);
        soma += vendedores[i];
    }
    media = soma / TAMANHO;
    for (i = 0; i < TAMANHO; i++) {
        if (vendedores[i] < media) {
            contador++;
        }
    }
    printf("------------------------ RELATORIO ------------------------ \n");
    printf("-> Media = R$%.2f \n", media);
    printf("-> Quantidade de vendedores abaixo da media: %d vendedores. \n", contador);
    return 0;
}
