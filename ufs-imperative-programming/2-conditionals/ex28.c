#include <stdio.h>
#include <ctype.h>

int main() {
    int numero, resultado;
    char opcao;
    printf("Numero inteiro entre 0 e 99999: ");
    scanf("%d", &numero);
    printf("---------------------------------- \n");
    printf("-------------- MENU -------------- \n");
    printf("U - unidade \n");
    printf("D - dezena \n");
    printf("C - centena \n");
    printf("M - unidade de milhar \n");
    printf("Z - dezena de milhar \n");
    printf("---------------------------------- \n");
    printf("Opcao: ");
    scanf(" %c", &opcao);
    opcao = toupper(opcao);
    switch (opcao) {
        case 'U':
            resultado = numero % 10;
            printf("Unidade = %d \n", resultado);
            break;
        case 'D':
            resultado = (numero / 10) % 10;
            printf("Dezena = %d \n", resultado);
            break;
        case 'C':
            resultado = (numero / 100) % 10;
            printf("Centena = %d \n", resultado);
            break;
        case 'M': 
            resultado = (numero / 1000) % 10;
            printf("Unidade de milhar = %d \n", resultado);
            break;
        case 'Z':
            resultado = numero / 10000;
            printf("Dezena de milhar = %d \n", resultado);
            break;
        default:
            printf("Opcao Invalida!");
    }

    return 0;
}
