# AULA 2

## Declaração de Variáveis em C

- **Variável** é um espaço reservado na memória do computador para guardar informações que podem mudar durante a execução do programa.

**Sintaxe geral:**

```c
tipo nome_da_variavel = valor_inicial;

```

Exemplo:

```c
char letra = 'c';
int numero = 8;

```

---

## Principais tipos de variáveis

1. **`char`**
    - Armazena **um único caractere**.
    - Usa **aspas simples** `' '`.
    - Ocupa normalmente **1 byte** de memória.
    
    ```c
    char letra = 'A';
    
    ```
    
2. **`int`**
    - Armazena **números inteiros** (sem casas decimais).
    - Ocupa geralmente **4 bytes** em sistemas modernos.
    
    ```c
    int idade = 22;
    
    ```
    
3. **`float`**
    - Armazena **números reais (decimais)** com precisão simples (cerca de 7 casas decimais).
    - Ocupa normalmente **4 bytes**.
    - Usa **ponto (`.`)**, nunca vírgula.
    
    ```c
    float altura = 1.77;
    
    ```
    
4. **`double`**
    - Armazena **números reais com maior precisão** (cerca de 15 casas decimais).
    - Ocupa geralmente **8 bytes**.
    
    ```c
    double pi = 3.14159265359;
    
    ```

# Práticas:

1. Desenvolva um algoritmo que declare variáveis de diferentes tipos. O programa deve criar uma variável do tipo caractere, uma do tipo inteiro e uma do tipo ponto flutuante, atribuindo valores a cada uma delas.