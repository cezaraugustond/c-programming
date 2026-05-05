#include <stdio.h>

int main() {
    float valor, limite;
    printf("Limite do cartao: R$");
    scanf("%f", &limite);
    printf("\n");
    while (limite > 0) {
        printf("Valor da compra: R$");
        scanf("%f", &valor);
        if (valor > limite) {
            printf("Esta compra estourara o cartao! \n");
        } else {
            limite -= valor;
            printf("Compra possivel! \n");;
        }
        printf("Limite restante: R$%.2f \n", limite);
        printf("\n");
    }
    printf("Seu limite de compras acabou! \n");
    return 0;
}
