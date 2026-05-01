#include <stdio.h>
#include <math.h>

int main() {
    int quant_castracoes, arred_quant_vas;
    float quant_limpador, quant_vasilhames, valor_total;
    printf("Quantidade de castracoes: ");
    scanf("%d", &quant_castracoes);
    quant_limpador = quant_castracoes * 25.5;
    quant_vasilhames = quant_limpador / 500.0;
    arred_quant_vas = ceil(quant_vasilhames);
    valor_total = arred_quant_vas * 60;
    printf("Sera usado %.1f ml de limpador de instrumental cirurgico. \n", quant_limpador);
    printf("Quantidade de vasilhames de 500ml necessarios: %d \n", arred_quant_vas);
    printf("Valor total = R$%.2f \n", valor_total);
    return 0;
}
