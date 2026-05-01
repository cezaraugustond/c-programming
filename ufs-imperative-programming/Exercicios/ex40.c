#include <stdio.h>

int main() {
    int valor, fat = 1;
    printf("Valor inteiro: ");
    scanf("%d", &valor);
    if (valor > 0) {
        printf("Fatorial de %d! = ", valor);
        for (int i = valor; i >= 1; i--){
            i == 1 ? printf("%d = ", i) : printf("%d x ", i);
            fat *= i;
        }
        printf("%d \n", fat);
    } else if (valor == 0) {
        printf("Fatorial de 0! = 1 \n");
    } else{
        printf("Valor tem que ser positivo! \n");
    }
    return 0;
}
