#include <stdio.h>

int main() {
    const int numero = 8;
    int soma = numero + 1;
    printf("Constante = %d \n", numero);
    printf("Soma = %d \n", soma);
    // ERRO: não é permitido alterar o valor de uma constante
    // numero = 10;
    return 0;
}
