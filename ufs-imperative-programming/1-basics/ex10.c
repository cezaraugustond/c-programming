#include <stdio.h>

int main() {
    float valor_amarelas, valor_vermelhas, valor_brancas, total;
    int quant_amarelas, quant_vermelhas, quant_brancas;
    printf("Quantidade de rosas amarelas: ");
    scanf("%d", &quant_amarelas);
    printf("Valor unidade da rosa amarela: R$");
    scanf("%f", &valor_amarelas);
    printf("Quantidade de rosas vermelhas: ");
    scanf("%d", &quant_vermelhas);
    printf("Valor unidade da rosa vermelha: R$");
    scanf("%f", &valor_vermelhas);
    printf("Quantidade de rosas brancas: ");
    scanf("%d", &quant_brancas);
    printf("Valor unidade da rosa branca: R$");
    scanf("%f", &valor_brancas);
    total = (valor_amarelas * quant_amarelas) + (valor_vermelhas * quant_vermelhas) + (valor_brancas * quant_brancas);
    printf("Valor do buque: R$%.2f \n", total);
    return 0;
}
