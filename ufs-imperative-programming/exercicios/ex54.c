#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char palavra[21];
    char consoantes[22] = "bcdfghjklmnpqrstvwxyz";
    printf("Palavra: ");
    fgets(palavra, sizeof(palavra), stdin);
    int tamanho = strlen(palavra);
    int contador = 0;
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; consoantes[j] != '\0'; j++) {
            if(tolower(palavra[i]) == consoantes[j]) {
                contador++;
                break;
            }
        }
    }
    printf("A palavra tem %d consoantes. \n", contador);
    return 0;
}
