# AULA 13

## Estrutura Condicional `if`

- O comando **`if`** é usado para **tomar decisões** em um programa.
- Ele permite executar (ou não) um bloco de código com base no **resultado de uma condição lógica**.

---

## Forma geral

```c
if (condicao) {
    // comandos a serem executados se a condição for verdadeira
}

```

- A **condição** deve ser uma expressão que resulta em:
    - `1` (verdadeiro) → os comandos dentro do `if` são executados.
    - `0` (falso) → os comandos dentro do `if` são ignorados.

---

**Importante**

- Se houver **apenas um comando**, não é necessário usar chaves `{ }`.
    
    ```c
    if (x > 0)
        printf("x é positivo\n");
    
    ```
    
- Porém, **usar chaves sempre é recomendado**, mesmo com um único comando, para evitar erros e tornar o código mais legível.
    
    ```c
    if (x > 0) {
        printf("x é positivo\n");
    }
    
    ```
    

---

# Práticas:

- [Prática 1](./pratica1.c) Desenvolva um algoritmo que verifique se um número inteiro é positivo. O programa deve solicitar ao usuário a digitação de um valor inteiro, testar se ele é maior que zero e, caso seja, exibir uma mensagem indicando que o valor é positivo. Ao final, o programa deve exibir uma mensagem indicando o término da execução.
- [Prática 1](./pratica1.c) Desenvolva um algoritmo que verifique se um número inteiro é positivo e par. O programa deve solicitar ao usuário a digitação de um valor inteiro, testar se ele é maior que zero e divisível por 2, e, caso ambas as condições sejam verdadeiras, exibir uma mensagem indicando que o valor é par e positivo. Ao final, o programa deve exibir uma mensagem indicando o término da execução.
- [Prática 1](./pratica1.c) Desenvolva um algoritmo que calcule o resto da divisão de um número inteiro por 3. O programa deve solicitar ao usuário a digitação de um valor inteiro, verificar se o número é positivo e, caso seja, calcular e exibir o resto da divisão desse número por 3. Ao final, o programa deve exibir uma mensagem indicando o término da execução.