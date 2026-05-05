#include <stdio.h>
#include <math.h>

int main() {
    int opcao;
    float lado, resultado;
    printf("Lado do quadrado: ");
    scanf("%f", &lado);
    printf("---------------------------- \n");
    printf("----------- MENU ----------- \n");
    printf("1- area \n");
    printf("2- perimetro \n");
    printf("3- diagonal \n");
    printf("---------------------------- \n");
    printf("Opcao: ");
    scanf("%d", &opcao);
    printf("---------------------------- \n");
    switch (opcao) {
        case 1:
            resultado = lado * lado;
            printf("Area do quadrado = %.1f \n", resultado);
            break;
        case 2:
            resultado = lado * 4;
            printf("Perimetro do quadrado = %.1f \n", resultado);
            break;
        case 3:
            resultado = lado * sqrt(2);
            printf("Diagonal do quadrado = %.1f \n", resultado);
            break;
        default:
            printf("Opcao invalida! \n");
    }
    return 0;
}
