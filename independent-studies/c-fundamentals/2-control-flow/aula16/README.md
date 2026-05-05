# AULA 16

## Operador Ternário `?:` em C

- O **operador ternário** é uma forma **resumida** de escrever um `if-else` simples, normalmente usado para **atribuições condicionais**.


## 1. Forma geral

```c
variavel = condicao ? expressao1 : expressao2;

```

- `condicao` → é avaliada (verdadeira ou falsa).
- Se a **condição for verdadeira**, a **expressão1** é executada.
- Se a **condição for falsa**, a **expressão2** é executada.
- O nome **“ternário”** vem do fato de que ele utiliza **três partes**:
    - condição – expressão1 – expressão2


## 2. Sem atribuição

- Também podemos usar o operador ternário **sem atribuir a uma variável**, apenas para executar comandos:

```c
condicao ? comando1 : comando2;
```

## Boas práticas

- O operador ternário é ideal para **expressões curtas e simples**.
- Para condições mais complexas, prefira usar `if-else` para deixar o código mais legível.


# Práticas:

- [Prática 1](./pratica1.c) Desenvolva um algoritmo que identifique o maior entre dois valores inteiros. O programa deve solicitar ao usuário a digitação de dois números inteiros, utilizar o operador ternário **com uma variável de atribuição** para armazenar o resultado da comparação e, em seguida, exibir qual dos valores é o maior na tela.
- [Prática 2](./pratica2.c) Desenvolva um algoritmo que determine o maior entre dois valores inteiros. O programa deve solicitar ao usuário a digitação de dois números inteiros e, em seguida, utilizar o **operador ternário** para exibir o maior valor. Nesta prática, o resultado é exibido diretamente na tela, **sem necessidade de atribuição a uma variável**.