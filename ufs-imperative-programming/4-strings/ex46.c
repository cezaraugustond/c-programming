#include <stdio.h>
#include <string.h>

int main() {
    char string[21];
    printf("String: ");
    fgets(string, sizeof(string), stdin);
    printf("Exibindo cada letra da string em uma linha: \n");
    int tamanho = strlen(string);
    for (int i = 0; i < tamanho; i++) {
        printf("%c \n", string[i]);
    }
    return 0;
}
