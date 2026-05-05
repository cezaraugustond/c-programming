#include <stdio.h>

int main() {
    float venda, montante = 0;
    for (int i = 1; i <= 5; i++){
        printf("DEPARTAMENTO %d: \n", i);
        printf("Total de vendas: R$");
        scanf("%f", &venda);
        if (venda > 1750){
            montante += (venda * 0.135);
        }
    }
    printf("Montante destinando a ONG = R$%.2f \n", montante);
    return 0;
}
