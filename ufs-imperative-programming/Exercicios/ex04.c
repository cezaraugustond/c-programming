#include <stdio.h>

int main() {
    float salario, aumento20, aumento35;
    printf("Salario minino em 2019: R$");
    scanf("%f", &salario);
    aumento20 = salario + (salario * 0.20);
    aumento35 = salario + (salario * 0.35);
    printf("Salario de janeiro de 2020 com 20%% de aumento: R$%.2f \n", aumento20);
    printf("Salario de julho de 2020 com 35%% de aumento: R$%.2f \n", aumento35);
    return 0;
}
