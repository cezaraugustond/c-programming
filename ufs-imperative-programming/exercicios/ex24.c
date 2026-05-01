#include <stdio.h>

int main() {
    int numero, unidade, dezena, centena, numero_gerado;
    printf("Numero inteiro positivo de tres digitos: ");
    scanf("%d", &numero);
    unidade = (numero % 10);
    dezena = (numero % 100) / 10;
    centena = (numero / 100);
    numero_gerado = unidade * 100 + dezena * 10 + centena;
    if (numero_gerado > numero) {
        printf("Numero gerado (%d) maior que numero lido (%d). \n", numero_gerado, numero);
    } else {
        if (numero > numero_gerado) {
            printf("Numero lido (%d) maior que numero gerado (%d). \n", numero, numero_gerado);
        } else {
            printf("Numero gerado (%d) igual ao numero lido (%d). \n", numero_gerado, numero);
        }
    }
    return 0;
}
