#include <stdio.h>
#include <math.h>

int main() {
    int resultado, soma = 0;
    for (int i = 0; i <= 5; i++){
        resultado = pow(9, i);
        i == 5 ? printf("%d = ", resultado) : printf("%d + ", resultado);
        soma += resultado;
    }
    printf("%d \n", soma);
    return 0;
}
