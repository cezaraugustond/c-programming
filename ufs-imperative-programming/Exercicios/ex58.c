#include <stdio.h>
#include <stdlib.h>

int main() {
    const int TAMANHO = 25;
    int valores[TAMANHO], valor, contador = 0; 
    while (contador < TAMANHO) {
        printf("Valor: ");
        scanf("%d", &valor);
        if (valor % 7 == 0) {
            valores[contador] = valor;
            contador++;
            printf("%do valor adicionado a lista que eh divisiel por 7. \n", contador);
        }
    }
    system("cls");
    printf("Os 25 valores digitados que sao divisiveis por 7: ");
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d ", valores[i]);
    }
    printf("\n");
    return 0;
}
