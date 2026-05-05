#include <stdio.h>

int main() {
    int primeiro, razao, quantidade, termo;
    printf("Primeiro termo da PA: ");
    scanf("%d", &primeiro);
    printf("Razao da PA: ");
    scanf("%d", &razao);
    printf("Quantidade de termos da PA: ");
    scanf("%d", &quantidade);
    printf("PA = ");
    termo = primeiro;
    for(int i = 0; i < quantidade; i++){
        printf("%d ", termo);
        termo += razao;
    }
    printf("\n");
    return 0;
}
