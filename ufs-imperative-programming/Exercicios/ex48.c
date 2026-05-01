#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char nome[20], sobrenome[20];
    printf("Nome: ");
    fgets(nome, sizeof(nome), stdin);
    printf("Sobrenome: ");
    fgets(sobrenome, sizeof(sobrenome), stdin);
    nome[strcspn(nome, "\n")] = '\0';
    sobrenome[strcspn(sobrenome, "\n")] = '\0';
    for (int i = 0; sobrenome[i] != '\0'; i++) {
        sobrenome[i] = toupper(sobrenome[i]);
    }
    nome[0] = toupper(nome[0]);
    for (int j = 1; nome[j] != '\0'; j++) {
        nome[j] = tolower(nome[j]);
    }
    printf("Autor: %s, %s. \n", sobrenome, nome);
    return 0;
}
