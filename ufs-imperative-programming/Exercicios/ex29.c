#include <stdio.h>

int main() {
    int valor;
    printf("Valor: ");
    scanf("%d", &valor);
    printf("TABUADA DO %d: \n", valor);
    for (int i = 0; i <= 10; i++){
        printf("%2d x %2d = %2d \n", valor, i, valor * i);
    }
    return 0;
}
