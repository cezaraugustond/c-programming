#include <stdio.h>

int main() {
    float valor_da_compra, valor_pago, troco;
    printf("Valor da compra: R$");
    scanf("%f", &valor_da_compra);
    printf("Valor pago pelo cliente: R$");
    scanf("%f", &valor_pago);
    troco = valor_pago - valor_da_compra;
    printf("Troco = R$%.2f \n", troco);
    return 0;
}
