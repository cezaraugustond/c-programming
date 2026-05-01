#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char nome[50], primeiro[50], segundo[50];
    printf("Nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';
    int a = 0, b = 0;
    int espaco;
    for (int i = 0; nome[i] != '\0'; i++) {
        if (nome[i] == ' ') {
            espaco = i;
            break;
        }
    }
    for (int j = espaco + 1; nome[j] != '\0'; j++) {
        nome[j] = toupper(nome[j]);
        primeiro[a] = nome[j];
        a++;
    }      
    for (int k = 0; k < espaco; k++) {
        nome[k] = tolower(nome[k]);
        segundo[b] = nome[k];
        b++;
    }
    primeiro[a] = '\0';
    segundo[b] = '\0';
    segundo[0] = toupper(segundo[0]);
    printf("%s, %s \n", primeiro, segundo);
    return 0;
}
