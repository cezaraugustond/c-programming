#include <stdio.h>

int main() {
    int lista[7] = {3, 18, -4, 0, -13, 96, 4};
    int maior = lista[0], menor = lista[0];
    for (int i = 1; i < 7; i++){
        if (lista[i] > maior){
            maior = lista[i];
        }
        if (lista[i] < menor){
            menor = lista[i];
        }
    }
    printf("Maior valor: %d \n", maior);
    printf("Menor valor: %d \n", menor);
    return 0;
}
