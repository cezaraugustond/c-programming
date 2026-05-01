#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char frase[50];
    char letra;
    printf("Digite uma frase(sem acento): ");
    fgets(frase, sizeof(frase), stdin);
    frase[strcspn(frase, "\n")] = '\0';
    printf("Letra(sem acento) a ser contada: ");
    scanf(" %c", &letra);
    letra = tolower(letra);
    int tamanho = strlen(frase), contador = 0, i;
    for (i = 0; i < tamanho; i++) {
        frase[i] = tolower(frase[i]);
    }
    for (i = 0; i < tamanho; i++) {
        if (frase[i] == letra) {
            contador++;
        }
    }
    printf("Frase: %s \n", frase);
    printf("A letra (%c) aparece %d vezes na frase. \n", letra, contador);
    return 0;
}
