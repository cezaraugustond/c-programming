#include <stdio.h>

int main() {
    int quantidade, valor, menor, soma = 0;
    float media;
    printf("Quantidade de numeros: ");
    scanf("%d", &quantidade);
    for(int i = 1; i <= quantidade; i++){
        printf("%do valor: ", i);
        scanf("%d", &valor);
        if (i == 1) {
            menor = valor;
        } else if (valor < menor) {
            menor = valor;
        }
        soma += valor;
    }
    media = (float)soma / quantidade;
    printf("Menor numero digitado: %d \n", menor);
    printf("Media = %.2f \n", media);
    printf("Somatorio = %d \n", soma);
    return 0;
}
