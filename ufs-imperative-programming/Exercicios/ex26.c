#include <stdio.h>

int main() {
    float peso, altura, imc;
    printf("Peso(kg): ");
    scanf("%f", &peso);
    printf("Altura(m): ");
    scanf("%f", &altura);
    imc = peso / (altura * altura);
    printf("IMC = %.1f \n", imc);
    printf("Classificacao: ");
    if (imc < 18.5){
        printf("Magreza \n");
    } else if (imc < 25) {
        printf("Saudavel \n");
    } else if (imc < 30) {
        printf("Sobrepeso \n");
    } else if (imc < 35) {
        printf("Obesidade Grau I \n");
    } else if (imc < 40) {
        printf("Obesidade Grau II (severa) \n");
    } else {
        printf("Obesidade Grau III (morbida) \n");
    }
    return 0;
}
