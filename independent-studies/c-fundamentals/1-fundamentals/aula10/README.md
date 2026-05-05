# AULA 10

## Atribuições Simplificadas:

- Quando queremos **atualizar o valor de uma variável usando ela mesma em uma operação**, podemos usar operadores de **atribuição composta**.
- Isso evita repetições e deixa o código mais legível.

---

## Sintaxe geral

```c
variavel operador= expressao;

```

- Isso é equivalente a:

```c
variavel = variavel operador expressao;

```

---

## Exemplo:

```c
#include <stdio.h>

int main() {
    int x = 10, y = 10, z = 2;

    // Forma tradicional
    x = x + z;
    printf("x = %d \n", x);  // x = 12

    // Forma simplificada
    y += z;  // equivale a y = y + z
    printf("y = %d \n", y);  // y = 12

    return 0;
}

```

---

## Principais operadores de atribuição simplificada

| Operador | Equivalente | Exemplo | Resultado |
| --- | --- | --- | --- |
| `+=` | `variavel = variavel + valor` | `x += 5;` | Soma 5 a `x` |
| `-=` | `variavel = variavel - valor` | `x -= 3;` | Subtrai 3 de `x` |
| `*=` | `variavel = variavel * valor` | `x *= 2;` | Multiplica `x` por 2 |
| `/=` | `variavel = variavel / valor` | `x /= 4;` | Divide `x` por 4 |
| `%=` | `variavel = variavel % valor` | `x %= 2;` | Guarda o resto da divisão de `x` por 2 |

---

# Práticas:

- [Prática 1](./pratica1.c) Desenvolva um algoritmo que demonstre o uso de atribuições simples e simplificadas em C. O programa deve declarar três variáveis inteiras, realizar uma operação de soma utilizando atribuição comum em uma delas e aplicar a atribuição simplificada em outra. Em seguida, o programa deve exibir os valores atualizados das variáveis após cada operação.