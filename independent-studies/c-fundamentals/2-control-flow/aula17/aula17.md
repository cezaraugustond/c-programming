# Comando `switch` em C

- O comando **`switch`** é usado quando precisamos **escolher entre vários caminhos possíveis**, de acordo com o valor de uma **expressão inteira ou caractere** (`int` ou `char`).
- Ele funciona como uma forma **organizada e mais legível** de escrever vários `if-else`.

---

## Estrutura geral

```c
switch (variavel) {
    case valor1:
        // conjunto de comandos
        break;

    case valor2:
        // conjunto de comandos
        break;

    case valorn:
        // conjunto de comandos
        break;

    default:
        // conjunto de comandos se nenhum valor acima for atendido
}

```

---

## Explicação passo a passo

- A **variável** (ou expressão) dentro do `switch` é comparada com cada `case`.
- Quando há correspondência, o programa executa os comandos daquele `case`.
- O comando **`break`** serve para **interromper a execução** e sair do `switch`.
    - Se o `break` for omitido, o programa **continua executando os próximos cases** (mesmo sem correspondência).
- O bloco **`default`** é opcional e funciona como o **else** do `if`:
    - É executado quando nenhum `case` corresponde ao valor.

---

# Práticas:

1. Desenvolva um algoritmo que identifique um símbolo de pontuação. O programa deve solicitar ao usuário a digitação de um caractere, utilizar a estrutura de seleção *switch* para verificar se o caractere corresponde a ponto, vírgula, dois pontos ou ponto e vírgula, e exibir o respectivo nome do símbolo. Caso o caractere digitado não seja um símbolo de pontuação válido, o programa deve informar que não se trata de pontuação.