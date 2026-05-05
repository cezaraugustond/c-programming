#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char nome[50];
    printf("Nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';
    int tamanho = strlen(nome);
    for (int i = 0; i < tamanho; i++) {
        if (nome[i] == ' '){
            nome[i+1] = toupper(nome[i+1]);
            i++;
        } else {
            nome[i] = tolower(nome[i]);
        }
    }
    nome[0] = toupper(nome[0]);
    printf("Nome: %s \n", nome);
    return 0;
}
