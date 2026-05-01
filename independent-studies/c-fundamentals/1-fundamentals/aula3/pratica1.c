#include <stdio.h>

int main() {
    char letra = 'c';
    int idade = 23;
    float altura = 1.77;
    printf("Letra: %c \n", letra);
    printf("Valor ASCII da letra 'c': %d \n", letra);
    printf("Idade: %d \n", idade);
    printf("Altura: %f \n", altura);
    printf("Idade: %d e Altura: %.2f \n", idade, altura);
    return 0;
}
