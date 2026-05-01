#include <stdio.h>

int main() {
    int valor1, valor2;
    printf("Valor1 : ");
    scanf("%d", &valor1);
    printf("Valor 2: ");
    scanf("%d", &valor2);
    for (int c = valor1; c <= valor2; c++) {
        printf("%d \n", c);
    }
    printf("Fim do programa! \n");
    return 0;
}
