#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char palavra[21];
    char vogais[6] = "aeiou";
    int contador = 0;
    printf("Palavra: ");
    fgets(palavra, sizeof(palavra), stdin);
    palavra[strcspn(palavra, "\n")] = '\0';
    int tamanho = strlen(vogais);
    for (int i = 0; palavra[i] != '\0'; i++) {
        for (int j = 0; j < tamanho; j++) {
            if (tolower(palavra[i]) == vogais[j]) {
                contador++;
                break;
            }
        }
    }
    printf("A palavra tem %d vogais \n", contador);
    return 0;
}
