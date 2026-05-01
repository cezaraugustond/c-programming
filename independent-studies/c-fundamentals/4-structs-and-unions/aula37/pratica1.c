#include <stdio.h>
#include <string.h>

struct pessoa {
    char nome[50], rua[50];
    int idade, numero;
};

int main() {
    const int TAMANHO = 1;
    struct pessoa p[TAMANHO];
    for (int i = 0; i < TAMANHO; i++) {
        printf("-------------------- \n");
        getchar();
        printf("Nome: ");
        fgets(p[i].nome, sizeof(p[i].nome), stdin);
        p[i].nome[strcspn(p[i].nome, "\n")] = '\0';
        printf("Idade: ");
        scanf("%d", &p[i].idade);
        getchar();
        printf("Rua: ");
        fgets(p[i].rua, sizeof(p[i].rua), stdin);
        p[i].rua[strcspn(p[i].rua, "\n")] = '\0';
        printf("Numero: ");
        scanf("%d", &p[i].numero);
    }
    printf("\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("-> REGISTRO %d: \n", i+1);
        printf("Nome: %s \n", p[i].nome);
        printf("Idade: %d anos \n", p[i].idade);
        printf("Rua: %s \n", p[i].rua);
        printf("Numero: %d \n", p[i].numero);
    }

    return 0;
}
