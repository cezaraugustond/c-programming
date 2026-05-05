#include <stdio.h>

int main() {
    int valor, quantidade, contador_dentro = 0, contador_fora = 0;
    printf("Quantidade de valores a ser digitados: ");
    scanf("%d", &quantidade);
    for (int i = 1; i <= quantidade; i++) {
        printf("%do valor: ", i);
        scanf("%d", &valor);
        if (valor > 10 && valor < 20)
            contador_dentro++;
        else
            contador_fora++;
    }
    printf("Quantidade de valores dentro do intervalo: %d \n", contador_dentro);
    printf("Quantidade de valores fora do intervalo: %d \n", contador_fora);
    return 0;
}
