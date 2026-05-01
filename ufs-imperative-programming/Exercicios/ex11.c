#include <stdio.h>

int main() {
    int degrau1, altura, degrau2, degrau3, degrau4;
    printf("Quantidade de blocos do primeiro degrau: ");
    scanf("%d", &degrau1);
    printf("Altura do degrau: ");
    scanf("%d", &altura);
    degrau2 = degrau1 + altura;
    degrau3 = degrau2 + altura;
    degrau4 = degrau3 + altura;
    printf("Escada composta por: \n");
    printf("Primeiro degrau: %d blocos \n", degrau1);
    printf("Segundo degrau: %d blocos \n", degrau2);
    printf("Terceiro degrau: %d blocos \n", degrau3);
    printf("Quarto degrau: %d blocos \n", degrau4);
    return 0;
}
