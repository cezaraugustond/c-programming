# Array Multidimensional em C

- Um **array multidimensional** é uma extensão do conceito de matriz.
- Enquanto a matriz comum (2D) usa **linhas e colunas**, arrays multidimensionais podem ter **3 ou mais dimensões**.
- São úteis para representar dados em estruturas mais complexas, como **cubos**, **tabuleiros 3D**, ou até mais dimensões (embora raramente usadas na prática).

---

## 🔹 Forma geral da declaração

```c
tipo nome_array[tam1][tam2][tam3]...[tamN];

```

- `tipo` → tipo de dado (ex.: `int`, `float`, `char`).
- `tam1, tam2, ...` → quantidade de elementos em cada dimensão.

---

## 🔹 Exemplo em 3 dimensões

```c
int cubo[2][3][4];

```

- 2 blocos (primeira dimensão).
- Cada bloco tem 3 linhas (segunda dimensão).
- Cada linha tem 4 colunas (terceira dimensão).

📌 Podemos imaginar como **2 matrizes** de tamanho `3x4`.

---

## 🔹 Inicialização de arrays multidimensionais

```c
int cubo[2][2][3] = {
    { {1, 2, 3}, {4, 5, 6} },
    { {7, 8, 9}, {10, 11, 12} }
};

```

---

## 🔹 Acesso aos elementos

- O acesso é feito especificando todos os índices:

```c
cubo[0][1][2]; // primeira "camada", segunda linha, terceira coluna

```

---

## 🔹 Resumindo

- **1D → Vetor**: sequência linear de dados.
- **2D → Matriz**: tabela (linhas e colunas).
- **3D → Cubo**: coleção de matrizes.
- **nD → Geral**: extensão do conceito, mas pouco usado na prática.

📌 Na maioria dos programas, você usará **vetores (1D)** e **matrizes (2D)**. Arrays com mais dimensões são mais raros e geralmente substituídos por **estruturas de dados dinâmicas** (como ponteiros e structs).

---