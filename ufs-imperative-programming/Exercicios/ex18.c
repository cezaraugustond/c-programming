#include <stdio.h>

int main() {
    float peso_atual, peso_ideal, perda_mensal; 
    int dias;
    printf("Peso atual(kg): ");
    scanf("%f", &peso_atual);
    printf("Peso ideal(kg): ");
    scanf("%f", &peso_ideal);
    printf("Perda mensal(kg): ");
    scanf("%f", &perda_mensal);
    dias = ((peso_atual - peso_ideal) / perda_mensal) * 31;
    printf("Em %d dias sera alcancado o peso ideal de %.1fKg \n", dias, peso_ideal);
    return 0;
}
