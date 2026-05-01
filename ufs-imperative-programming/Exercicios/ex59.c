#include <stdio.h>

int main() {
    const int TAMANHO = 20;
    int valores[TAMANHO];
    for (int i = 0; i < TAMANHO; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &valores[i]);
    }
    int maior = valores[0], menor = valores[0], opcao;
    float media, soma = 0;
    for (int i = 0; i < TAMANHO; i++) {
        if (valores[i] > maior) {
            maior = valores[i];
        }
        if (valores[i] < menor) {
            menor = valores[i];
        }
        soma += valores[i];
    }
    media = soma / 20;
    do {
        printf("--------- MENU --------- \n");
        printf("1- Maior valor \n");
        printf("2- Menor valor \n");
        printf("3- Media Aritmetica \n");
        printf("4- Somatorio dos valores \n");
        printf("5 - Sair \n");
        printf("------------------------ \n");
        opcao = 0;
        while (opcao <= 0 || opcao > 5) {
            printf("Opcao: ");
            scanf("%d", &opcao);
            printf("------------------------ \n");
            if (opcao <= 0 || opcao > 5) {
                printf("Opcao invalida! Tente novamente... \n");
                printf("------------------------ \n");
            }
        }
        switch (opcao) {
            case 1:
                printf("Maior valor digitado: %d \n", maior);
                break;
            case 2:
                printf("Menor valor digitado: %d \n", menor);
                break;
            case 3:
                printf("Media aritmetica = %.1f \n", media);
                break;
            case 4:
                printf("Somatorio = %.0f \n", soma);
                break;
            case 5:
                printf("PROGRAMA ENCERRADO! \n");
                break;
            default:
                printf("Opcao invalida!");
        }
    } while (opcao > 0 && opcao < 5);
    return 0;
}
