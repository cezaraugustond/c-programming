#include <stdio.h>

int main() {
    int x = 97;
    char ch1, ch2 = 'A';
    ch1 = x;
    // Exibe o caractere equivalente ao valor 97 da tabela ASCII
    printf("ch1 = %c \n", ch1);
    x = ch2;
    // Exibe o valor da tabela ASCCI equivalente a letra 'A'
    printf("x = %d \n", x);
    return 0;
}
