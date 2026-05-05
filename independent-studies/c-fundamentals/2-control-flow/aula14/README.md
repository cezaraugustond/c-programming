# AULA 14

## Estrutura Condicional `if-else` em C

- O comando **`else`** complementa o `if`.
- Ele permite executar **um segundo bloco de comandos** caso a condição do `if` seja **falsa**.

---

## Forma geral

```c
if (condicao) {
    // comandos executados se a condição for verdadeira
} else {
    // comandos executados se a condição for falsa
}

```

- **`if`** → executa o bloco se a condição for verdadeira (`1`).
- **`else`** → executa o bloco se a condição for falsa (`0`).

---

## Observações importantes

- Tanto o bloco `if` quanto o bloco `else` **podem ter vários comandos**, devendo usar **chaves `{ }`**.
- Se houver **apenas um comando em cada bloco**, o uso de chaves **não é obrigatório**, mas é recomendado para manter o código legível e seguro.

```c
if (x > 0)
    printf("x é positivo\n");
else
    printf("x não é positivo\n");

```

---

# Práticas:

1. Desenvolva um algoritmo que verifique se um número inteiro é par ou ímpar. O programa deve solicitar ao usuário a digitação de um valor inteiro, testar se ele é divisível por 2 e exibir uma mensagem indicando se o valor é par ou ímpar. Ao final, o programa deve exibir uma mensagem indicando o término da execução.