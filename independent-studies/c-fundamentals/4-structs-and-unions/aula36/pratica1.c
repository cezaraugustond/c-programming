#include <stdio.h>
#include <string.h>

struct pessoa {
    char nome[50];
    int idade;
    char rua[40];
    int numero;
};


int main() {
    struct pessoa p1;
    strcpy(p1.nome, "Cezar");
    strcpy(p1.rua, "Avenida 3");
    p1.idade = 23;
    p1.numero = 965;

    struct pessoa p2 = {"Bianka", 22, "Avenida 45", 43};

    struct pessoa p3;

    p3 = p1;

    printf("--- DADOS DA PESSOA 1 --- \n");
    printf("-> Nome: %s \n", p1.nome);
    printf("-> Idade: %d anos \n", p1.idade);
    printf("Rua: %s \n", p1.rua);
    printf("Numero: %d \n", p1.numero);

    printf("--- DADOS DA PESSOA 2 --- \n");
    printf("-> Nome: %s \n", p2.nome);
    printf("-> Idade: %d anos \n", p2.idade);
    printf("Rua: %s \n", p2.rua);
    printf("Numero: %d \n", p3.numero);

    printf("--- DADOS DA PESSOA 3 --- \n");
    printf("-> Nome: %s \n", p3.nome);
    printf("-> Idade: %d anos \n", p3.idade);
    printf("Rua: %s \n", p3.rua);
    printf("Numero: %d \n", p3.numero);
    
    return 0;
}
