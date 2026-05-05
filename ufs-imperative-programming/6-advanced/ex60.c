#include <stdio.h>

int main() {
    int votos_alibaba = 0, votos_alcapone = 0, votos_branco = 0, votos_nulo = 0;
    int voto = 0;
    do {
        printf("Voto: ");
        scanf("%d", &voto);
        switch (voto) {
            case 83:
                votos_alibaba++;
                break;
            case 93:
                votos_alcapone++;
                break;
            case 0:
                votos_branco++;
                break;
            case -1:
                printf("Votacao encerrada! \n");
                break;
            default:
                votos_nulo++;
        }
    } while (voto != -1);
    printf("---------- RELATORIO DA ELEICAO ----------  \n");
    printf("Quantidade de votos de Alibaba: %d votos. \n", votos_alibaba);
    printf("Quantidade de votos de Alcapone: %d votos. \n", votos_alcapone);
    printf("Quantidade de votos brancos: %d votos. \n", votos_branco);
    printf("Quantidade de votos nulos: %d votos. \n", votos_nulo);
    printf("------------------------------------------ \n");
    if (votos_alcapone > votos_alibaba) {
        printf("O candidato Alcapone venceu a Eleicao! \n");
    } else if (votos_alibaba > votos_alcapone) {
        printf("O candidato Alibaba venceu a Eleicao! \n");
    } else {
        printf("Eleicao empatada! \n");
    }
    return 0;
}
