#include <stdio.h>

int main() {
    float salario;
    printf("Salario: R$");
    scanf("%f", &salario);
    if (salario <= 850)
        salario += 1000;
    printf("Seu salario: R$%.2f \n", salario);
    return 0;
}
