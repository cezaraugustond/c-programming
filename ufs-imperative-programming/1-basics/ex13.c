#include <stdio.h>

int main() {
    int valor, ced100, ced50, ced20, ced10, ced5, ced2, atual;
    printf("Valor do saque: R$");
    scanf("%d", &valor);
    atual = valor;
    ced100 = atual / 100;
    atual -= (100 * ced100);
    ced50 = atual / 50;
    atual -= (50 * ced50);
    ced20 = atual / 20;
    atual -= (20 * ced20);
    ced10 = atual / 10;
    atual -= (10 * ced10);
    ced5 = atual / 5;
    atual -= (5 * ced5);
    ced2 = atual / 2;
    printf("Para o saque de R$%d sera composto de %d cedulas de R$100 + %d cedulas de R$50 + ", valor, ced100, ced50);
    printf("%d cedulas de R$20 + %d cedulas de R$10 + %d cedulas de R$5 + %d cedulas de R$2 \n", ced20, ced10, ced5, ced2);
    return 0;
}
