#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char string[50];
    char string_junta[50];
    char string_invertida_junta[50];

    // Leitura da palavra
    printf("Frase (sem acento): ");
    fgets(string, sizeof(string), stdin);

    //Revomeve a quebra de linha da leitura e delimita o fim da string
    string[strcspn(string, "\n")] = '\0';

    // Declara o tamanho da string
    int tamanho = strlen(string);

    // Transforma toda letra da string original em letra minúscula 
    int i;
    for (i = 0; i < tamanho; i++) {
        string[i] = tolower(string[i]);
    }

    // Faz a junção da string original e armazena em outra string.
    int j;
    int a = 0;
    for (j = 0; j < tamanho; j++) {
        if (string[j] != ' ') {
            string_junta[a] = string[j];
            a++;
        }
    }
    string_junta[a] = '\0';

    // Faz inversão da string junta e armazena em outra string.
    int tamanho_junto = strlen(string_junta);
    int indice = tamanho_junto - 1;
    int c;
    for ( c = 0; c < tamanho_junto; c++) {
        string_invertida_junta[c] = string_junta[indice];
        indice--;
    }
    string_invertida_junta[c] = '\0';

    printf("String original: %s \n", string);
    printf("String junta: %s \n", string_junta);
    printf("String junta e invertida: %s \n", string_invertida_junta);
    if (strcmp(string_junta, string_invertida_junta) == 0) {
        printf("    -> A frase eh um palindromo! \n");
    } else {
        printf("    -> A frase nao eh um palindromo... \n");
    }
    return 0;
}
