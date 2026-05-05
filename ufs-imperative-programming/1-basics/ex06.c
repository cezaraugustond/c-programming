#include <stdio.h>

int main() {
    int quantidade_estoque, quantidade_ideal, quantidade_comprar;
    printf("Quantidade do produto no estoque: ");
    scanf("%d", &quantidade_estoque);
    printf("Quantidade ideal do produto: ");
    scanf("%d", &quantidade_ideal);
    quantidade_comprar = quantidade_ideal - quantidade_estoque;
    printf("Precisa comprar %d quantidade(s) do produto. \n", quantidade_comprar);
    return 0;
}
