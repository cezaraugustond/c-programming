#include <stdio.h>
#include <string.h>

int main() {
    char palavra[20] = "Linguagem C";
    int tamanho = strlen(palavra);
    printf("Tamanho da palavra (%s) = %d \n", palavra, tamanho);
    printf("\n");

    char copia_palavra[20];
    strcpy(copia_palavra, palavra);
    printf("Copia da palavra: %s \n", copia_palavra);
    printf("\n");

    char palavra1[20] = "Bom ";
    char palavra2[20] = "Dia";
    printf("Concatenacao de palavras (%s) + (%s): ", palavra1, palavra2);
    strcat(palavra1, palavra2);
    printf("%s \n", palavra1);
    printf("\n");

    char palavra3[20] = "LINGUAGEM C";
    printf("As palavras (%s) e (%s) sao iguais? \n", palavra, palavra3);
    if (strcmp(palavra, palavra3) == 0) {
        printf("    -> As palavras sao iguais! \n");
    } else {
        printf("    -> As palavras sao diferentes! \n");
    }
    printf("\n");
    return 0;
}
