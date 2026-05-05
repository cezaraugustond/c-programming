#include <stdio.h>

int main() {
    int meta, valor, total = 0;
    printf("Meta da vaquinha: R$");
    scanf("%d", &meta);
    do {
        printf("Valor da doacao: R$");
        scanf("%d", &valor);
        total += valor;
        printf("Total parcial: R$%d \n", total);
    } while (meta > total);
    if (total > meta){
        printf("Meta da vaquinha foi ultrapassada! Total = R$%d \n", total);
    } else {
        printf("A meta da vaquinha foi alcancada! Total = R$%d \n", total);
    }
    return 0;
}
