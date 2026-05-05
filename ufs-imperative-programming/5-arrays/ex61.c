#include <stdio.h>
#include <ctype.h>

int main() {
    char seq[11], letra, seq2[11];
    int i, opcao, posicao, contador = 0;
    printf("-> JOGADOR A: \n");
    for (i = 0; i < 10; i++) {
        printf("Digite uma das letras (G / R / B): ");
        scanf(" %c", &seq[i]);
        seq[i] = toupper(seq[i]);
    }
    printf("-> JOGADOR B: \n");
    do {
        printf("---------- MENU ---------- \n");
        printf("1- Mostrar a sequencia \n");
        printf("2- Digitar letra \n");
        printf("3- Digitar posicao \n");
        printf("4- Digitar sequencia \n");
        printf("-------------------------- \n");
        opcao = 0;
        while (opcao <= 0 || opcao > 4) {
            printf("Opcao: ");
            scanf("%d", &opcao);
            printf("-------------------------- \n");
            if (opcao <= 0 || opcao > 4) {
                printf("Opcao invalida! Tente novamente... \n");
                printf("-------------------------- \n");
            }
        }
        switch (opcao) {
            case 1:
                printf("Exibindo sequencia: ");
                for (i = 0; i < 10; i++) {
                    printf("%c - ", seq[i]);
                }
                printf("\n");
                printf("-------------------------- \n");
                break;
            case 2:
                printf("Digite a letra para saber em quais posicoes ela esta... \n");
                printf("Letra: ");
                scanf(" %c", &letra);
                letra = toupper(letra);
                for (i = 0; i < 10; i++) {
                    if (seq[i] == letra) {
                        printf("Posicao: %d \n", i+1);
                    }
                }
                printf("-------------------------- \n");
                break;
            case 3:
                printf("Digite uma posicao para saber qual letra ocupa nela... \n");
                printf("Posicao: ");
                scanf("%d", &posicao);
                for (i = 0; i < 10; i++) {
                    if (i == posicao - 1) {
                        printf("Na posicao %d ocupa a letra %c \n", posicao, seq[i]);
                        break;
                    }
                }
                break;
            case 4:
                printf("Digite sua sequencia... \n");
                for (i = 0; i < 10; i++) {
                    printf("Digite uma das letras (G / R / B): ");
                    scanf(" %c", &seq2[i]);
                    seq2[i] = toupper(seq2[i]);
                    if (seq[i] == seq2[i]) {
                        contador++;
                    }
                }
                printf("Voce acertou %d letras de 10 letras. \n", contador);
                printf("JOGO FINALIZADO \n");
                break;
            default:
                printf("Invalido! \n");
        }
    } while (opcao > 0 && opcao <= 3);
    return 0;
}
