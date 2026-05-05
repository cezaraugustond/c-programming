# AULA 26

## Array (Matrizes):

- Uma **matriz** é um **array de duas dimensões**, ou seja, uma tabela formada por **linhas** e **colunas**.
- Serve para armazenar valores do **mesmo tipo**, organizados em formato de grade.
- Cada elemento é acessado usando **dois índices**:
    - o primeiro indica a **linha**
    - o segundo indica a **coluna**


## Forma geral:

```c
tipo nome_array[linhas][colunas];

```

- `tipo` → o tipo de dado (ex.: `int`, `float`, `char`).
- `linhas` → quantidade de linhas (primeira dimensão).
- `colunas` → quantidade de colunas (segunda dimensão).

---

## Exemplo:

```c
int matriz[3][4]; // matriz com 3 linhas e 4 colunas

```

- Essa matriz pode ser imaginada assim:

| Coluna 0 | Coluna 1 | Coluna 2 | Coluna 3 |
| --- | --- | --- | --- |
| [0][0] | [0][1] | [0][2] | [0][3] |
| [1][0] | [1][1] | [1][2] | [1][3] |
| [2][0] | [2][1] | [2][2] | [2][3] |

---

## Inicialização de matrizes

- Pode preencher a matriz já na declaração:
    
    ```c
    int matriz[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    
    ```
    
- Ou de forma automática, deixando o compilador contar:
    
    ```c
    int matriz[][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    
    ```
    

---

## Acessando elementos

Cada elemento é acessado informando **linha e coluna**:

```c
matriz[0][2]; // valor na primeira linha, terceira coluna
matriz[1][0]; // valor na segunda linha, primeira coluna

```

---

## Resumindo

- **Array 1D** → vetor (linha única).
- **Array 2D** → matriz (linhas e colunas).
- Índices sempre começam em **0**.
- O tamanho precisa ser definido ou inicializado na declaração.

---

# Práticas:

- [Prática 1](./pratica1.c) Desenvolva um algoritmo que organize e analise temperaturas registradas em diferentes cidades. O programa deve solicitar ao usuário a digitação das temperaturas diárias de **5 cidades ao longo de 7 dias**, armazenando os valores em uma matriz. Em seguida, deve calcular a temperatura média semanal de cada cidade, identificar o **dia mais quente da semana** e a **cidade que apresentou a menor temperatura no período**, exibindo os resultados de forma clara.