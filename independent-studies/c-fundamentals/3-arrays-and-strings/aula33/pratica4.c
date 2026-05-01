#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char string[50];
    char string_invertida[50];
    int i;
    printf("Palavra(sem acento): ");
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = '\0';
    int tamanho = strlen(string);
    int indice = tamanho - 1;
    for(i = 0; i < tamanho; i++){
        string[i] = tolower(string[i]);
        string_invertida[i] = string[indice];
        indice--;
    }
    string_invertida[i] = '\0';
    printf("Palavra original: %s \n", string);
    printf("Palavra invertida: %s \n", string_invertida);
    if (strcmp(string, string_invertida) == 0) {
        printf("    -> A palavra eh um palindromo!");
    } else {
        printf("    -> A palavra nao eh um palindromo!");
    }
    return 0;
}
