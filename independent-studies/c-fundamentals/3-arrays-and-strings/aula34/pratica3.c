#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[30] = "Linguagem C";
    char vogais[11] = "aeiou";
    int tamanho1 = strlen(str);
    int tamanho2 = strlen(vogais);
    int i, j, contador = 0;
    for (i = 0; i < tamanho1; i++) {
        str[i] = tolower(str[i]);
    }
    for (i = 0; i < tamanho1; i++) {
        for (j = 0; j < tamanho2; j++) {
            if (str[i] == vogais[j]) {
                contador++;
                break;
            }
        }
    }
    printf("Na string tem %d vogais. \n", contador);
    return 0;
}
