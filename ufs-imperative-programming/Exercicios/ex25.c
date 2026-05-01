#include <stdio.h>

int main() {
    int n, a, b;
    printf("Valor de n: ");
    scanf("%d", &n);
    printf("Valor de a: ");
    scanf("%d", &a);
    printf("Valor de b: ");
    scanf("%d", &b);
    if ((n % a == 0) && (n % b == 0)){
        printf("NAO ATENDE CONDICAO! \n");
    } else {
        printf("ATENDE CONDICAO! \n");
    }
    return 0;
}
