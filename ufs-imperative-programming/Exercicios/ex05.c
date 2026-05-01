#include <stdio.h>

int main() {
    float valor, total;
    int meses;
    printf("Valor depositado por mes: R$");
    scanf("%f", &valor);
    printf("Quantidade de meses que depositou: ");
    scanf("%d", &meses);
    total = valor * meses;
    printf("Ao depositar R$%.2f por %d meses, o valor total poupado foi R$%.2f \n", valor, meses, total);
    return 0;
}
