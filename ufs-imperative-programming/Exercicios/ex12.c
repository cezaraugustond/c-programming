#include <stdio.h>

int main() {
    int inscritos, viagens, coletivo;
    printf("Quantidade de inscrito: ");
    scanf("%d", &inscritos);
    viagens = inscritos / 11;
    coletivo = inscritos % 11;
    printf("Com %d inscritos sera necessario %d viagens de kombi e %d passagens em coletivo. \n", inscritos, viagens, coletivo);
    return 0;
}
