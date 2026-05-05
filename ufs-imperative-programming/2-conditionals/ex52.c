#include <stdio.h>

int main() {
    float altura;
    int idade, contador = 0;
    printf("Altura: ");
    scanf("%f", &altura);
    printf("Idade: ");
    scanf("%d", &idade);
    if (altura >= 1.5 && idade >= 12) contador++;
    if (altura >= 1.4 && idade >= 14) contador++;
    if (altura >= 1.7 || idade >= 16) contador++;
    if (altura >= 1.35 && idade >= 8) contador++;
    if (altura >= 1.6 || idade >= 12) contador++;
    printf("Quantidade de brinquedos permitidos: %d \n", contador);
    return 0;
}
