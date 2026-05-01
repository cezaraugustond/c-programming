#include <stdio.h>

int main() {
    int valores[20], valor, limite, soma = 0, cont = 0, i;
    printf("Limite: ");
    scanf("%d", &limite);
    for (i = 0; i < 20; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &valor);
        soma += valor;
        valores[i] = valor;
        cont++;
        if (soma >= limite) {
            printf("A soma dos valores ultrapassou o limite...\n");
            break;
        }
    }
    if (i == 20) 
        printf("Foi antigindo o maximo de 20 valores digitados... \n");
    printf("Soma = %d \n", soma);
    printf("Valores: ");
    for (int i = 0; i < cont; i++) {
        printf("%d ", valores[i]);
    }
    printf("\n");
    return 0;
}
