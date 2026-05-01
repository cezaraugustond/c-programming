#include <stdio.h>
#include <string.h>

int main() {
    char str[30] = "Linguagem C";
    char vogais[11] = "aeiouAEIOU";
    int j, i, contador = 0;
    int tamanho1 = strlen(str);
    int tamanho2 = strlen(vogais);
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
