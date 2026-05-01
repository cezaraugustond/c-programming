#include <stdio.h>

int main() {
    char caracter;
    printf("Digite um simbolo de pontuacao: ");
    scanf("%c", &caracter);
    switch (caracter) {
        case '.':
            printf("Ponto. \n");
            break;
        case ',':
            printf("Virgula. \n");
            break;
        case ':':
            printf("Dois pontos. \n");
            break;
        case ';':
            printf("Ponto e virgula. \n");
            break;
        default:
            printf("Nao eh pontuacao. \n");
    }
    return 0;
}
