#include <stdio.h>
#include <math.h>

int main() {
    float quant_dia, quant_caixa;
    int total_caixa;
    printf("Quantidade de comprimidos usado diariamente: ");
    scanf("%f", &quant_dia);
    printf("Quantidade de comprimidos por caixa: ");
    scanf("%f", &quant_caixa);
    total_caixa = ceil((quant_dia * 31) /  quant_caixa);
    printf("Quantidades de caixa que deve comprar mensalmente: %d caixas \n", total_caixa);
    return 0;
}
