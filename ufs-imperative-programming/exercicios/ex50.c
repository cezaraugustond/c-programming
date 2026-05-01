#include <stdio.h>
#include <string.h>

int main() {
    char palavra[21];
    char maiusculas[27] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    char minusculas[27] = {"abcdefghijklmnopqrstuvwxyz"};
    printf("Palavra: ");
    fgets(palavra, sizeof(palavra), stdin);
    palavra[strcspn(palavra, "\n")] = '\0';
    int tamanho_maiusculas = strlen(maiusculas);
    int tamanho_palavra = strlen(palavra);
    for (int i = 0; i < tamanho_palavra; i++) {
        for (int j = 0; j < tamanho_maiusculas; j++) {
            if (palavra[i] == maiusculas[j] || palavra[i] == minusculas[j]) {
                palavra[i] = maiusculas[j];
                break;
            }
        }
    }
    printf("A palavra em maiusculas: %s \n", palavra);
    return 0;
}
