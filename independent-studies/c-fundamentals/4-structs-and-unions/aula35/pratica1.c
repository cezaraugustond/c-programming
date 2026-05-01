#include <stdio.h>
#include <string.h>

struct pessoa {
    char nome[50], rua[50];
    int idade, numero;
};

int main() {
    struct pessoa p;

    p.idade = 23;
    strcpy(p.rua, "Avenida 3 poderes");

    printf("Numero: ");
    scanf("%d", &p.numero);
    getchar();

    printf("Nome: ");
    fgets(p.nome, sizeof(p.nome), stdin);
    p.nome[strcspn(p.nome, "\n")] = '\0';

    printf("---- Dados da pessoa ---- \n");
    printf("Nome: %s \n", p.nome);
    printf("Idade: %d anos \n", p.idade);
    printf("Rua: %s \n", p.rua);
    printf("Numero: %d \n", p.numero);

    return 0;
}
