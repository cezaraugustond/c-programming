# AULA 18

## Estrutura de repetição `while` em C

- O comando **`while`** é usado quando queremos executar um **bloco de comandos repetidamente**, **enquanto uma condição for verdadeira**.


## 1. Forma geral

```c
while (condição) {
    // conjunto de comandos
}

```

- **Condição:** é avaliada antes de cada repetição.
- Se a condição for **verdadeira (≠ 0)** → executa o bloco.
- Se for **falsa (0)** → o laço é interrompido e o programa continua.


## 2. Loop infinito ( cuidado)

- Se a condição **nunca se tornar falsa**, o laço continuará para sempre.

**Para evitar isso:**

- Atualize a variável de controle dentro do loop.
- Pense sempre: *"em que momento a condição vai parar de ser verdadeira?"*

---

# Práticas:

- [Prática 1](./pratica1.c) Desenvolva um algoritmo que incremente um valor inteiro até alcançar outro valor informado. O programa deve solicitar ao usuário a digitação de dois números inteiros, utilizar o comando `while` para incrementar o primeiro valor até que seja igual ao segundo e exibir cada número gerado no processo, finalizando com a mensagem *“Fim do programa”*.