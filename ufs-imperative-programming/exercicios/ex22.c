#include <stdio.h>

int main() {
    float valor, frete, valor_final;
    printf("Valor total da compra: R$");
    scanf("%f", &valor);
    if (valor <= 300){
        frete = valor * 0.35;
    } else {
        frete = valor * 0.20;
    }
    valor_final = valor + frete;
    printf("Valor da compra: R$%.2f + valor do frete R$%.2f = valor final: R$%.2f \n", valor, frete, valor_final);
    return 0;
}
