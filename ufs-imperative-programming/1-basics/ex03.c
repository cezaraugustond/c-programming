#include <stdio.h>

int main() {
    int ano_atual, idade, ano_nascimento;
    printf("Ano atual: ");
    scanf("%d", &ano_atual);
    printf("Idade: ");
    scanf("%d", &idade);
    ano_nascimento = ano_atual - idade;
    printf("Ano de nascimento: %d \n", ano_nascimento);
    return 0;
}
