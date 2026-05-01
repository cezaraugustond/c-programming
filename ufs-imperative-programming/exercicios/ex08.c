#include <stdio.h>

int main(){
    float valor, valor_desconto;
    int desconto;
    printf("Valor do produto: R$");
    scanf("%f", &valor);
    printf("Percentual do desconto: ");
    scanf("%d", &desconto);
    valor_desconto = valor - (valor * desconto / 100);
    printf("O produto de R$%.2f com %d%% de desconto = R$%.2f \n", valor, desconto, valor_desconto);
    return 0;
}
