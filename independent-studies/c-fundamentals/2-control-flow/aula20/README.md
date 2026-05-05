# AULA 20

## Comando `do...while`

- O comando **`do...while`** é uma estrutura de repetição em C que **sempre executa o bloco de comandos pelo menos uma vez**, independentemente da condição.
- Após a primeira execução, a condição é testada. Se for **verdadeira**, o bloco será repetido. Caso contrário, o loop termina.


## 1. Forma geral:

```c
do {
    // conjunto de comandos
} while (condição);

```

## Diferença para o `while`

- **`while`**: testa a condição **antes** de executar o bloco.
- **`do...while`**: executa o bloco **pelo menos uma vez**, depois verifica a condição.

---

**Cuidado:**

- Assim como no `while` e `for`, se a condição **nunca for falsa**, o programa entra em **loop infinito**.

---

# Práticas:

- [Prática 1](./pratica1.c) Desenvolva um algoritmo que exiba uma sequência de valores inteiros em ordem crescente. O programa deve solicitar ao usuário a digitação de dois números inteiros e utilizar o comando `do-while` para imprimir os valores a partir do primeiro número informado até que seja atingido o valor do segundo número, exibindo cada número da sequência e finalizando com a mensagem *“Fim do programa!”*.
- [Prática 2](./pratica2.c) Desenvolva um algoritmo que valide a escolha de uma opção em um menu. O programa deve exibir um menu com três opções numeradas, solicitar ao usuário a digitação de uma dessas opções e utilizar o comando `do-while` para repetir a solicitação enquanto a entrada for inválida (menor que 1 ou maior que 3). Ao receber uma opção válida, o programa deve exibir a mensagem confirmando a escolha.