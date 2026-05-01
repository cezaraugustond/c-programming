#include <stdio.h>
#include <string.h>

int main() {
    char str[30] = "Linguagem C";
    int tamanho = strlen(str), i, contador = 0;
    for (i = 0; i < tamanho; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            contador++;
        }
    }
    printf("Na string tem %d vogais. \n", contador);
    return 0;
}
