# AULA 29

# Somando elementos de um Array em C

- Um **array** armazena vários elementos do mesmo tipo.
- Para somar todos os elementos, usamos **um laço de repetição** (`for`, `while` ou `do-while`) para percorrer cada posição do array.
- O resultado é armazenado em uma variável acumuladora (`soma` no exemplo).

---

## 🔹 Array 1D (Vetor)

```c
#include <stdio.h>

int main() {
    int lista[5] = {1, 2, 3, 4, 5}; // array com 5 elementos
    int soma = 0;                     // variável acumuladora

    // Percorre todas as posições do array
    for (int i = 0; i < 5; i++){
        soma += lista[i]; // soma cada elemento à variável acumuladora
    }

    printf("Soma = %d \n", soma); // exibe o resultado
    return 0;
}

```

---

## 🔹 Explicação detalhada

1. `int lista[5] = {1, 2, 3, 4, 5};` → cria um array com 5 elementos.
2. `int soma = 0;` → inicializa a variável que vai guardar a soma.
3. `for (int i = 0; i < 5; i++)` → percorre o array do índice 0 até 4.
4. `soma += lista[i];` → adiciona o valor de cada elemento à variável `soma`.
5. `printf(...)` → exibe a soma final.

---

## 🔹 2️⃣ Array 2D (Matriz)

### Código:

```c
#include <stdio.h>

int main() {
    int matriz[2][3] = {{1, 2, 3}, {4, 5, 6}}; // matriz 2x3
    int soma = 0;

    // Percorre linhas e colunas
    for (int i = 0; i < 2; i++) {       // percorre linhas
        for (int j = 0; j < 3; j++) {   // percorre colunas
            soma += matriz[i][j];       // acumula cada elemento
        }
    }

    printf("Soma = %d \n", soma); // exibe o resultado
    return 0;
}

```

### 🔹 Explicação detalhada

1. `matriz[2][3]` → 2 linhas e 3 colunas.
2. Dois **laços aninhados**:
    - `i` percorre linhas
    - `j` percorre colunas
3. `soma += matriz[i][j];` → adiciona cada elemento à variável acumuladora.
4. Resultado: **Soma = 21**.

---

## 🔹 Observações importantes:

- **Sempre respeitar os limites do array** (`0` a `tamanho-1`) para evitar erros.
- Mesma lógica serve para **arrays 3D ou mais**, usando laços adicionais.
- Esse padrão pode ser usado para outras operações, como **média**, **produto**, **maior/menor elemento**, etc.

---

# Práticas:

1. Desenvolva um algoritmo que calcule a soma dos elementos de um array. O programa deve utilizar um vetor com 5 números inteiros já definidos, percorrer todos os elementos para somá-los e exibir o resultado da soma na tela.
2. Desenvolva um algoritmo que calcule a soma de todos os elementos de uma matriz. O programa deve utilizar uma matriz 2x3 com valores inteiros pré-definidos, percorrer todas as linhas e colunas somando seus elementos e exibir o resultado da soma na tela.