#include <stdio.h>

int main() {
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    if (n % 2 == 0){
        printf("%d eh PAR! \n", n);
    } else {
        printf("%d eh IMPAR! \n", n);
    }
    return 0;
}
