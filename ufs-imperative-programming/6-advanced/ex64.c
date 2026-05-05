#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main() {
    const int TAMANHO = 15;
    int vagas[TAMANHO];
    char placas[TAMANHO][9];
    float horas[TAMANHO][2];
    float saida, valor, entrada;
    int i, j, opcao, vaga, contador = 0;
    for (i = 0; i < TAMANHO; i++) {
        vagas[i] = -1;
    }
    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < 8; j++) {
            if (j <= 1) {
                horas[i][j] = 0.0;
            }
            placas[i][j] = ' ';
        }
    }
    do {
        printf("------------ MENU ------------ \n");
        printf("1- Mostar vagas disponiveis \n");
        printf("2- Mostrar detalhes das vagas \n");
        printf("3- Adicionar carro \n");
        printf("4- Remover carro \n");
        printf("5- Sair \n");
        printf("------------------------------ \n");
        opcao = 0;
        while (opcao <= 0 || opcao > 5) {
            printf("Opcao: ");
            scanf("%d", &opcao);
            if (opcao <= 0 || opcao > 5) {
                printf("Opcao invalida! Tente novamente... \n");
            }
        }
        printf("------------------------------ \n");
        switch (opcao) {
            case 1:
                printf("-> VAGAS: \n");
                for (i = 0; i < TAMANHO; i ++) {
                    if (vagas[i] == -1) {
                        printf("[Vaga livre %d] ", i);
                    } else {
                        printf("[Vaga ocupada %d] ", i);
                    }
                }
                printf("\n");
                break;
            case 2:
                printf("-> Detalhes da vaga: \n");
                vaga = -1;
                while (vaga < 0 || vaga >= 15){
                    printf("Vaga: ");
                    scanf("%d", &vaga);
                    if (vagas < 0 || vaga >= 15) {
                        printf("Opcao invalida! \n");
                    } else if (vagas[vaga] == -1) {
                        printf("-> Vaga %d esta livre! \n", vaga);
                    } else {
                        printf("-> Vaga %d esta ocupada! Detalhes: \n", vaga);
                        printf("Placa: %s \n", placas[vaga]);
                        printf("Horario de entrada: %.2f \n", horas[vaga][1]);
                    }
                }
                break;
            case 3:
                vaga = -1;
                if (contador != 15) {
                    while (vaga < 0 || vagas[vaga] != -1 || vaga >= 15) {
                        printf("-> Adiconar carro: \n");
                        printf("Escolha uma vaga[0 - 14]: ");
                        scanf("%d", &vaga);
                        if (vaga < 0 || vaga >= 15) {
                            printf("Opcao invalida! \n");
                        } else if (vagas[vaga] != -1) {
                            printf("Vaga %d esta ocupada! Tente novamente... \n", vaga);
                        } else {
                            printf("Vaga %d esta livre! \n", vaga);
                            printf("-> Cadastro do carro \n");
                            getchar();
                            printf("Placa do carro: ");
                            fgets(placas[vaga], sizeof(placas[vaga]), stdin);
                            placas[vaga][strcspn(placas[vaga], "\n")] = '\0';
                            printf("Hora da reserva[xx.xx]: ");
                            scanf("%f", &horas[vaga][1]);
                            printf("-> Vaga %d reservada com sucesso! Placa: %s / Horario de entrada: %.2f \n", vaga, placas[vaga], horas[vaga][1]);
                            contador++;
                            vagas[vaga] = vaga;
                            break;
                        }
                    }
                } else {
                    printf("Estacionamento lotado! \n");
                }
                break;
            case 4:
                printf("-> Remover carro: \n");
                vaga = -1;
                while (vaga < 0 || vagas[vaga] == -1 || vaga >= 15) {
                    printf("Vaga: ");
                    scanf("%d", &vaga);
                    if (vaga < 0 || vaga >= 15) {
                        printf("Opcao Invalida! \n");
                    } else if (vagas[vaga] == -1) {
                        printf("Vaga esta livre! Nao eh possivel remover carro! \n");
                        break;
                    } else {
                        printf("-> Revomendo carro da vaga %d ... \n", vaga);
                        printf("Placa: %s \n", placas[vaga]);
                        printf("Horario de entrada: %.2f \n", horas[vaga][1]);
                        printf("Horario de saida: ");
                        scanf("%f", &saida);
                        saida = (int)saida + (ceil((saida - (int)saida) * 100) / 60.0);
                        entrada = (int)horas[vaga][1] + (ceil((horas[vaga][1] - (int)horas[vaga][1]) * 100) / 60.0);
                        valor = (((saida - entrada) * 60) * 2.30) / 15.0;
                        printf("Valor do estacionamento: R$%.2f \n", valor);
                        printf("Vaga %d agora esta livre! \n", vaga);
                        vagas[vaga] = -1;
                        contador--;
                        break;
                    }
                }
                break;
            case 5:
                printf("PROGRAMA ENCERRADO! \n");
                break;
            default:
                printf("ERRO! \n");
        }
    } while (opcao > 0 && opcao < 5);
    return 0;
}
