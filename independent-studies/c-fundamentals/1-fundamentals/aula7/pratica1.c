#include <stdio.h>

int main() {
    int x1, x2 = 10, x3 = 12;
    float f1, f2 = 5.25, f3 = 10.5;
    char ch1, ch2 = '0', ch3 = 'A';
    x1 = x2 + x3;
    f1 = f2 + f3;
    ch1 = ch2 + ch3; // soma os valores ASCII de '0' (48) + 'A' (65) = 113
    printf("x1 = %d \n", x1);
    printf("f1 = %f \n", f1);
    printf("ch1 = %c \n", ch1); // Exibe o caractere equivalente ao valor 113 na tabela ASCII
    return 0;
}
