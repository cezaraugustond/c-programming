#include <stdio.h>

int main() {
    char string[16], letra;
    printf("String: ");
    fgets(string, sizeof(string), stdin);
    printf("Letra: ");
    scanf(" %c", &letra);
    int posicao = -1;
    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == letra) {
            posicao = i + 1;
            break;
        }
    }
    posicao >= 0 ? printf("A primeira ocorrencia de (%c) na string foi na posicao %d \n", letra, posicao) : printf("Nao ha a letra (%c) na string. \n", letra);
    return 0;
}
