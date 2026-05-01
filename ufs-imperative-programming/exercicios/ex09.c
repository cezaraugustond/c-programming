#include <stdio.h>

int main() {
    int docinhos, salgadinhos, convidados, total_docinhos, total_salgadinhos;
    printf("Quantidade de docinhos por convidado: ");
    scanf("%d", &docinhos);
    printf("Quantidade de salgadinhos por convidado: ");
    scanf("%d", &salgadinhos);
    printf("Quantidade de convidados: ");
    scanf("%d", &convidados);
    total_docinhos = docinhos * convidados;
    total_salgadinhos = salgadinhos * convidados;
    printf("Em uma festa com %d convidados sera necessario: %d docinhos e %d salgadinhos. \n", convidados, total_docinhos, total_salgadinhos);
    return 0;
}
