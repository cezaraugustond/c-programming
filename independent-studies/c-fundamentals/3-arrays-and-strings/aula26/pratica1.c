#include <stdio.h>
#define CIDADES 5
#define DIAS 7

int main() {
    float temp[CIDADES][DIAS], media[CIDADES], maior, menor;
    int dia = 0, cidade = 0;
    for (int i = 0; i < CIDADES; i++){
        printf("--- CIDADE %d --- \n", i+1);
        float soma = 0.0;
        for (int j = 0; j < DIAS; j++){
            printf("Dia %d -> temperatura: ", j+1);
            scanf("%f", &temp[i][j]);
            soma += temp[i][j];
            if (i == 0 && j == 0) {
                maior = temp[i][j];
                menor = temp[i][j];
            }

            if (temp[i][j] > maior){
                maior = temp[i][j];
                dia = j;
            } 

            if (temp[i][j] < menor) {
                menor = temp[i][j];
                cidade = i;
            }
        }
        media[i] = soma / 7.0;
    }
    printf("\n");
    printf("Temperatura media semanal de cada cidade: \n");
    for (int i = 0; i < CIDADES; i++) {
        printf("Cidade %d -> media = %.1f \n", i+1, media[i]);
    }
    printf("\n");
    printf("Dia mais quente da semana: dia %d \n", dia+1);
    printf("Cidade que teve a menor temperatura na semana: cidade %d \n", cidade+1);
    return 0;
}
