# AULA 28

# Inicialização de Arrays em C

- **Inicializar um array** significa atribuir valores a ele no momento da declaração.
- Permite que o array já comece com dados definidos, sem precisar preencher elemento por elemento depois.

---

## 🔹 Forma geral

```c
tipo nome_array[tam1]...[tamN] = {valores};

```

- `tipo` → tipo de dado (int, float, char, etc.)
- `tam1...[tamN]` → tamanho do array em cada dimensão
- `{valores}` → lista de valores separados por vírgula

---

## 🔹 Exemplos práticos

### 1️⃣ Array 1D

```c
int numeros[5] = {10, 20, 30, 40, 50};

```

- O array `numeros` já contém 5 valores.
- Se o tamanho não for especificado, o compilador conta automaticamente:

```c
int numeros[] = {10, 20, 30, 40, 50}; // tamanho será 5

```

---

### 2️⃣ Array 2D (Matriz)

```c
int matriz[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};

```

- 2 linhas, 3 colunas.
- Cada conjunto de `{}` representa uma linha da matriz.

---

### 3️⃣ Array 3D

```c
int cubo[2][2][3] = {
    { {1, 2, 3}, {4, 5, 6} },
    { {7, 8, 9}, {10, 11, 12} }
};

```

- 2 blocos, cada bloco tem 2 linhas e cada linha tem 3 colunas.
- Cada `{}` dentro do bloco representa uma linha da matriz correspondente.

---

## 🔹 Observações importantes

- Se você inicializar **menos elementos do que o tamanho**, os restantes serão preenchidos com `0`.

```c
int v[5] = {1, 2}; // equivalem a {1, 2, 0, 0, 0}

```

- A inicialização deve respeitar **a ordem dos índices**: linha → coluna → profundidade (para arrays multidimensionais).
- Arrays multidimensionais podem ser inicializados parcialmente, mas os elementos restantes sempre virão zerados.

---